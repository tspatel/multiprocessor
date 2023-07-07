#include<iostream>
#include<string.h>
using namespace std;
class father{
	public :
	void info()
		{
			cout<<"How are you Beta ?"<<endl;
		}
};
class son : public father
{
	public :
	void info()
	{
		cout<<"I am Fine."<<endl;
	}	
};  
int main()
{
	son o1;
	
	o1.father::info();
	o1.info();
}
