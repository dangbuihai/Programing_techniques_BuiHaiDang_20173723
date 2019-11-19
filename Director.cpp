#include <iostream>
#include "Director.h"
using namespace std;
Director::Director():Employee(){
    
}
Director::Director(const char* namee, int sal):Employee(namee,sal){
    
}
Director::~Director(){
    
}
void Director::doWork(){
        cout<<"Director done"<< endl;

    }