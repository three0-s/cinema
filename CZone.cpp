#include "CZone.h"

CZone::CZone(int row_num, int col_num): m_row_num(row_num), m_col_num(col_num){
    for(int i = 0; i < SCHEDULE_NUM; i++){
        m_seat_info[i] = new CSeat* [m_row_num];
        
        for(int j = 0; j < m_row_num; j++){
            m_seat_info[i][j] = new CSeat[m_col_num];
        }
    }
}

CZone::CZone(){}    //do nothing

void CZone::set_seat_num(bool want_row_num, int num){
    if(want_row_num){
        this -> m_row_num = num;
    }
    else{
        this -> m_col_num = num;
    }
}


const CZone& CZone::operator= (const CZone& zone){
    if(this != &zone){
        for(int i = 0; i < SCHEDULE_NUM; i++){
            m_seat_info[i] = new CSeat* [zone.get_seat_num(true)];
        
            for(int j = 0; j < m_row_num; j++){
                m_seat_info[i][j] = new CSeat[zone.get_seat_num(false)];
            }
        }
        for(int i = 0; i < SCHEDULE_NUM; i++){
            for(int j = 0; j < m_row_num; j++){
                for(int k = 0; k < m_col_num; k++){
                    m_seat_info[i][j][k] = zone.get_seat_info(j, k, i);
                }
            }
        }
        m_row_num = zone.get_seat_num(true);
        m_col_num = zone.get_seat_num(false);
    }
    return *this;
}

int CZone::get_seat_num(bool want_row_num) const{
    if(want_row_num)
        return m_row_num;
    return m_col_num;
}

CZone::CZone(const CZone& zone): m_row_num(zone.get_seat_num(true)), m_col_num(zone.get_seat_num(false)){
    for(int i = 0; i < SCHEDULE_NUM; i++){
        m_seat_info[i] = new CSeat* [m_row_num];
        
        for(int j = 0; j < m_row_num; j++){
            m_seat_info[i][j] = new CSeat[m_col_num];
        }
    }

    for(int i = 0; i < SCHEDULE_NUM; i++){
        for(int j = 0; j < m_row_num; j++){
            for(int k = 0; k < m_col_num; k++){
                m_seat_info[i][j][k] = zone.get_seat_info(j, k, i);
            }
        }
    }

}

void CZone::set_seat_info(int row, int col, int time, const CSeat& seat){
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

