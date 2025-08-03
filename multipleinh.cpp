#include <iostream>
using namespace std;

class base
{
    public:
	  void getdata()
		{
			cout<<"Base"<<endl;
		}
};

class base1
{
	public:
	  void getdata1()
		{
			cout<<"base1"<<endl;
		}
};

class derive:public base,base1
{
	public:
		void getdata2()
		{
			cout<<"Derive2"<<endl;
		}
};

int main()
{
	derive ob;
	ob.getdata();
	ob.getdata1();
	ob.getdata2();
	return 0;
}