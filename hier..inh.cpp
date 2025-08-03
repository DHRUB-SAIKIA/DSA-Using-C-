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
class derive2:public base
{
	public: 
		void getdata2()
		{
			cout<<"Derive2"<<endl;
		}
};

int main()
{
	derive1 ob;
	derive2 ob1;
	ob.getdata();
	ob.getdata1();
	ob1.getdata();
	ob1.getdata2();
	return 0;
}