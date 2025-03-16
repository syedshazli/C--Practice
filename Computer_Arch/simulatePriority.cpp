#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    cout<<"This is the current process priority"<<endl;
    map<int,int> priorityMap;
    // key is the PID, value is the process priority
    // process priority ranges from 0-7, 7 being highest priority
    priorityMap[1000] = 0;
    priorityMap[1001] = 4;
    priorityMap[1002] = 2;
    priorityMap[1003] = 3;
    priorityMap[1004] = 6;
    priorityMap[1005] = 7;
    priorityMap[1006] = 5;
    priorityMap[1007] = 1;

    // create PID's with their respective priorities

}