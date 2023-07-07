#include<iostream>
#include<string.h>
using namespace std;
class Distance{
	public :
	int d1,d2,sum;
	void read()
	{
		cout<<"enter distance 1 = ";
		cin>>d1;
		cout<<"enter distance 2 = ";
		cin>>d2;
	}
//	void print()
//	{
//		cout<<"distance 1 = "<<d1<<endl;
//		cout<<"distance 2 = "<<d2<<endl;
//	}
	void add()
	{
		sum = d1+d2;
		cout<<"d1 + d2 ="<<sum<<endl;
	}
};
int main()
{
	Distance d;
	d.read();
//	d.print();
	d.add();
}
