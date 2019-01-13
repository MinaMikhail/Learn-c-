#include <iostream>
using namespace std;
// function declartion  (prototype or header);
//int Getmax(int a, int b);
//void printresult(int a);
//void printmessage();
//int Getmaxthree(int a ,int b, int c);
//function defintion (implemention) a,bfunction parameters
int Getmax(int a, int b)
{
	int m;
	if (a > b)
		m = a;
	else
		m = b;
	return m;

}
void printresult(int a)
{
	cout << "the maxmim is : " << a << endl;
}
void printmessage()
{
	cout << "enter number : ";

}
int Getmaxthree(int a, int b, int c)
{
	int m = Getmax(a, b);
	return Getmax(m, c);
}

int main()
{
	//read x and y
	int a, b;
	printmessage();
	cin >> a;
	printmessage();
	cin >> b;
	int z;
	printmessage();
	cin >> z;
	//display the result
	int max = Getmaxthree(a, b, z);
	printresult(max);
	system("pause");
	return 0;
}
