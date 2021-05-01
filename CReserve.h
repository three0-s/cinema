#ifndef __CRESERVE__
#define __CRESERVE__

#include<string>

#include "CMovie_Info.h"
#include "CPerson_Info.h"
#include "CHelpdesk.h"
#include "Option.h"
class CReserve {
private:
	CHelpdesk chatbot2;
	std::string movie_name;
	int movie_time;
	int movie_zone;
	
	CMovie_Info m_movies[MOVIES_NUM];
public:
	CReserve();
	bool reserving_info(CPerson_Info &customer);
	bool cancel_reservation(CPerson_Info &customer);
	

};

#endif