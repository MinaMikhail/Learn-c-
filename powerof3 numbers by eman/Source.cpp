#include <iostream>
using namespace std;
int main()
{
	//read x and y
	int x,y;
	cout << "enter number : " ;
	cin >> x;
	cout << "enter a number : ";
	cin >> y;
	//get the max of x and y 
	int max1;
	if (x > y) {
		max1 = x;
	}
	else {
		max1 = y;
	}
	//readz
	int z;
	cout << " enter a number : ";
	cin >> z;
	//get maximum  of x , y and Z
	int max2;
	if (max1 > z) {
		max2 = max1;
	}
	else {
		max2 = z;
	}
	// display the reult
	cout << "the maxmim is : " <<max2 << endl;
	system("pause");
	return 0;
}