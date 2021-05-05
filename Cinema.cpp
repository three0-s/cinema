#include "Cinema.h"
#include "CZone.h"
#include "Option.h"

Cinema::Cinema(CZone* zones, CMovie_Info* movies, CPerson_Info* people, CPerson_Info& customer): m_gwan(zones), m_movies(movies), 
																m_people(people), m_customer(customer), m_reserve(zones, movies) { }


void Cinema::run() {
	int choice = m_chatbot1.menu();
	switch (choice) {
		case 1:
			
			m_reserve.reserving_info();
			break;
		case 2:
			
			break;

	}
}
