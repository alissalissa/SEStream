#ifndef __SESTREAM_PWSTREAMCLI_H__
#define __SESTREAM_PWSTREAMCLI_H__

#include <curses.h>

#include <iostream>

#include "pwstreambase.h"


class PWStreamCLI : public PWStreamBase{
public:
	/** Default constructor */
	PWStreamCLI(void):PWStreamBase(){/*do nothing*/}
	/** Default destructor */
	~PWStreamCLI();

	//Fetch methods
	void fetch(void);
};

#endif // __SESTREAM_PWSTREAMCLI_H__
