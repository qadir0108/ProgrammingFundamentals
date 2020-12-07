#include <iostream>
using namespace std;
struct Student 
{
	int roll_no;
	char name[200];
	int marks;
};
bool check(char phone[]);
int main() 
{
	char phone[12] = "03216334272";
	bool result = check(phone);
	cout << "Result = " << result;
	
//	Student s1;
//	cin >> s1.roll_no;
//	cin >> s1.name;
//	cin >> s1.marks;
//	
//	cout << s1.roll_no << endl;
//	cout << s1.name << endl;
//	cout << s1.marks << endl;
//	
//	int markss = 88;
//	//float gpa = 3.99;
//	int marks[6] = {85, 67, 87, 78, 99, 56};
//	int sum1 = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5]);
//	
//	long y;
//	int x = 0;
//	int sum2 = 0;
//	float avg = 0.0;
//	
////	for (int i=0; i < 6; i++) {
////		sum2 = sum2 + marks[i];
////	}
////	
////	cout << "Total Marks = " << sum2 << endl;
////	avg = sum2 / 6;
////	cout << "Percentage = " << avg<< endl;
//	
//	printf("Kamran");
//	scanf("%d", y);
//	
//	for(x = 1; x<= 1000; x++) {
//		y = (x * x ) + (2 * x) + 3;
//		cout << " X = " << x  << ", Y = " << y << endl;
//		
////		if(i % 2 == 0) {
////			cout << "Student # " << i  << " Even" << endl;
////		} else {
////			cout << "Student # " << i  << " Odd"<< endl;
////		}
//	}
	
//	if(markss > 85)
//		cout << "A+";
//	if(markss > 80)
//		cout << "A";
		
	//char name[100] = "Usama\n";
	//cout << marks<< endl;
	//cout << gpa;
	//cin >> marks;
	//cout << marks<< endl;
//	cout << name << endl;
//	cout << "Do you want to change name ?";
//	cin >> name;
//	cout << name;
	return 0;
}

bool check(char phone[]) {
	int count = 0;
	for(int i=0;i<11; i++) {
		if(phone[i] != '\000')
		 {
		 	count++;
		 }
	}
	if(count == 11) {
		return true;
	 } else
	 {
	 	return false;
	 }
	return false;
}
