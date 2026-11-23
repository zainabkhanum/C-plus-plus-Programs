#include <iostream>
using namespace std;
int main()
{
	double l, w, ppsf, ta, tp;
	cout<<"Enter length of Plot: ";
	cin>>l;
	cout<<"Enter width of Plot: ";
	cin>>w;
	cout<<"Enter Price per Square Foot: ";
	cin>>ppsf;
	ta=l*w;
	tp=ta*ppsf;
	cout<<"Length: "<<l<<endl;
	cout<<"Width: "<<w<<endl;
	cout<<"Price per Square Foot: "<<ppsf<<endl;
	cout<<"Total Area: "<<ta<<" sqft "<<endl;
	cout<<"Total Price: "<<tp;
	return 0;
}
