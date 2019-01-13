#include<iostream>
using namespace std;
int main()
{
	float num1;
	float num2;
	float num3;
	int counter;
	system("color 1a");
	cout << " \n\n\n \t\t\t max number virsion 1 \n\n\n " << endl;

	cout << " \n\n\n \t\t\t This simple app to cmpare 3 numbers \n\n\n "<<endl;
	cout << "please enter your first number : ";
	cin >> num1 ; 
	cout<<endl;
	cout << "please enter your second number : ";
	cin >> num2;
	cout << endl;
	cout << "please enter your third number : ";
	cin >> num3 ;
	cout << endl;

	if ((num1 > num2) && (num1 > num3))
		cout << "First Number is larger"<<endl;
	if ((num2 > num1) && (num2 > num3))
		cout << "second number is larger"<<endl;
	if ((num3 > num1) && (num3 > num2))
		cout << "third number is larger " << endl;
	if ((num1==num2) && (num2 ==num3))
		cout << "All numbers are equals " << endl;


	system("pause");
	return 0;
}