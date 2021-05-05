#include "Cinema.h"
#include "CZone.h"
#include "Option.h"

Cinema::Cinema() { 
	m_gwan = new CZone[ZONE_NUM];
	for(int i = 0; i < ZONE_NUM; i++){
		m_gwan[i] = CZone(SEAT_ROW_NUM,SEAT_COL_NUM);
	}
	m_movies = new CMovie_Info[MOVIES_NUM] {CMovie_Info("윤희에게", 1), CMovie_Info("영웅", 2),
											CMovie_Info("십계",3 ), CMovie_Info("새해전야", 4)	};											}


}

void Cinema::run() {
	int choice = m_chatbot1.menu();
	switch (choice) {
		case 1:
			
			m_reserve.reserving_info();

		case 2:
			


	}
}
