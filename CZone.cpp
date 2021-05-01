#include "CZone.h"

CZone::CZone(int row_num, int col_num): m_row_num(row_num), m_col_num(col_num){
    for(int i = 0; i < SCHEDULE_NUM; i++){
        m_seat_info[i] = new CSeat* [m_row_num];
        
        for(int j = 0; j < m_row_num; j++){
            m_seat_info[i][j] = new CSeat[m_col_num];
        }
    }
}

void CZone::set_seat_info(int row, int col, int time, CSeat seat){
    m_seat_info[time][row][col] = seat;
}


CZone::~CZone(){
    for(int i = 0; i < SCHEDULE_NUM; i++){
        for(int j = 0; j < m_row_num; j++){
            delete [] m_seat_info[i][j];
        }
    }
    
    for(int i = 0; i < SCHEDULE_NUM; i++){
        delete [] m_seat_info[i];
    }
}
CSeat CZone::get_seat_info(int row, int col, int time) const{
    if(row > m_row_num || col > m_col_num || row < 0 || col < 0)
        return CSeat("", "", false, "", 0);   //범위 초과시 영화제목이 없는 dummy CSeat 객체 리턴
    
    return m_seat_info[time][row][col];
}

