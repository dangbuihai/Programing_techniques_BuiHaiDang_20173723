#include <iostream>
#include "Employee.h"
using namespace std;
Employee::Employee(){
    Salary=1000;
    Name= new char[strlen("DANG")+1];
    strcpy(Name,"DANG");
}
Employee::Employee(const char* namee, int sal){
    // setName(namee);
    if (Name) delete Name;
    if (!namee) { 
            Name = NULL; 
            return; 
        }
    Name = new char[strlen(namee)+1];
    strcpy(Name,namee);
    Salary=sal;
}
Employee::~Employee(){
    if (Name != NULL) {
		delete Name;
		Salary = 0;
	}
}
// char* Employee::setName(const char* namee){
//     if (Name) delete Name;
//     if (!namee) { 
//             Name = NULL; 
//             return; 
//         }
//     Name = new char[strlen(namee)+1];
//     strcpy(Name,namee);
//     return Name;
//     }
int Employee::pay(){
        return Salary;
}
char* Employee::getName(){
        return Name;
}