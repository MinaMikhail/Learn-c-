# include <iostream>
#include <emmintrin.h>
using namespace std;
int main ()
{
	int input;
	cout <<"please entur number to count down:  ";
	cin >> input;
	while (input>0)
	{
		cout << input<<endl;
		input--;
		
	}

	system("pause");
	return 0;
}