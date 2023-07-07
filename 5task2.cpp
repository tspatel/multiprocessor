#include<iostream>
#include<string.h>
using namespace std;

class argument{
	public:
		int arg;
		void method0()
		{
			cout<<"method with 0 arguments"<<endl;
		}
		void method1(int arg1)
		{
			cout<<"method with 1 arguments"<<"  "<<arg1<<endl;
		}
		void method2(int arg1, int arg2)
		{
			cout<<"method with 2 arguments"<<"  "<<arg1<<","<<arg2<<endl;
		}
		void method3(int arg1,int arg2,int arg3)
		{
			cout<<"method with 3 arguments"<<"  "<<arg1<<","<<arg2<<","<<arg3<<endl;
		}
		void all_methods_defaulted(int arg1 = 1, int arg2 = 2, int arg3 = 3 )
		{
			cout<<"all methods defaulted with arguments"<<"  "<<arg1<<","<<arg2<<","<<arg3<<endl;
		}
};

int main()
{
	argument A;
	
	A.method0();
	A.method1(5);
	A.method2(10,15);
	A.method3(20,25,30);
	A.all_methods_defaulted();
	
	return 0;
}
