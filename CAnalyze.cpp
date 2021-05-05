#include "CAnalyze.h"
#include "Option.h"

CAnalyze::CAnalyze(CZone* zones, CMovie_Info *movies){
	for(int i = 0; i <ZONE_NUM; i++){
		zone_Info2[i] = zones[i];
	}
	for(int i = 0; i < MOVIES_NUM; i++){
		m_movies2[i] = movies[i];
	}
}

CAnalyze::CAnalyze(const CAnalyze& analyze){
	chatbot3 = analyze.get_chatbot();
	movie_name = analyze.get_movie_name();
	movie_time = analyze.get_movie_time();
	movie_zone = analyze.get_movie_zone();

	memcpy(zone_Info2, analyze.get_zone_info(), ZONE_NUM);
	memcpy(m_movies2, analyze.get_m_movies(), MOVIES_NUM);

}

void CAnalyze::start_analyzing(){
    std::cout<<"예매 현황 분석"<<std::endl;
    std::cout<<"    1주일간 좌석별 통계 "<<std::endl;
    
    std::cout<<"(1) 가장 많이 예매된 좌석"<<std::endl;
    std::cout<<"(2) 영화별 가장 많이 예매된 좌석"<<std::endl;
    std::cout<<"(3) 남녀 별 가장 많이 예매한 좌석"<<std::endl;
    std::cout<<"(4) 좌석별 세부 정보"<<std::endl;

    int choose;
    int choose2;
    std::cin>>choose;
    switch(choose){
        case 1:
            int result=most_reserved_seat();
        case 2:

        case 3:

        case 4:
            std::cout<<"1. 영화별 예매 횟수"<<std::endl;
            std::cout<<"2. 남녀 예매 비율"<<std::endl;
            std::cout<<"3. 상영대별 예매 횟수"<<std::endl;

            std::cin>>choose2;
            switch(choose2){
                case 1:
                    
                
                case 2:
                
                
                case 3:

            }

    }


}

int CAnalyze::get_movie_time() const{
    return movie_time;
};
int CAnalyze::get_movie_zone() const{
    return movie_zone;
};
CHelpdesk CAnalyze::get_chatbot() const{
    return chatbot3;
}
std::string CAnalyze::get_movie_name() const{
    return movie_name; 
}
CZone* CAnalyze::get_zone_info() const{
    return (CZone*)zone_Info2;
}
CMovie_Info* CAnalyze::get_m_movies() const{
    return (CMovie_Info*)m_movies2;
}

int CAnalyze::most_reserved_seat(){
    int result[SEAT_COL_NUM][SEAT_ROW_NUM];

    int row=0,col=0;
    for(int i=0; i<ZONE_NUM; i++){
        for(int j=0; j<SCHEDULE_NUM; j++){
            for(int k=0; k<SEAT_COL_NUM*SEAT_ROW_NUM; k++){
                if(this->zone_Info2[i].get_seat_info(row, col, j).isempty==0){
                    
                    
                    row++;
                    col++;
                }
            }
        }
    }

    return **result;
}

void CAnalyze::most_reserved_seat_movie(){

}

void CAnalyze::most_reserved_seat_gender(){
    int result[SEAT_COL_NUM][SEAT_ROW_NUM];
    int row=0, col=0;
    
    int row=0,col=0;
    for(int i=0; i<ZONE_NUM; i++){
        for(int j=0; j<SCHEDULE_NUM; j++){
            for(int k=0; k<SEAT_ROW_NUM; k++){
                for(int L=0; L<SEAT_COL_NUM; L++){
                    if(this->zone_Info2[i].get_seat_info(row,col,j).get_movie_name()==""){
                        
                    }

                }
            }
        }
    }
}

int CAnalyze::how_much_movie_reserved(){  //영화별 예매 횟수
    int p[MOVIES_NUM]={0,0,0,0};
    int row=0,col=0;
    
    for(int i=0; i<ZONE_NUM; i++){
        for(int j=0; j<SCHEDULE_NUM; j++){
            for(int k=0; k<SEAT_ROW_NUM; k++){
                for(int L=0; L<SEAT_COL_NUM; L++){         //이름이 머머 라면
                    if(this->zone_Info2[i].get_seat_info(row,col,j).get_movie_name()==""){
                        p[0]++;
                    }
                    else if(this->zone_Info2[i].get_seat_info(row,col,j).get_movie_name()==""){
                        p[1]++;
                    }
                    else if(this->zone_Info2[i].get_seat_info(row,col,j).get_movie_name()==""){
                        p[2]++;
                    }
                    else if(this->zone_Info2[i].get_seat_info(row,col,j).get_movie_name()==""){
                        p[3]++;
                    }
                    col++;
                }
                row++;
            }
        }
    }
    return (int)*p;
}

int CAnalyze::how_much_gender_reserved(){ //남녀 예매 비율
    int gender[2]={0,0};

    int row=0, col=0;

    for(int i=0; i<ZONE_NUM; i++){
        for(int j=0; j<SCHEDULE_NUM; j++){
            for(int k=0; k<SEAT_ROW_NUM; k++){
                for(int L=0; L<SEAT_COL_NUM; L++){         
                    if(this->zone_Info2[i].get_seat_info(row,col,j).getgender()==1){
                        gender[0]++;
                        }
                    else if(this->zone_Info2[i].get_seat_info(row, col, j).getgender()==0){
                        gender[1]++;
                        }         
                   
                     col++;
                }
                row++;
            }
        }
    }
    return (int)*gender;
}

int CAnalyze::how_much_time_reserved(){  // 시간대별 예매 횟수
    int time[SCHEDULE_NUM]={0,0,0,0,0,0};

    int row=0, col=0;

    for(int i=0; i<ZONE_NUM; i++){
        for(int j=0; j<SCHEDULE_NUM; j++){
            for(int k=0; k<SEAT_ROW_NUM; k++){
                for(int L=0; L<SEAT_COL_NUM; L++){
                    if(this->zone_Info2[i].get_seat_info(row,col,j).isempty==0){
                        time[j]++;
                    }
                    col++;
                }
                row++;
            }
        }
    }
    return (int)*time;
}


