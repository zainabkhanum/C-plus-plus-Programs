#include <iostream>
using namespace std;
int main()
{
	double mp=1200;
	double idata=250;
	double sms=150, tmexp, tyexp;
	tmexp=mp+idata+sms;
	tyexp=tmexp*12;
	cout<<"Monthly Package: "<<mp<<endl;
	cout<<"Internet Data: "<<idata<<endl;
	cout<<"SMS Package: "<<sms<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Total Monthly Expense is: "<<tmexp<<endl;
	cout<<"Total Yearly Expense for 12 Months: "<<tyexp;
	return 0;
}
