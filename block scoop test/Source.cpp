# include <iostream>
using namespace std;
int main ()
{
	int x;
	cout << "Enter number : ";
	cin >> x;
	cout <<endl;
	cout << x << " befor if "<<endl;
	if (true)
	{
		int x = 50;
		cout << "x in if "<<x<<endl;
	}
	cout << x << " after  if "<<endl;

	system("pause");
	return 0;
}