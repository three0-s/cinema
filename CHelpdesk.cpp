#include "CHelpdesk.h"
#include<iostream>
CHelpdesk::CHelpdesk() {}

int CHelpdesk::menu() {
	int choice;
	std::cout << "영화 예매는 1번, 예매 현황 분석은 2번을 눌러주세요. " << std::endl;
	std::cin >> choice;
	return choice;
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