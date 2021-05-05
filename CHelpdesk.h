#ifndef __CHelpdesk__
#define __CHelpdesk__
#include <iostream>
#include "CReserve.h"
#include "CPrint.h"

class CHelpdesk {
private:
	CReserve m_receptionist;
	CPrint m_printer;

public:
	CHelpdesk(CReserve& receptionist);
	bool menu();
	std::string movie_name();
	void movie_time(); 

};








#endif
