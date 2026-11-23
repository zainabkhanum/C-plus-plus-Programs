#include <iostream>
using namespace std;
int main()
{
	float w, x, y, z;
	double sum, avg, pr;
	cout<<"Enter Four Numbers: ";
	cin>>w>>x>>y>>z;
	sum=w+x+y+z;
	avg=sum/4;
	pr=w*x*y*z;
	cout<<"Sum of Numbers is: "<<sum<<endl;
	cout<<"Average of Numbers is: "<<avg<<endl;
	cout<<"Product of Numbers is: "<<pr<<endl;
	return 0;
}
