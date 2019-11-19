#ifndef Worker_HEADER
#define Worker_HEADER
#include "Employee.h"
class Worker:public Employee {
    private:
        int Level;
    public:
        Worker();
        Worker(string namee, int sal, int lev);
        ~Worker();
        void doWork();
};
#endif