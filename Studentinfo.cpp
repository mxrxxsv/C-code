#include <iostream>
#include <string>
using namespace std;

int main()
{

    int age, courseid;
    string name;
    string course;

    cout<<"STUDENT INFORMATION"<<endl;

    cout<<"Enter your Name: ";
    getline(cin,name);
    cout<<"Enter your Age: ";
    cin>>age;

    bool validCourse = false;

    while(!validCourse){

    cout<<"Pick Your Course"<<endl;
    cout<<"[1] - BSIT"<<endl;
    cout<<"[2] - CE"<<endl;
    cout<<"[3] - BSN"<<endl;
    cout<<endl;
    cout<<">> ";
    cin>>courseid;
    if (courseid >=1 && courseid <=3){

        validCourse = true;
       if (courseid == 1){
        course = "BSIT";
       }else if(courseid == 2){
        course = "CE";
       }else if(courseid == 3){
        course = "BSN";
       }

        cout<<"NAME: "<<name<<endl;
        cout<<"AGE: "<<age<<endl;
        cout<<"COURSE: "<<course<<endl;


    }else{
        cout<<"INVALID!\n\n";
    }

    }

    
}