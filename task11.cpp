#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setiosflags(ios::left)<<setw(20)<<"Second name"<<setw(20)<<"First name"<<setw(20)<<"Adress"<<setw(15)<<"city"<<endl;
	cout<<setw(75)<<setfill('-')<<"-"<<endl;
	cout<<setfill('-')<<setiosflags(ios::left)<<setw(20)<<"Petrov"<<setw(20)<<"Vasiliy"<<setw(20)<<"Klenovaya 20"<<setw(15)<<"Sank-Peteburg"<<endl;
	cout<<setiosflags(ios::left)<<setw(20)<<"Ivannov"<<setw(20)<<"Sergey"<<setw(20)<<"Osinovaya 3"<<setw(15)<<"Nahodka"<<endl;
	cout<<setiosflags(ios::left)<<setw(20)<<"Sidorov"<<setw(20)<<"Ivan"<<setw(20)<<"Berezovaya 21"<<setw(15)<<"Kalinigrad"<<endl;
}
