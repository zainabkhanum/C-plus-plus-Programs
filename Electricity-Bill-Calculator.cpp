#include <iostream>
using namespace std;
int main()
{
	double prev=12450, curr=13200;
	double cons, rate, total;
	cout<<"Enter Rate per Unit: ";
	cin>>rate;
	cons=curr-prev;
	total=cons*rate;
	cout<<"Consumed Units: "<<cons<<endl;
	cout<<"Rate per Unit: "<<rate<<endl;
	cout<<"Total Electricity Charges: "<<total;
	return 0;
}
