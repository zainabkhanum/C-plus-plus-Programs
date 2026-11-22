#include <iostream>
using namespace std;
int main()
{
	string name;
	double bs, hra, ma, ta, gs;
	cout<<"Enter Employee's Name: ";
	getline(cin, name);
	cout<<"Enter Basic Salary: ";
	cin>>bs;
	hra=bs*0.2;
	ma=bs*0.1;
	ta=3000;
	gs=bs+hra+ma+ta;
	cout<<"-----------------------"<<endl;
	cout<<"Employee's Name: "<<name<<endl;
	cout<<"Basic Salary: "<<bs<<endl;
	cout<<"Medical Allowance: "<<ma<<endl;
	cout<<"House Rent Allowance: "<<hra<<endl;
	cout<<"Transport Allowance: "<<ta<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"Gross Salary: "<<gs<<endl;
	return 0;
}
