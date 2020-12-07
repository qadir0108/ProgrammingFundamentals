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
