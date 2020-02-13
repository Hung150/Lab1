#include<iostream>
using namespace std;
int main()
{
	int f,s,p;
	cout<<"enter number of pounds:";
	cin>>f;
	cout<<"enter number of shillings:";
	cin>>s;
	cout<<"enter the number of pences:";
	cin>>p;
	cout<<"Decimal pounds:"<<f+((static_cast<float>(s)*12+p)/240);
}
