#include "CSeat.h"

CSeat::CSeat(std::string name=" ", std::string phonenumber=" ", bool gender=0, std::string movie_name, int schedule_num) :
	CPerson_Info(m_name, m_phonenumber, m_gender), CMovie_Info(m_moviename, m_schedule_num) {};

void CSeat::addnum() {}

