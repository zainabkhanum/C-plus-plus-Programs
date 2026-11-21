#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout<<"Enter the value of x: \n";
	cout<<"Enter the value of y: ";
	cin>>x>>y;
	cout<<"The original value in x= "<<x<<" and y= "<<y;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"The original value in x= "<<x<<" and y= "<<y;
	return 0;
}
