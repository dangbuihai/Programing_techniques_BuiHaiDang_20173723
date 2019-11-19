#ifndef Worker_HEADER
#define Worker_HEADER
#include "Employee.h"
class Worker:public Employee {
    private:
        int Level;
    public:
        Worker();
        Worker(const char* namee, int sal, int lev);
        ~Worker();
        void doWork();
};
#endif