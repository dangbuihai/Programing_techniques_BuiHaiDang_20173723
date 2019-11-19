#ifndef Manager_HEADER
#define Manager_HEADER
#include "Employee.h"
class Manager:public Employee {
    private:
        string Dept;
    public:
        Manager();
        Manager(string namee, int sal, string dept);
        ~Manager();
        void doWork();
};
#endif