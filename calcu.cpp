#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    char calcu;

    cin>>num1;
    cin>>num2;
    cout<<endl;
    cout<<"[+] [-] [*] [/12]"<<endl;
    cout<<"<< ";
    cin>>calcu;

    switch (calcu)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    
    default:
    cout<<"bobong user kaba!!";
        break;
    }
}