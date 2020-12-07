#include<iostream>
using namespace std;
int main() 
{
	int n;
	system("cls");
	cout<<"Enter number";
	cin>>n;
	if(n%2==0)
	{
		cout<<n<<" is Even number";
	}
	else
	{
		cout<<n<<" is Odd number";
	}
	getchar();
	return 0;
}
