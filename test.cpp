#include<iostream>
#include<math.h>
using namespace std;
bool is_armstrong(int x)
{
	int sum=0,PreX=x;
	while(x!=0)
	{
		int sub_digit=x%10;
		sum+=pow(sub_digit,3);
		x/=10;
	}
	//cout<<sum<<' '<<PreX;
	return (sum==PreX);
}
bool is_prime(int x)
{
	if(x<=1) return 0;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
void menu(){
	cout<<"******************"<<endl;
	cout<<"*                *"<<endl;
	cout<<"*   MENU         *"<<endl;
	cout<<"* 1.Armstrong    *"<<endl;
	cout<<"* 2.Prime        *"<<endl;
	cout<<"* 3.Finish       *"<<endl;
	cout<<"******************"<<endl;
}
void do_task()
{
	while(true)
	{
		cout<<"Choose (1,2,3) : ";
		int option;
		cin>>option;
		if(option==3)
		{
			char is_quit;
			cout<<"Do you want to quit(c/k) : ";
			cin>>is_quit;
			if(is_quit=='c')
			{
				cout<<"See you again!";
				return ;
			}
			else continue;
		}
		else 
		{
			int x;
			cout<<"Enter the number : ";
			cin>>x;
			if(option==1)
			{
				if(is_armstrong(x))
				cout<<x<<" is an Armstrong number!";
				else cout<<x<<" is not an Armstrong number!";
			}
			else if(option==2)
			{
				if(is_prime(x)) cout<<x<<" is a prime number!";
				else cout<<x<<" is not a prime number!";
			}
		}
		cout<<endl;
	}
}
int main()
{
	menu();
	do_task();
}
