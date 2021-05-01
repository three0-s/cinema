#include "CReserve.h"
#include "CPerson_Info.h"

CReserve::CReserve() {}

bool CReserve::reserving_info(CPerson_Info &customer, std::string movie_name) {
	std::string  movie_name = chatbot2.movie_name();
	std::string Person_name;
	std::string Phonenumber;
	bool gender;

	this->movie_name = movie_name;

	
	int movie_time = chatbot2.movie_time();
	this->movie_time = movie_time;

	Person_name=customer.getname();
	Phonenumber = customer.getphonenumber();
	gender = customer.getgender();

}

void CReserve::showseat() {

}



