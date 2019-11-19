#include <iostream>
#include "Manager.h"
using namespace std;
Manager::Manager():Employee(){
    Dept = "Electrical Engineering";
}
Manager::Manager(string namee, int sal, string dept):Employee(namee,sal){
    
    Dept = dept;
}
Manager::~Manager(){
    
		Dept.erase();
    
}
void Manager::doWork(){
        cout<<"Manager done"<< endl;

    }