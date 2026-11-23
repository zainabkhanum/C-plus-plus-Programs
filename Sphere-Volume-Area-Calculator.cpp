#include <iostream>
using namespace std;
int main()
{
	double r, v, a;
	double pi=3.14;
	cout<<"Enter Radius of a Sphere: ";
	cin>>r;
	v=4.0/3.0*pi*r*r*r;
	a=4*pi*r*r;
	cout<<"Volume of a Sphere: "<<v<<endl;
	cout<<"Area of a Sphere: "<<a<<endl;
	return 0;
}
