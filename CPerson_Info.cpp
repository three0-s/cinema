#include"CPerson_Info.h"

CPerson_Info::CPerson_Info(std::string name, std::string phonenumber, bool gender):m_name(name),
m_phonenumber(phonenumber), m_gender(gender) {};

void CPerson_Info::setname(std::string m_name) { this->m_name = m_name; }
void CPerson_Info::setphonenumber(std::string m_phonenumber) { this->m_phonenumber = m_phonenumber; }
void CPerson_Info::setgender(bool gender) { this->m_gender = m_gender; }
void CPerson_Info::setpoint(int point) {this-> m_point = point;}

int CPerson_Info::getpoint() const { return m_point; }
std::string CPerson_Info::getname() const{ return m_name; }
std::string CPerson_Info::getphonenumber() const{ return m_phonenumber; }
bool CPerson_Info::getgender() const{ return m_gender; }
