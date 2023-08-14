#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int bal=0;
    int loop=0;
    int act, val, redo, acc;
    int account[]={1000, 7000};
    cout<<"\n                  Welcome to Banko de Jaen\n\n";
    
    while (loop<1)
    {
    cout<<"     ____________________________\n";
    cout<<"    |                            |\n";
    cout<<"    |       Which Account?       |\n";
    cout<<"    |____________________________|\n\n";
        cout<<"    [ 1 ] Savings A\n    [ 2 ] Savings B\n\n>>";
        cin>>acc;
        
    if (acc==1)
    {
    cout<<"     ____________________________\n";
    cout<<"    |                            |\n";
    cout<<"    |          Savings A         |\n";
    cout<<"    |     How Can I Help You?    |\n";
    cout<<"    |____________________________|\n\n";
    cout<<"        Balance: "<<account[0]<<"\n\n";
    cout<<"    [ 1 ] Deposit\n    [ 2 ] Withdraw\n\n>>";
    cin>>act;
    cout<<endl;
    if (act==1)
    {
        cout<<"     ____________________________\n";
        cout<<"    |                            |\n";
        cout<<"    |    You chose to Deposit    |\n";
        cout<<"    |____________________________|\n";
        
        cout<<"\n        Enter the Amount: ";
        cin>>val;
        
        account[0]=account[0]+val;
        
        cout<<"     ____________________________\n";
        cout<<"    |                            |\n";
        cout<<"    |     Deposit Succesful      |\n";
        cout<<"    |____________________________|\n\n";
        cout<<"        New Balance: "<<account[0]<<"\n\n";
    }
        else if (act==2)
        {
            cout<<"     ____________________________\n";
            cout<<"    |                            |\n";
            cout<<"    |   You chose to Withdraw    |\n";
            cout<<"    |____________________________|\n";
            cout<<"\n        Enter the Amount: ";
            cin>>val;
            
            account[0]=account[0]-val;
            
            cout<<"     ____________________________\n";
        cout<<"    |                            |\n";
        cout<<"    |     Widthdraw Succesful    |\n";
        cout<<"    |____________________________|\n\n";
        
        cout<<"        New Balance: "<<account[0]<<"\n\n";
        }
            else 
            {
                cout<<"Sorry, that wasn't a choice\n\n";
            }      
    }
    else if (acc==2)
    {
    cout<<"     ____________________________\n";
    cout<<"    |                            |\n";
    cout<<"    |          Savings B         |\n";
    cout<<"    |     How Can I Help You?    |\n";
    cout<<"    |____________________________|\n\n";
    cout<<"        Balance: "<<account[1]<<"\n\n";
    cout<<"    [ 1 ] Deposit\n    [ 2 ] Withdraw\n\n>>";
    cin>>act;
    cout<<endl;
    if (act==1)
    {
        cout<<"     ____________________________\n";
        cout<<"    |                            |\n";
        cout<<"    |    You chose to Deposit    |\n";
        cout<<"    |____________________________|\n";
        
        cout<<"\n        Enter the Amount: ";
        cin>>val;
        
        account[1]=account[1]+val;
        
        cout<<"     ____________________________\n";
        cout<<"    |                            |\n";
        cout<<"    |     Deposit Succesful      |\n";
        cout<<"    |____________________________|\n\n";
        cout<<"        New Balance: "<<account[1]<<"\n\n";
    }
        else if (act==2)
        {
            cout<<"     ____________________________\n";
            cout<<"    |                            |\n";
            cout<<"    |   You chose to Withdraw    |\n";
            cout<<"    |____________________________|\n";
            cout<<"\n        Enter the Amount: ";
            cin>>val;
            
            account[1]=account[1]-val;
            
            cout<<"     ____________________________\n";
        cout<<"    |                            |\n";
        cout<<"    |     Widthdraw Succesful    |\n";
        cout<<"    |____________________________|\n\n";
        
        cout<<"        New Balance: "<<account[1]<<"\n\n";
        }
            else 
            {
                cout<<"Sorry, that wasn't a choice\n\n";
            }
    }
    
    else 
    {
        cout<<"\nSorry, you don't have that many accounts\n\n";
    }
    
    cout<<"    Would you like to do another Transaction?\n\n    [ 1 ] Yes\n    [ 2 ] No\n\n>>";
    cin>>redo;
    cout<<endl;
    if (redo==1)
    {}
    else if (redo==2)
    {
        loop++;
    }
    else 
    {
        cout<<"Sorry, that is not choice\n";
    }
    }
    cout<<"    ............................\n";
    cout<<"    :    Have a Nice Day <3    :\n";
    cout<<"    :..........................:\n\n";
    
    cout<<"By: Banko de Jaen Group, All rights Reserved";
    return 0;
}