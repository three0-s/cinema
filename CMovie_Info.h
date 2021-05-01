#ifndef __CMOVIEINFO__
#define __CMOVIEINFO__

#include <string>

enum schedule {MORNIG_1, MORNIG_2, MORNIG_3,
               AFTERNOON_1, AFTERNOON_2, AFTERNOON_3,
               };


// [상영관 번호, 상영시간]을 하나로 묶어서 관리함.
struct schedule_table{
    int m_zone_num;
    schedule m_movie_schedule; 
};


class CMovie_Info{
private:
    const std::string m_moviename;
    schedule_table* m_schedule;         //[상영관 번호, 상영시간]의 배열을 만들어서 영화 상영정보를 저장.
    const int m_schedule_num;           //위의 배열의 갯수를 저장하는 변수. 즉 하루에 몇번 상영하는지.

public:
    CMovie_Info(std::string name, int num);

    const std::string get_movie_name() const;
    schedule_table* get_movie_schedule() const;

    void set_movie_schedule(schedule_table* table);
    ~CMovie_Info();
};

#endif