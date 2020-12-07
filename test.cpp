#include<iostream>
using namespace std;
class CalculatorTest
{
	void TestAdd()
	{
		int a = 10;
		int b = 5;
		int c = 15;
		Calculator obj = new Calcutor();
		int result = obj.add(a, b);
		
		Assert.Equal(c, result); 
		// True - Pass
		// False - Fail
	}
}
