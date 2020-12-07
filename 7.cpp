#include <iostream>
using namespace std;
int main() 
{
	int i,j,k;
	for(i = 1; i <= 6 ; i++)
	{
		for(k = 1; k<= i / 2; k++)
			cout<< " ";
		
		for(j = 1; j<= i; j++)
			cout<< "*";
			
			cout << endl;
	}
	return 0;
}
