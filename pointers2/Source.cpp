#include <iostream>
using namespace std;

int main ()
{
	int x = 5;
	int *p1 = &x;
	cout <<"p1= "<< *p1<<" "<<p1<<endl;
	int y= 10;
	int *p2 = &y;
	cout << "p2 = "<<*p2 << " " << p2<<endl;
	*p1 = *p2;
	cout << "*p1 = *p2 = "<<*p1 << " " << p1 << endl;
	*p2 = 50;
	cout << "p1 = ater changing p2 "<<*p1 <<" "<< p1<<endl;
	cout << "p2 = after change  " << *p2 << " " << p2 << endl;
	int z;
	int *ptr = &z;
	cout << " *ptr "<<*ptr<<endl;
	*ptr = 5;
	cout << "*ptr " << *ptr<<endl;
	cout << "z = "<<z<<endl;

	system("pause");
	return 0;
}