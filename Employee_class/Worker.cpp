#include <iostream>
#include "Worker.h"
using namespace std;
Worker::Worker():Employee(){
    Level=1;
}
Worker::Worker(string namee, int sal, int lev):Employee(namee, sal){
    Level=lev;
}
Worker::~Worker(){
    if (Level != 0) {
		Level = 0;
	}
}
void Worker::doWork(){
    cout<<"Worker done"<< endl;

    }