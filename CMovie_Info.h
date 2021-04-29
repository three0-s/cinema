#ifndef __CMOVIEINFO__
#define __CMOVIEINFO__

#include <string>

using namespace std;

enum schedule {MORNIG_1, MORNIG_2, MORNIG_3,
               AFTERNOON_1, AFTERNOON_2, AFTERNOON_3,
               EVENING_1, EVENING_2, EVENING_3};



class CMovie_Info{
private:
    string m_moviename;
    schedule m_movie_schedule[];

public:
    
};

#endif