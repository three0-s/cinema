#ifndef __CZONE__
#define __CZONE__

#include "CSeat.h"
#include "Option.h"

class CZone{
private:
    CSeat** m_seat_info[SCHEDULE_NUM];      //한 상영관에서 상영되는 좌석의 정보를 저장함.
    const int m_row_num, m_col_num;

public:
    CZone(int row_num, int col_num);
    ~CZone();
    void set_seat_info(int row, int col, int time, const CSeat& seat);  //[time][row][col] 위치의 좌석 정보를 세팅함.
    CSeat get_seat_info(int row, int col, int time) const;  //[time][row][col] 위치의 좌석 정보를 리턴함.
};

#endif