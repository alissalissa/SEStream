//The main library include
#include "ses.h"

//Constructor
PWFetcher::PWFetcher(fetch_t type){

    //construct the base
    //Are we using the command line or wx?
    if(type==TYPE_WX){
		stream=new PWStreamWX();
    }else{
		stream=new PWStreamCLI();
    }

}

PWFetcher::~PWFetcher(void){
    delete stream;
}

/*********************END CONSTRUCTOR**********************/

//fetch
string PWFetcher::fetch(void){
    stream->fetch();
    return stream->AccessPW();
}
