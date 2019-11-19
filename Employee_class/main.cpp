#include <iostream>
#include "Employee.h"
#include "Worker.h"
#include "Manager.h"
#include "Director.h"
using namespace std;
void main(){
    system("cls");
    // 
    Worker w;
    w= Worker::Worker("thiem", 1200, 2);
    w.doWork();
    cout << "Paid for " << w.getName() <<" "<< w.pay()<<" USD"<< endl;
    // 
    Manager m;
    m=Manager::Manager("dang", 2000, "EE");
    m.doWork();
    cout << "Paid for " << m.getName() <<" "<< m.pay()<<" USD"<< endl;
    // 
    Director d;
    d=Director::Director("chinh", 1800);
    d.doWork();
    cout << "Paid for " << d.getName() <<" "<< d.pay()<<" USD"<< endl;

}