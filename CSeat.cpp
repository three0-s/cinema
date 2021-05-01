#include "CSeat.h"

int CSeat::m_seatnum = 0;

CSeat::CSeat(const CSeat& seat){
	m_seatnum = seat.m_seatnum;
}

void CSeat::init_seatnum() {
	m_seatnum = 0;
}
CSeat::CSeat(std::string name, std::string phonenumber, bool gender, std::string movie_name, int schedule_num) :
	CPerson_Info(name, phonenumber, gender), CMovie_Info(movie_name, schedule_num) {
	CSeat::addnum();
};

void CSeat::addnum() { this->m_seatnum++; }