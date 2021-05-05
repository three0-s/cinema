#ifndef __CRESERVE__
#define __CRESERVE__

#include <string>
#include <iostream>
#include "CMovie_Info.h"
#include "CPerson_Info.h"
#include "Option.h"
#include "CZone.h"
#include <cstring>

class CReserve {
private:
	std::string m_movie_name;
	int m_movie_time;
	int m_movie_zone;
	
	CZone* m_zone_info;
	CMovie_Info* m_movies;
	
public:
	CReserve(CZone* zones, CMovie_Info* movies, std::string movie_name);

	CReserve(const CReserve& reserve); //복사 생성자
	
	std::string get_movie_name() const;
	int get_movie_time() const;
	int get_movie_zone() const;
	CZone* get_zone_info() const;
	CMovie_Info* get_m_movies() const;

	bool reserve(CPerson_Info &customer);
	bool cancel_reservation(CPerson_Info &customer);
	bool isavailable(std::string &choose_seat, schedule time, int zone);
	bool isempty(int row, int col, int time, int zone);

};

#endif