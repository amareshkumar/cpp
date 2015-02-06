#include "mythreads.h"

//void function1()
//{
//    cout << "hello..." << endl ;
//    sleep(10); // fall asLeep here for 2 seconds...
//
//}
//
//void function2()
//{
//    cout << " ....world" << endl ;
//}


void * function1(void * argument)
{
    cout << " hello " << endl ;
    sleep(2); // fall alseep here for 2 seconds...
    return 0;
}

void * function2(void * argument)
{
    cout << " world "  << endl ;
    return 0;
}