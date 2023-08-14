#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"Mutiplication Table using Nested Loop"<<endl<<endl;
    
    for (int x=1; x<=10; x++)
    {
        for (int z=1; z<=10; z++)
        {
            cout << right << setw(4);
            cout<<x*z;    
        }
        cout<<endl;
    }
    
    cout<<endl;
    cout<<"Developed by: Cherrylou M. Esguerra BSIT 1-I"<<endl;
    
    return EXIT_SUCCESS;
}