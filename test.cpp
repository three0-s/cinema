//#include "CHelpdesk.h"
#include "CPrint.h"
#include <windows.h>
#include "Option.h"

int main(){
    /*
    CZone zones[ZONE_NUM]={CZone(SEAT_ROW_NUM, SEAT_COL_NUM), CZone(SEAT_ROW_NUM, SEAT_COL_NUM),
                           CZone(SEAT_ROW_NUM, SEAT_COL_NUM), CZone(SEAT_ROW_NUM, SEAT_COL_NUM),};


    CMovie_Info movies[MOVIES_NUM]={CMovie_Info("어벤져스", 6), CMovie_Info("소울", 6), CMovie_Info("광해", 6), CMovie_Info("어바웃 타임",6)};
    
    std::string movie_title[MOVIES_NUM];
    for(int i=0; i<MOVIES_NUM; i++){
        movie_title[i]=movies[i].get_movie_name();
    }

    CReserve receptionist(zones, movies);
    CPerson_Info customer("임예원", "01054462109", true, 50000);

    CHelpdesk chatbot(receptionist, movie_title, customer);
    while(1){bool k = chatbot.menu();}*/
    std::string* m_movie_num;
    m_movie_num = new std::string[MOVIES_NUM];
	for(int i = 0; i < MOVIES_NUM; i++)
		m_movie_num[i] = std::to_string(i+1);
    
    for(int i = 0; i < MOVIES_NUM; i++){
        std::cout << m_movie_num[i] << "번" <<std::endl; 
    }
    Sleep(100000);
    return 0;
}