#include <iostream>
using namespace std;
int main()
{
double distance, time, speed;
cout<<"Enter the distance travelled in miles: ";
cin>>distance;
cout<<"Enter the speed of vehicle: ";
cin>>speed;
time=distance/speed;
cout<<"Time required to reach at distination is: "<<time<<" hours.";
return 0;
}
