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
	CZone * m_gwan;
	CHelpdesk m_chatbot1;
	CReserve m_reserve;
	CAnalyze m_analyze;
	CMovie_Info* m_movies;
	CPerson_Info* m_people;

public:
	Cinema();
	void run() {};
};
#endif
