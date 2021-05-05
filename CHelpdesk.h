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
	CPerson_Info m_customer;

	std::string* m_movie_titles;
	std::string* m_movie_num;
	std::string m_col1_idx, m_col2_idx;

public:
	CHelpdesk(CReserve& receptionist, std::string* movie_titles, CPerson_Info& customer);
	bool menu();

};








#endif
