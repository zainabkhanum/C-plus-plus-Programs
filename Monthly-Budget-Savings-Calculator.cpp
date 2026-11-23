#include <iostream>
using namespace std;
int main()
{
	double salary, rent, grocery, elec, trans, other;
	double texp, msav, asav; 
	cout<<"Enter Your Salary: ";
	cin>>salary;
	cout<<"Enter Rent: ";
	cin>>rent;
	cout<<"Enter Groceries: ";
	cin>>grocery;
	cout<<"Enter Electricity Bill: ";
	cin>>elec;
	cout<<"Enter Transport Expense: ";
	cin>>trans;
	cout<<"Enter Other Expenses: ";
	cin>>other;
	texp=rent+grocery+elec+trans+other;
	msav=salary-texp;
	asav=msav*12;
	cout<<"Your Total Expenses are: "<<texp<<" Rs. "<<endl;
	cout<<"Your Monthly Savings are: "<<msav<<" Rs. "<<endl;
	cout<<"Your Annual Savings are: "<<asav<<" Rs. ";
	return 0;
}
