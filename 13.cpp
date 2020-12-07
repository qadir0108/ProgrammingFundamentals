#include <iostream>
using namespace std;
int main() 
{
	int x = -2, y = 0;
	while(x <= 3) {
		y = y + 2;
		x = x + 1;
		//cout << x << " " << y << endl;
	}
	cout << x << " " << y << endl;
	return 0;
}
