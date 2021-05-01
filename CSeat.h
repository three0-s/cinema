#ifndef __CSEAT__
#define __CSEAT__

#include"CPerson_Info.h"
#include"CMovie_Info.h"

class CSeat : public CPerson_Info, public CMovie_Info{
private:
	static int m_seatnum;

public:
	CSeat(std::string name, std::string phonenumber, bool gender, std::string movie_name, int schedule_num);
	CSeat(const CSeat& seat);
	void addnum();
	void init_seatnum();
};

#endif