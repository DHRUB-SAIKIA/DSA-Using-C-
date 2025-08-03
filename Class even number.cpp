#include<iostream>
using namespace std;

class A
{
	public:
		void B()
		{
			int i,a;
			cout<<"Enter the limite: ";
			cin>>i;
			{
				for(a=2; a<=i; a+=2)
				{
					cout<<" "<<a<<endl;
				}
			}
        }
};

int main()
{
	A d;
	d.B();
}