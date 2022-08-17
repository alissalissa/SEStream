//The main library include
#include "ses.h"

//Constructor
PWFetcher::PWFetcher(void){

    //construct the base
    //Are we using the command line?
    #ifdef __SESTREAM_PWSTREAMCLI_H__
    stream=new PWStreamCLI();
    //Elseif to follow
    #endif // __SESTREAM_PWSTREAMCLI_H__

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
