#include<iostream>
using namespace std;
class NumberPattern
{
		

	public:
		void display()
		{
	         cout<<"7\n";
			for (int i=3; i<=6; i++)
			{
				for(int j=1; j<=1; j++)
				{
					cout<<6+j<<" ";
					
				}
				cout<<endl;
			}
		}
};

int main()
{
	NumberPattern ob;
	ob . display();
	return 0;
}