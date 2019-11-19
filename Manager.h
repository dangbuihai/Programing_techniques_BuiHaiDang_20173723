#ifndef Manager_HEADER
#define Manager_HEADER
#include "Employee.h"
class Manager:public Employee {
    private:
        char* Dept;
    public:
        Manager();
        Manager(const char* namee, int sal, const char* dept);
        ~Manager();
        void doWork();
};
#endif