#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string name;
	char pasta1[]="Spaghetti", pasta2[]="Carbonara", pasta3[]="Palabok";
    char bur1[]="Cheese Burger",bur2[]="Chicken Burger",bur3[]="Ham and Cheese Burger";
	char corndog1[]="Classic", corndog2[]="Cheddar", corndog3[]="Mozzar";
    char redo,gotostart;
	int choice=0,pchoice,pchoice1,pchoice2,quantity,value,loop=0;


    cout<<"\t\t\t\t -----------------------------------------\n";
	cout<<"\t\t\t\t|\t\tMcdollibee                |\n";
	cout<<"\t\t\t\t -----------------------------------------\n";

	cout<<"Please Enter Your Name: ";
	getline(cin,name);
	cout<<"Hello "<<name<<"!"<<"\nWhat would you like to order?\n\n";

while(loop<1)
    {

	cout<<"\t\t\t\t\t--------Menu--------\n\n";

	cout<<"{1} Pastas\n";
	cout<<"{2} Burgers\n";
	cout<<"{3} Corndogs\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;
	cout<<"\n"<<"---------------------------"<<"\n\n";

if(choice==1)
        {
        cout<<"{1}"<<pasta1<<"\n";
        cout<<"{2}"<<pasta2<<"\n";
        cout<<"{3}"<<pasta3<<"\n";
        cout<<"\nPlease choose your pasta: ";
        cin>>pchoice;
        cout<<"\n";

        if(pchoice==1)
        {
            cout<<"Spaghetti cost 90 pesos\n\n";
        }
            else if(pchoice==2)
            {
                cout<<"Carbonara cost 140 pesos\n";
                cout<<endl;
            }

                else if(pchoice==3)
                {
                    cout<<"Palabok cost 125 pesos\n";
                }
                    else
                    {

                    }

			cout<<"Please Enter Quantity: ";
			cin>>quantity;
			cout<<"\n";

			switch(pchoice)
			{
			case 1: value = 90*quantity;
			break;

			case 2: value = 140*quantity;
			break;

			case 3: value = 125*quantity;
			break;
            }

			switch (pchoice)
			{
			 case 1:
			 cout<<"\t\t\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pasta1;
			 cout<<"\nYour Total Bill is "<<value<<" pesos"<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\n\nThank you For Ordering From Mcdollibee\n";
			 break;

			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<pasta2;
			 cout<<"\nYour Total Bill is "<<value<<" pesos"<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From Mcdollibee\n";
			 break;

			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pasta3;
			 cout<<"\nYour Total Bill is "<<value<<" pesos"<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From Mcdollibee\n";
			 break;
			}

            cout<<"\nWould you like to order anything else? Y / N: ";
			cin>>redo;
			cout<<"\n";

				if(redo=='Y' || redo=='y')
				{

                }

                else if(redo=='N' || redo=='n')
                {
                    cout<<"Thank you please come again\n";
                    loop++;
                }

                else
                {
                    cout<<"Invalid letter.\n";
                }
        }


else if(choice==2)
    {
        cout<<"{1}"<<bur1<<"\n";
        cout<<"{2}"<<bur2<<"\n";
        cout<<"{3}"<<bur3<<"\n";

		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice;

        if(pchoice==1)
        {
            cout<<"Cheese Burger cost 45 pesos\n";
        }
            else if(pchoice==2)
            {
                cout<<"Chicken Burger cost 70 pesos\n";
                cout<<endl;
            }

                else if(pchoice==3)
                {
                    cout<<"Ham and Cheese Burger cost 55 pesos\n";
                }
                    else
                    {

                    }

			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;

			switch(pchoice)
			{
			case 1: value = 40*quantity;
			break;

			case 2: value = 70*quantity;
			break;

			case 3: value = 55*quantity;
			break;
			}

			switch (pchoice)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur1;
			 cout<<"\nYour Total Bill is "<<value<<" pesos"<<"\nYour Order Will be delivered in 15 Minutes";
			 cout<<"\nThank you For Ordering From Mcdollibee\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bur2;
			 cout<<"\nYour Total Bill is "<<value<<" pesos"<<"\nYour Order Will be delivered in 15 Minutes";
			 cout<<"\nThank you For Ordering From Mcdollibee\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur3;
			 cout<<"\nYour Total Bill is "<<value<<" pesos"<<"\nYour Order Will be delivered in 15 Minutes";
			 cout<<"\nThank you For Ordering From Mcdollibee\n";
			 break;
            }

			cout<<"\nWould you like to order anything else? Y / N: ";
			cin>>redo;
			cout<<"\n";

				if(redo=='Y' || redo=='y')
				{

                }

                else if(redo=='N' || redo=='n')
                {
                    cout<<"Thank you please come again\n";
                    loop++;
                }

                else
                {
                    cout<<"Invalid letter.\n";
                }

    }


else if(choice==3)
    {
		cout<<"{1}"<<corndog1<<"\n";
		cout<<"{2}"<<corndog2<<"\n";
		cout<<"{3}"<<corndog3<<"\n";

		cout<<"\nPlease Enter which Sandwich you would like to have?: ";
		cin>>pchoice;

		if(pchoice==1)
        {
            cout<<"Classic cost 45 pesos\n";
        }
            else if(pchoice==2)
            {
                cout<<"Cheddar cost 70 pesos\n";
                cout<<endl;
            }

                else if(pchoice==3)
                {
                    cout<<"Mozzar cost 55 pesos\n";
                }
                    else
                    {

                    }


			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;

			switch(pchoice)
			{
			case 1: value = 240*quantity;
			break;

			case 2: value = 160*quantity;
			break;

			case 3: value = 100*quantity;
			break;

			}

			switch (pchoice)
            {

			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<corndog1;
			 cout<<"\nYour Total Bill is "<<value<<" pesos"<<"\nYour Order Will be delivered in 25 Minutes";
			 cout<<"\nThank you For Ordering From Mcdollibee\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<corndog2;
			 cout<<"\nYour Total Bill is "<<value<<" pesos"<<"\nYour Order Will be delivered in 25 Minutes";
			 cout<<"\nThank you For Ordering From Mcdollibee\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<corndog3;
			 cout<<"\nYour Total Bill is "<<value<<" pesos"<<"\nYour Order Will be delivered in 25 Minutes";
			 cout<<"\nThank you For Ordering From Mcdollibee\n";
			 break;
			}


			cout<<"\nWould you like to order anything else? Y / N: ";
			cin>>redo;
			cout<<"\n";

				if(redo=='Y' || redo=='y')
				{

                }

                else if(redo=='N' || redo=='n')
                {
                    cout<<"Thank you please come again\n";
                    loop++;
                }

                else
                {
                    cout<<"Invalid letter.\n";
                }




    }


    }
}