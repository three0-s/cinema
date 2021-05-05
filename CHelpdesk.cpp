#include "CHelpdesk.h"
#include <windows.h>

CHelpdesk::CHelpdesk(CReserve& receptionsist, std::string* movie_titles, CPerson_Info& customer): m_receptionist(receptionsist),
													m_movie_titles(movie_titles), m_customer(customer) {
	m_col1_idx = "| No |";
	m_col2_idx = "| Titles |";
	
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
	
	int title_no;

	switch (choice)
	{
	case 1:
		
		m_printer.pyo(m_col1_idx, m_col2_idx, m_movie_num, m_movie_titles, m_col1_idx.size(), m_col2_idx.size(), MOVIES_NUM);
		std::cout << "보고 싶으신 영화의 번호를 입력해 주세요\n";
		std::cin >> title_no;

		m_receptionist.set_movie_name(m_movie_titles[title_no - 1]);
		m_receptionist.reserve(m_customer);
		return true;
		break;
	case 2:
		/* code */
		break;
	case 3:
		return false;
		break;
	
	default:
		return true;
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