#ifndef __CANALYZE__
#define __CANALYZE__

#include "CHelpdesk.h"
#include "CZone.h"
#include "CMovie_Info.h"
#include "Option.h"
class CAnalyze {
private:
    CHelpdesk chatbot3;
    CZone zone_Info2[ZONE_NUM];
    CMovie_Info m_movies2[MOVIES_NUM];
    
public:
    CAnalyze(CZone* zones, CMovie_Info *movies);
    CAnalyze(const CAnalyze& analyze);
    CHelpdesk get_chatbot() const;
   
    
    void start_analyzing();
    int  (* most_reserved_seat())[SEAT_ROW_NUM];
    void most_reserved_seat_movie();
    void most_reserved_seat_gender();
    int get_movie_time() const;
	int get_movie_zone() const;

    int how_much_movie_reserved();
    int how_much_gender_reserved();
    int how_much_time_reserved();
};






#endif