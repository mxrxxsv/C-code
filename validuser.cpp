#include <iostream>

 using namespace std;

 int main()
{
    int num;

    cout<<"Enter an Integer Between 1 to 10: ";
    cin>>num;

    while(num < 1 || num > 10)
    {
        cout<<"Invalid number. Enter again: ";
        cin>>num;
    }
    cout<<"Valid";
    cout<<endl<<endl;
    cout<<"James Marius G. Santos"<<endl;
    cout<<"BSIT 1-G";

    return 0;
}