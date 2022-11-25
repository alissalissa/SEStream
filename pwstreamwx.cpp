#include "pwstreamwx.h"

using namespace std;

//Constructor / Destructor
PWStreamWX::PWStreamWX():PWStreamBase(){
    //do nothing
}

PWStreamWX::~PWStreamWX(){
    delete pwstr;
}

//Fetch method
void PWStreamWX::fetch(void){

	//Create a dialog object
	SESPWDialog fetcher=new SESPWDialog(NULL);
	if(fetcher.ShowModal()==wxOK){
		*pwstr=fetcher.get_entered();
	}

}
