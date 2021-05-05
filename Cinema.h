#ifndef __CINEMA__
#define __CINEMA__

#include "CZone.h"
#include "CHelpdesk.h"
#include "CReserve.h"
#include "CAnalyze.h"
#include "Option.h"
#include "CMovie_Info.h"
#include "CPerson_Info.h"
class Cinema {

private:
	CZone* m_gwan;
	CHelpdesk m_chatbot1;
	//CReserve m_reserve;
	//CAnalyze m_analyze;
	CMovie_Info* m_movies;		
	CPerson_Info* m_people;		//미리 예매한 인원들의 정보
	CPerson_Info m_customer;      // 현재 예매 하고자 하는 고객 정보.

public:
	Cinema(CZone* zones, CMovie_Info* movies, CPerson_Info* people, CPerson_Info& customer);
	void run();
};
#endif
