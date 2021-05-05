#include "CHelpdesk.h"
#include <windows.h>

CHelpdesk::CHelpdesk(CReserve& receptionsist, std::string* movie_schedule): m_receptionist(receptionsist),
													m_movie_schedule(movie_schedule) {
	m_movie_num = new std::string[MOVIES_NUM];
	for(int i = 0; i < MOVIES_NUM; i++)
		m_movie_num[i] = std::to_string(i+1);

}

bool CHelpdesk::menu() {
	m_printer.msgbox("Welcome to LIM CINEMA!");
	
	for(int i = 0; i < 50; i++)
		std::cout << " ";

	for(int i = 0; i < 500; i++){
		std::cout << "=";
		Sleep(10);
	}
	m_printer.clear();

	int choice;
	std::cout << "영화 예매는 1번, 예매 현황 분석은 2번, 종료는 3번을 눌러주세요. \n";
	std::cin >> choice;
	
	switch (choice)
	{
	case 1:
		/* code */
		break;
	case 2:
		/* code */
		break;
	case 3:
		/* code */
		break;
	
	default:
		break;
	}

}

std::string CHelpdesk::movie_name() {
	std::string name;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "영화목록: " << std::endl;
	std::cout << "----------" << std::endl;
	
	
	std::cout << "원하시는 영화제목을 입력해 주세요>>" << std::endl;
	std::cin >> name;
	std::cout<<"---------------------------------------------------"<<std::endl;
	return name;
}

void CHelpdesk::movie_time() {

	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "영화 시간 및 상영관을 선택해 주세요>>" << std::endl;
	
}