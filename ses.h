//The one true file to include to get all library functionality.  Contains some data meta types that connect into the backend

#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <string>

#include "pwstreambase.h"
#include "pwstreamcli.h"
#include "pwstreamwx.h"

typedef enum fetch_t {
	TYPE_WX,
	TYPE_CLI
} fetch_t;

//Meta data type that connects to wx and CLI backends for password fetching
class PWFetcher {
private:
	PWStreamBase *stream;

public:

	//Constructors
	PWFetcher(fetch_t);
	~PWFetcher(void);

	//Fetch
	string fetch(void);

};

#endif // MAIN_H_INCLUDED
