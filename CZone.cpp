#include "CZone.h"

CZone::CZone(int row_num, int col_num): m_row_num(row_num), m_col_num(col_num){
    for(int i = 0; i < MOVIES_NUM; i++){
        m_seat_info[i] = new CSeat* [m_row_num];
        
        for(int j = 0; j < m_row_num; j++){
            m_seat_info[i][j] = new CSeat[m_col_num];
        }
    }
}
CZone::~CZone(){
    for(int i = 0; i < MOVIES_NUM; i++){
        for(int j = 0; j < m_row_num; j++){
            delete [] m_seat_info[i][j];
        }
    }
    
    for(int i = 0; i < MOVIES_NUM; i++){
        delete [] m_seat_info[i];
    }
}
CSeat*** CZone::get_seat_info(){
    return this->m_seat_info;
}