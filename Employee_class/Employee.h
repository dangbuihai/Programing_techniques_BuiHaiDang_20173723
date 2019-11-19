#ifndef Employee_HEADER
#define Employee_HEADER
#include <string>
using namespace std;
class Employee {
    protected:
        string Name;
        int Salary;
    public:
        Employee();
        Employee(string namee, int sal);
        ~Employee();
        int pay ();
        string getName();        
};
#endif
