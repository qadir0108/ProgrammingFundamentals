int n = 20;
do 
{
	n = n + 30;
}while(n <= 100)
cout << n;

int x = -1, y = 0;
while(x <= 3) {
	y = y + 2;
	x = x + 1;
}
cout << y;

int n = 3;
for(int i = n; i >= 0; i--) {
	n -= i;
}
cout << n;

void main()
{
	int a = 4, b = 10;
	a = fun1(a, b);
	count << a << " " < b;
}
int fun1(int j, int &k) {
	while(j < k){
		j++;
		k -= 2;
	}
	return j;
}
