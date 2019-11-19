#include <iostream>
#include "Employee.h"
using namespace std;
Employee::Employee(){
    Salary = 1000;
    Name = "DANG";
}
Employee::Employee(string namee, int sal){
    
    Name = namee;
    Salary = sal;
}
Employee::~Employee(){
    
    Name.erase();
}

int Employee::pay(){
    return Salary;
}
string Employee::getName(){
    return Name;
}