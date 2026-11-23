#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double area, a, b, c, s;
	cout<<"Enter Three Sides of Triangle: ";
	cin>>a>>b>>c;
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area of Triangle: "<<area;
	return 0;
}
