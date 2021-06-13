// Find the third angle of a triangle
#include <iostream>

using namespace std;

ThirdAngle(int a, int b, int c)
{
	c = 180-(a+b);
	cout << "Value of third angle is:" << c << endl;
}

int main()
{
	float a, b, c;
	cout << "Please enter the value of first angle:" << endl;
	cin >> a;
	cout << "Please enter the value of second angle:" << endl;
	cin >> b;
	ThirdAngle(a,b,c);
	
}
