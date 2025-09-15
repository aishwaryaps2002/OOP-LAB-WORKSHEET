#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float n,d,b;
	int r;
	cout<<"Enter beginning odometer reading:";
	cin>>n;
	cout<<"Enter ending odometer reading:";
	cin>>d;
	b=d-n;
	r=b*25;
	cout<<fixed<<setprecision(1);
	cout<<"You travelled " <<b <<" miles.";
	cout<<"At Rs.25 per mile,your remuneration is Rs."<<r;
	return 0;
}
	

