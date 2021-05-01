#ifndef __CPERSONINFO__
#define __CPERSONINFO__

#include<string>

class CPerson_Info {
private:
	std::string m_name;
	std::string m_phonenumber;
	bool m_gender;
	int m_point;

public:
	CPerson_Info(std::string name, std::string phonenumber, bool gender);
	
	void setname(std::string m_name);
	void setphonenumber(std::string m_phonenumber);
	void setgender(bool gender);
	void setpoint(int point);
	
	int getpoint() const;
	std::string getname() const;
	std::string getphonenumber() const;
	bool getgender() const;
};

#endif