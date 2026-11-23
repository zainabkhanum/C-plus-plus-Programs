#include <iostream>
using namespace std;
int main()
{
	int age;
	long days, months;
	cout<<"Enter Age in Years: ";
	cin>>age;
	months=age*12;
	days=age*365;
	cout<<"Age in Months: "<<months<<endl;
	cout <<"Age in Days(approximately): "<<days;
	return 0;
}
