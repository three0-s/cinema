#include "CMovie_Info.h"

CMovie_Info::CMovie_Info(std::string name, int num): m_moviename(name), m_schedule_num(num){
    m_movie_schedule = new schedule[m_schedule_num];
}

const std::string CMovie_Info::get_movie_name() const{
    return this->m_moviename;
}

schedule_table* CMovie_Info::get_movie_schedule() const{
    return this->m_movie_schedule;
}

void CMovie_Info::set_movie_schedule(schdule_table* table){
    this->m_schedule = table;
}
CMovie_Info::~CMovie_Info() {delete[] this->m_movie_schedule;}