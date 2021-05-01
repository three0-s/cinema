#include "CSeat.h"

int CSeat::m_seatnum = 0;

CSeat::CSeat(const CSeat& seat):CPerson_Info(seat.getname(), seat.getphonenumber(), seat.getgender()), 
						CMovie_Info(seat.get_movie_name(), seat.get_m_schedule_num()){
	m_seatnum = seat.m_seatnum;
}

CSeat::CSeat():CPerson_Info("", "", false), 
						CMovie_Info("", 0){
	CSeat::addnum();
}


int CSeat::get_seat_num() const{
	return m_seatnum;
}


CSeat& CSeat::operator= (const CSeat& seat){
	if(this != &seat){
		m_seatnum = seat.get_seat_num();
		
		this->setname(seat.getname());
		this->setphonenumber(seat.getphonenumber());
		this->setgender(seat.getgender());
		
		this->set_movie_name(seat.get_movie_name());
	}
	return *this;
}


void CSeat::init_seatnum() {
	m_seatnum = 0;
}
CSeat::CSeat(std::string name, std::string phonenumber, bool gender, std::string movie_name, int schedule_num) :
	CPerson_Info(name, phonenumber, gender), CMovie_Info(movie_name, schedule_num) {
	CSeat::addnum();
};

void CSeat::addnum() { this->m_seatnum++; }