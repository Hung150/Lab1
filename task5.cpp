#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char a;
	cout<<"Enter an uppercase or lowercase letter: ";
	cin>>a;
	cout<<islower(a);
}
