#include <iostream>
using namespace std;
int main()
{
	int tp, readperday, nod, remainp, readedp;
	cout<<"Enter Total Pages: ";
	cin>>tp;
	cout<<"Enter Pages Read Per Day: ";
	cin>>readperday;
	cout<<"Enter No. of Days: ";
	cin>>nod;
	readedp=readperday*nod;
	remainp=tp-readedp;
	cout<<"Number of Pages you've Readed: "<<readedp<<endl;
	cout<<"Number of Pages Remaining: "<<remainp;
	return 0;
}
