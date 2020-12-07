#include <iostream>
using namespace std;
int main() 
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int *b;
	int *c = &(a[1]);
	b = a;
	b[2] = 0;
	cout << b[1] << c[0] << c[1] << a[2];
	return 0;
}
