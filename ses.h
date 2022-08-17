//The one true file to include to get all library functionality.  Contains some data meta types that connect into the backend

#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <string>

#include "pwstreambase.h"

//Which stream do we include?
#ifndef _WX_WX_H_
#include "pwstreamcli.h"
//There will be an else here in the future
#endif // _WX_WX_H_

//Meta data type that connects to wx and CLI backends for password fetching
class PWFetcher {
private:
	PWStreamBase *stream;

public:

	//Constructors
	PWFetcher(void);
	~PWFetcher(void);

	//Fetch
	string fetch(void);

};

#endif // MAIN_H_INCLUDED
