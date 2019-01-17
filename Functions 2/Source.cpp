#include <iostream>
using namespace std;

void incv(int x)// passing by value

{
	x = x + 1;
}
void incp(int *p)// passing by pointer
{
	*p = *p + 1;
}
void incr(int &x) // passing by referance
{
	x = x + 1;
}
int main()
{
	int y = 5;
	incr(y);
	cout << y << endl;
	system("pause");
	return 0;
}
