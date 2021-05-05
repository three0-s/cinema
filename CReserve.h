#ifndef __CRESERVE__
#define __CRESERVE__

#include<string>

#include "CMovie_Info.h"
#include "CPerson_Info.h"
#include "CHelpdesk.h"
#include "Option.h"
#include "CZone.h"
#include <cstring>

class CReserve {
private:
	CHelpdesk chatbot2;
	std::string movie_name;
	int movie_time;
	int movie_zone;
	
	CZone zone_Info[ZONE_NUM];
	CMovie_Info m_movies[MOVIES_NUM];
	
public:
	CReserve(CZone* zones, CMovie_Info* movies);

	CReserve(const CReserve& reserve); //복사 생성자
	
	CHelpdesk get_chatbot() const;
	std::string get_movie_name() const;
	int get_movie_time() const;
	int get_movie_zone() const;
	CZone* get_zone_info() const;
	CMovie_Info* get_m_movies() const;

	bool reserving_info(CPerson_Info &customer);
	bool cancel_reservation(CPerson_Info &customer);
	bool isavailable(std::string &choose_seat, schedule time, int zone);
	bool isempty(int row, int col, int time, int zone);

};

#endif