#include<iostream>
using namespace std;
int main() 
{
	int a,b,c;
	system("cls");
	cout<<"Enter numbers";
	cin>>a>>b>>c;
	
	if(a<b) 
	{
		if(a<c) 
		{
			cout << a << " is smallest";
		}
		else
		{
			cout << c << " is smallest";
		}
	} 
	else
	{
		if(b<c) 
		{
			cout << b << " is smallest";
		}
		else
		{
			cout << c << " is smallest";
		}	
	} 
	getchar();
	return 0;
}
