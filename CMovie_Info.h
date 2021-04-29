#ifndef __CMOVIEINFO__
#define __CMOVIEINFO__

#define MAX_NUM_OF_
#include <string>

using namespace std;

enum schedule {MORNIG_1, MORNIG_2, MORNIG_3,
               AFTERNOON_1, AFTERNOON_2, AFTERNOON_3,
               EVENING_1, EVENING_2, EVENING_3};

class CMovie_Info{
private:
    const string m_moviename;
    schedule* m_movie_schedule;
    const int m_schedule_num;

public:
    CMovie_Info(string name, int num);
    const string get_movie_name() const;
    schedule* get_movie_schedule() const;
    ~CMovie_Info();
};

#endif