#include<iostream>
using namespace std;
int main() 
{
	int score;
	system("cls");
	cout<<"Enter score";
	cin>>score;
	
	if(score>=90) 
	{
		cout<<"A Grade";
	} 
	else if(score>=80)
	{
		cout<<"B Grade";
	} 
	else if(score>=70)
	{
		cout<<"C Grade";
	}
	else if(score>=60) 
	{
		cout<<"D Grade";
	}
	else
	{
		cout<<"F Grade";
	}
	getchar();
	return 0;
}
