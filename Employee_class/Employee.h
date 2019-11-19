#ifndef Employee_HEADER
#define Employee_HEADER
#include <string.h>
using namespace std;
class Employee {
    protected:
        char* Name;
        int Salary;
        // string Name;
    public:
        Employee();
        Employee(const char* namee, int sal);
        ~Employee();
        // string getName (string namee);
        // char* setName (const char* namee);
        int pay ();
        char* getName();        
};
#endif
