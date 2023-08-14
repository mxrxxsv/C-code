#include <iostream>
using namespace std;

int main()
{
    int j;
    
    for(int i=1; i<=5; i++)
    {

        for(int j=1; j<=10; j++)
        {
            cout<< i + j <<"_";
        }

        cout<<endl;
    }

    return 0;
}