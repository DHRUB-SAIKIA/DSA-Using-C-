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
class derive1:public base
{
	public:
		void getdata1()
		{
			cout<<"Derive1"<<endl;
		}
};
class derive2:public derive1
{
	public:
		void getdata2()
		{
			cout<<"Derive2"<<endl;
		}
};

int main()
{
	derive2 ob;
	ob.getdata();
	ob.getdata1();
	ob.getdata2();
	return 0;
}