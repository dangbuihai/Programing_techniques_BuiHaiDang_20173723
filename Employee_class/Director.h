#ifndef Director_HEADER
#define Director_HEADER
#include "Employee.h"
class Director : public Employee {
    private:
    public:
        Director();
        Director(const char* namee, int sal);
        ~Director();
        void doWork();
    };
#endif