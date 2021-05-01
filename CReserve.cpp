#include <string>

#include "CReserve.h"
#include "CPerson_Info.h"

CReserve::CReserve() {}

bool CReserve::reserving_info(CPerson_Info &customer) {
	std::string movie_name = chatbot2.movie_name();
	this->movie_name = movie_name;

	for (int i=0; i<MOVIES_NUM; i++){
		if(m_movies[i].get_movie_name()==movie_name){
			for(int j=0; j<m_movies[i].get_m_schedule_num(); j++){
				std::cout<< m_movies[i].get_movie_schedule()[j].m_zone_num<<"관"<<'   '<<
				m_movies[i].get_movie_schedule()[j].m_movie_schedule<<"시"<<'\n'<<std::endl;
			}
		}
	}
	
	chatbot2.movie_time();
	std::cin>>movie_zone>>movie_time;
	
	

}

bool CReserve::cancel_reservation(CPerson_Info &customer){


}





