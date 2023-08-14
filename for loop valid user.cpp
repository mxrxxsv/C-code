#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter an Interger number: ";
    cin>>num;


    for (int num; num < 1 || num > 10;){
        
       if (num < 1 || num > 10)
        {
            cout<<"Invalid number. Enter again: ";
            cin>>num;
        }
    }
    cout<<"Valid";
    cout<<endl<<endl;
    cout<<"James Marius G. Santos"<<endl;
    cout<<"BSIT 1-G";

    
}