#ifndef __CZONE__
#define __CZONE__

#include "CSeat.h"
#include "Option.h"
#include <cstring>

class CZone{
private:
    CSeat** m_seat_info[SCHEDULE_NUM];      //한 상영관에서 상영되는 좌석의 정보를 저장함.
    int m_row_num, m_col_num;

public:
    CZone(int row_num, int col_num);
    CZone(const CZone& zone);
    CZone();
    ~CZone();

    const CZone& operator= (const CZone& zone);

    int get_seat_num(bool want_row_num) const;
    void set_seat_num(bool want_row_num, int num);
    void set_seat_info(int row, int col, int time, const CSeat& seat);  //[time][row][col] 위치의 좌석 정보를 세팅함.
    CSeat get_seat_info(int row, int col, int time) const;  //[time][row][col] 위치의 좌석 정보를 리턴함.
};

#endif