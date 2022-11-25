//Unit Tests for SEStream

#include <iostream>

#include "ses.h"


int main(int argc,char *argv[]){

    //Generate a fetcher
    PWFetcher *test=new PWFetcher(TYPE_WX);
    string pw=test->fetch();

    cout<<pw<<endl;

    return 0;

}
