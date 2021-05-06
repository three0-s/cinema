#include "CHelpdesk.h"

int main(){
    CZone zones[ZONE_NUM]={CZone(SEAT_ROW_NUM, SEAT_COL_NUM), CZone(SEAT_ROW_NUM, SEAT_COL_NUM),
                           CZone(SEAT_ROW_NUM, SEAT_COL_NUM), CZone(SEAT_ROW_NUM, SEAT_COL_NUM),};


    CMovie_Info movies[MOVIES_NUM]={CMovie_Info("어벤져스", 6), CMovie_Info("소울", 6), CMovie_Info("광해", 6), CMovie_Info("어바웃 타임",6)};
    
    std::string movie_title[MOVIES_NUM];
    for(int i=0; i<MOVIES_NUM; i++){
        movie_title[i]=movies[i].get_movie_name();
    }


    CHelpdesk chatbot()
}