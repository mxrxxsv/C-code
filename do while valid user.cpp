#include <iostream>

 using namespace std;

 int main()
 {
    int num;

    do
    {
        cout<<"Enter an Integer Between 1 to 10: ";
        cin>>num;

        if (num < 1 || num > 10)
        {
            cout<<"Invalid number. Enter again: ";
            cin>>num;
        }
    }
    while (num < 1 || num > 10);

    cout<<"Valid";
    cout<<endl<<endl;
    cout<<"James Marius G. Santos"<<endl;
    cout<<"BSIT 1-G";

    return 0;
 }