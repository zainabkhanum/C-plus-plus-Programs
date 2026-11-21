#include <iostream>
using namespace std;
int main()
{
	string name;
	double tf, af, ef, lf, total;
	cout<<"Enter Name: ";
	getline (cin, name);
	cout<<"Enter Tuition Fee: ";
	cin>>tf;
	cout<<"Enter Admission Fee: ";
	cin>>af;
	cout<<"Enter Examination Fee: ";
	cin>>ef;
	cout<<"Enter Library Fee: ";
	cin>>lf;
	total=tf+af+ef+lf;
	// COMPLETE FEE VOUCHER
	cout<<"--------------------------------"<<endl;
	cout<<"Student Name: "<<name<<endl;
	cout<<"Tuition Fee: "<<tf<<endl;
	cout<<"Admission Fee: "<<af<<endl;
	cout<<"Examination Fee: "<<ef<<endl;
	cout<<"Library Fee: "<<lf<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Total Fee is:"<<total;
	return 0;	
}
