#include <iostream>
using namespace std;

void main()
{
    int num1;
	int num2;
	int operation;

	int resultA;
	int resultB;
	int resultC;
	int resultD;
	
    cout << "Please Enter First Number: ";
    cin >> num1;
    cout << "Please Enter Second Number: ";
    cin >> num2;

    cout << "Enter Your Choice: (1 = Sum, 2= Sub, 3= Mul, 4= Div)" << endl;
    cin >> operation;

    resultA = a + b;
    resultB = a - b;
    resultC = a * b;
    resultD = a / b;

    if (operation == 1)
    {
       cout << "Your Answer is: " << resultA << endl;
    }

    else if (operation == 2)
    {
       cout << "Your Answer is: " << resultB << endl;
    }

    else if (operation == 3)
    {
       cout << "Your Answer is: " << resultC << endl;
    }

    else if (operation == 4)
    {
       cout << "Your Answer is: " << resultD << endl;
    }

}
