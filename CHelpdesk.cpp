#include "CHelpdesk.h"
#include<iostream>
CHelpdesk::CHelpdesk() {}

int CHelpdesk::menu() {
	int choice;
	std::cout << "��ȭ ���Ŵ� 1��, ���� ��Ȳ �м��� 2���� �����ּ���." << std::endl;
	std::cin >> choice;
	return choice;
}

std::string CHelpdesk::movie_name() {
	std::string name;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "��ȭ���:" << std::endl;
	std::cout << "----------" << std::endl;
	
	
	
	std::cout << "���Ͻô� ��ȭ������ �Է��� �ּ���>>" << std::endl;
	std::cin >> name;
	return name;
}

int CHelpdesk::movie_time() {
	int time;
	std::cout << "-------------------------------------------------" << std::endl;
	
	
	
	std::cout << "��ȭ �ð� �� �󿵰��� ������ �ּ���>>" << std::endl;

}