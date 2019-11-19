#include <iostream>
#include "Manager.h"
using namespace std;
Manager::Manager():Employee(){
    Dept= new char[strlen("Electrical Engineering")+1];
    strcpy(Dept,"Electrical Engineering");
}
Manager::Manager(const char* namee, int sal, const char* dept):Employee(namee,sal){
    if (Dept) delete Dept;
    if (!dept) { 
            Dept = NULL; 
            return; 
        }
        Dept = new char[strlen(dept)+1];
    strcpy(Dept,dept);
}
Manager::~Manager(){
    if (Dept != NULL) {
		delete Dept;
    }
}
void Manager::doWork(){
        cout<<"Manager done"<< endl;

    }