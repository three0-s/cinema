#ifndef __CSEAT__
#define __CSEAT__

#include"CPerson_Info.h"
#include"CMovie_Info.h"

class CSeat : public CPerson_Info, public CMovie_Info{
private:
	static int m_seatnum;

public:
	CSeat(std::string name, std::string phonenumber, bool gender, std::string movie_name, int schedule_num);
	CSeat();
	CSeat(const CSeat& seat);

	CSeat& operator= (const CSeat& seat);	//대입연산자 오버로딩
	
	int get_seat_num() const;
	void addnum();
	void init_seatnum();
};

#endif