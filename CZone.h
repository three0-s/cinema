#ifndef __CZONE__
#define __CZONE__

#include "CSeat.h"
#define SCHEDULE_NUM 6 

class CZone{
private:
    CSeat** m_seat_info[SCHEDULE_NUM];
    const int m_row_num, m_col_num;

public:
    CZone(int row_num, int col_num);
    ~CZone();
    CSeat*** get_seat_info();
};

#endif