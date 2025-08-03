#include<iostream>
using namespace std;
class NumberPattern
{
		
	int n, num=6;
	public:
		void display()
		{
	         int n =num ;
			for (int i=1; i<=n; i++)
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