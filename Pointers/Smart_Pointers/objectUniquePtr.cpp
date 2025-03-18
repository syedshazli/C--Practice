#include <iostream>
#include <memory>
#include <string>
using namespace std;

struct myClass{
    int numStudents;
    string teacher;
    bool isClean;
};
void uniquePtrFunc(unique_ptr<myClass> &myClassroom){
    cout<<"Hello from the function!"
    myClassroom->isClean = true;
   
}

int main(){
    //unique_ptr<A> ptr1 (new A)
    unique_ptr<myClass> classOne(new myClass);
    classOne->numStudents = 5;

    int findNumStuds = classOne->numStudents;
    cout<<"Number of students: "<<findNumStuds<<endl;

    uniquePtrFunc(classOne);
    cout<<endl;
    cout<<"I just changed a value of the pointer thru a function. Let's see if it worked"<<endl;
    cout<<classOne->isClean<<endl;

}