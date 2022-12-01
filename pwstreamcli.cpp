#include "pwstreamcli.h"

//Destructor
PWStreamCLI::~PWStreamCLI(){
	//Do nothing
}

/****************END DESTRUCTOR***************/

//Fetcher
void PWStreamCLI::fetch(void){

	//Prepare the terminal
	initscr();
	cbreak();
	noecho();

	//Get the password
	cin>>(*pwstr);

	//clean up
	endwin();

}
