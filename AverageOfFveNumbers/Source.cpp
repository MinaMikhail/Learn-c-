#include<iostream>
using namespace std;
int main ()
{
	int a, b, c, d, e,avg;
	cout << "please enter five numbers : "<<endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	avg = (a + b + c + d + e) / 5;
	cout << "average of five numbers is : " << avg<<endl;
	system("pause");
	return 0;
}