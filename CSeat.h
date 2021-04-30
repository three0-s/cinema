#ifndef __CSEAT__
#define __CSEAT__
                                  
#include<string>

#include"CPerson_Info.h"
#include"CMovie_Info.h"

class CSeat : public CPerson_Info, public CMovie_Info {
private:
	static int seatnum;

public:
	CSeat(std::string name, std::string phonenumber, bool gender, std::string movie_name, int schedule_num);
	static void addnum() {}
};

int CSeat::seatnum = 0;

#endif