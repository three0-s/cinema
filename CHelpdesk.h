#ifndef __CHelpdesk__
#define __CHelpdesk__
#include <iostream>
#include "CReserve.h"
#include "CPrint.h"
#include "Option.h"

class CHelpdesk {
private:
	CReserve m_receptionist;
	CPrint m_printer;

	std::string* m_movie_schedule;
	std::string* m_movie_num;
	std::string m_col1_idx, m_col2_idx;

public:
	CHelpdesk(CReserve& receptionist, std::string* movie_schedule);
	bool menu();
	std::string movie_name();
	void movie_time(); 

};








#endif
