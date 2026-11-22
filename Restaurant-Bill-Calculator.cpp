#include <iostream>
using namespace std;
int main()
{
	double bp, bq, pp, pq, dp, dq;
	double tc, sc, fb;
	// BURGER
	cout<<"Enter Burger Price: ";
	cin>>bp;
	cout<<"Enter Burger Quantity: ";
	cin>>bq;
	cout<<"Enter Pizza Price: ";
	// PIZZA
	cin>>pp;
	cout<<"Enter Pizza Quantity: ";
	cin>>pq;
	cout<<"Enter Cold drink Price: ";
	// COLD DRINK
	cin>>dp;
	cout<<"Enter Cold drink Quantity: ";
	cin>>dq;
	// CALCULATION
	tc=(bp*bq)+(pp*pq)+(dp*dq);
	sc=tc*0.05;
	fb=tc+sc;
	// DISPLAY OUTPUT
	cout<<"Total Cost = "<<tc<<endl;
	cout<<"Service Charges (5%)  = "<<sc<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"Final Bill = "<<fb;
	return 0;	
}
