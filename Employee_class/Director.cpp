#include <iostream>
#include "Director.h"
using namespace std;
Director::Director():Employee(){
    
}
Director::Director(string namee, int sal):Employee(namee,sal){
    
}
Director::~Director(){
    
}
void Director::doWork(){
        cout<<"Director done"<< endl;

    }