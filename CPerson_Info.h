#ifndef __CPERSONINFO__
#define __CPERSONINFO__

#include<string>

class CPerson_Info {
public:
	std::string m_name;
	std::string m_phonenumber;
	bool m_gender;

	CPerson_Info(std::string name, std::string phonenumber, bool gender);
	
	void setname(std::string m_name) {}
	void setphonenumber(std::string m_phonenumber) {}
	void setgender(bool gender) {}
	std::string getname() {}
	std::string getphonenumber() {}
	bool getgender() {}
};

#endif