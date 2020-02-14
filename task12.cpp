#include<iostream>
using namespace std;
int main()
{
	float decpounds;
	int pounds;
	float decfrac;
	cout<<"Enter decimal pounds:";
	cin>>decpounds;
	pounds=static_cast<int>(decpounds);
	decfrac=(decpounds-pounds)*20;
	static_cast<int>(decpounds);
	decpounds=static_cast<int>((decfrac-static_cast<int>(decfrac))*12);
	cout<<"Old equivalent:£"<<pounds<<'.'<<static_cast<int>(decfrac)<<'.'<<decpounds;
}
