#include <iostream>
using namespace std;
int main()
{
	int stu;
	double fps, total;
	cout<<"Enter Total Number of Students: ";
	cin>>stu;
	cout<<"Enter Fee per Student: ";
	cin>>fps;
	total=stu*fps;
	cout<<"Total No. of Students: "<<stu<<endl;
	cout<<"Fee per Student: "<<fps<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"Total Fee Collected by Class: "<<total;
	return 0;
}
