#include "pwstreambase.h"

using namespace std;

//Constructor/destructor
PWStreamBase::PWStreamBase(void){
	pwstr=new string("");
}

PWStreamBase::~PWStreamBase(){
	delete pwstr;
}
/****************END CONSTRUCTOR/DESTRUCTOR***************/

//Virtual fetch method.  Throws an error unless accessed from a derived class
void PWStreamBase::fetch(void){
	//This is the base class method, should automatically throw an exception
	PWSBExcept t;
	throw t;
}
