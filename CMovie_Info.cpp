#include "CMovie_Info.h"

CMovie_Info::CMovie_Info(string name, int num): m_moviename(name), m_schedule_num(num){
    m_movie_schedule = new schedule[m_schedule_num];
}

const string CMovie_Info::get_movie_name() const{
    return this->m_moviename;
}

schedule* CMovie_Info::get_movie_schedule() const{
    return this->m_movie_schedule;
}

CMovie_Info::~CMovie_Info() {delete[] this->m_movie_schedule;}