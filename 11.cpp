#include <iostream>
using namespace std;
int main() 
{
	int n = 4;
	for(int i = n; i >= 0; i--) {
		n -= i;
		//cout << n << endl;
	}
	cout << n;
	return 0;
}
