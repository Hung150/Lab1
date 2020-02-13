#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long pop1=8425785,pop2=47,pop3=9761;
	cout<<setfill('.')<<setw(10)<<"City"<<setw(25)<<"Population"<<endl
	<<setw(9)<<"Moscow"<<setw(15)<<pop1<<endl
	<<setw(9)<<"Kirov"<<setw(16)<<pop2<<endl
	<<setw(9)<<"Gloom"<<setw(12)<<pop3<<endl;
}
