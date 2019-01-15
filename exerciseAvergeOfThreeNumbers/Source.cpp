#include <iostream>
using namespace std;

void PrintInputMeessage();

void GetInputNumber(float *a);

float GetAverageFromThreeNumbers(float a, float b, float c);



int main()

{

	float  a = 0, b = 0, c = 0, g;
	PrintInputMeessage();
	GetInputNumber(&a);
	PrintInputMeessage();
	GetInputNumber(&b);
	PrintInputMeessage();
	GetInputNumber(&c);
	g = GetAverageFromThreeNumbers(a, b, c);
	cout << "The Avergae for 3 numbers is : " << g << endl;
	system("pause ");
	return 0;
}
void PrintInputMeessage()
{
	cout << "please Enter A number : ";

}
void GetInputNumber(float *a)
{
	cin >> *a;
}
float GetAverageFromThreeNumbers(float a, float b, float c)
{
	float multiplenumber;
	float result;
	multiplenumber = a + b + c;
	result = multiplenumber / 3.0; 
	cout << result; 
	return result;

}

