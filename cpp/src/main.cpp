#include <iostream>
#include "multi-threading/mythreads.h"


using namespace std; 
//extern void function1(); 
//extern void function2();

extern void  * function1(void * argument);
extern void  * function2(void * argument);

extern "C"
{
#include <unistd.h>
#include <pthread.h>
}


int main (){
	int choice = 0; 
        cout <<"Welcome to cpp (Cpp Programming Practises)!\n\n";
        cout << "1. Multi-Threading (POSIX) \n2. Boost\n3. STL\4. Core\n\n";
        cin >> choice; 
	
        switch (choice){
        
            case 1: 
                
                //Creating two threads 
                pthread_t t1, t2; 

                pthread_create( &t1, NULL, function1,NULL); // create a thread running function1
                pthread_create( &t2, NULL, function2,NULL); // create a thread running function2
                
//                function1();
//                function2();
                break; 
            default:
                cout <<"You've to select only options displayed above!\n\n";
        }
        sleep (1);
        return 0;
}


