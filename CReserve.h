#ifndef __CRESERVE__
#define __CRESERVE__

#include<string>

#include "CZone.h"
#include "CHelpdesk.h"

class CReserve {
private:
	CZone* p;
	CHelpdesk chatbot2;
	std::string movie_name;
	int movie_time;
	
	CMovie_Info m_movies[SCHEDULE_NUM];
public:
	CReserve();
	bool reserving_info(CPerson_Info &customer ,std::string movie_name){}
	
	

};

#endif