#include <iostream>
using namespace std;
int main()
{
	float eng, math, prg, ds, comp;
	double total, per, avg;
	// INPUTS
	cout<<"Enter English Marks: ";
	cin>>eng;
	cout<<"Enter Mathematics Marks: ";
	cin>>math;
	cout<<"Enter Programming Marks: ";
	cin>>prg;
	cout<<"Enter Database Systems Marks: ";
	cin>>ds;
	cout<<"Enter Computer Networks Marks: ";
	cin>>comp;
	// CALCULATIONS
	total=eng+math+prg+ds+comp;
	per=(total/500)*100;
	avg=total/5;
	// OUTPUTS
	cout<<"------------------------"<<endl;
	cout<<"Total Marks: "<<total<<endl;
	cout<<"Percentage: "<<per<<"%"<<endl;
	cout<<"Average: "<<avg;
	return 0;
}
