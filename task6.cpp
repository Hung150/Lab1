#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float dollar;
	cout<<"Enter dollar amount $";
	cin>>dollar;
	cout<<dollar<<'$'<<"this amount corresponds to pound:\n"
	<<dollar/1.487<<endl;
	cout<<dollar<<'$'<<"this amount corresponds to franc:\n"
	<<dollar/0.172<<endl;
	cout<<dollar<<'$'<<"this amount corresponds to German mark:\n"
	<<dollar/0.584<<endl;
	cout<<dollar<<'$'<<"this amount corresponds to yen:\n"
	<<dollar/0.00955<<endl;
}
