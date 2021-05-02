#ifndef __CINEMA__
#define __CINEMA__

#include "CZone.h"
#include "CHelpdesk.h"
#include "CReserve.h"
#include "CAnalyze.h"
#include "Option.h"
class Cinema {

private:
	CZone * m_gwan;
	CHelpdesk m_chatbot1;
	CReserve m_reserve;
	CAnalyze m_analyze;
	 
	
public:
	Cinema();
	void run() {};
};
#endif
