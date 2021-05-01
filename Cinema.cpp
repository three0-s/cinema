#include "Cinema.h"
#include "CZone.h"

Cinema::Cinema() { gwan = new CZone[4] {CZone(5,5), CZone(6,6), CZone(7,7), CZone(8,8)}; };

void Cinema::run() {
	int choice = chatbot1.menu();
	switch (choice) {
		case 1:
			reserve.reserving_info();

		case 2:


	}
}
