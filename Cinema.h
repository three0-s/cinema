#ifndef __CINEMA__
#define __CINEMA__

#include "CZone.h"
#include "CHelpdesk.h"
#include "CReserve.h"
#include "CAnalyze.h"

class Cinema {

private:
	CZone *gwan;
	CHelpdesk chatbot1;
	CReserve reserve;
	CAnalyze analyze;


public:
	Cinema();
	void run() {};
};
#endif
