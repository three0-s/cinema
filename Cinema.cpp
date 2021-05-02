#include "Cinema.h"
#include "CZone.h"
#include "Option.h"

Cinema::Cinema() { m_gwan = new CZone[ZONE_NUM] {CZone(SEAT_ROW_NUM,SEAT_COL_NUM), CZone(SEAT_ROW_NUM,SEAT_COL_NUM),
											   CZone(SEAT_ROW_NUM,SEAT_COL_NUM),CZone(SEAT_ROW_NUM,SEAT_COL_NUM),};};

void Cinema::run() {
	int choice = m_chatbot1.menu();
	switch (choice) {
		case 1:
			
			m_reserve.reserving_info();

		case 2:


	}
}
