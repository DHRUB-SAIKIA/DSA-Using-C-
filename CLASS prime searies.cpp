#include<iostream>
using namespace std;

class primenumber
{
	public:
		void B()
		{
			int a, n, i, j, flag=0;
	        cout<<"Enter the limite: ";
	        cin>>a;
			for(j=2; j<a;j++)
	        {
		        for(i=2; i<=j/2;i++)
		        {
			        if(j%i==0)
			        flag=1;
		        }
		        if(flag==0)
		        {
			        cout <<j<<"\n";
		        }
		        flag=0;
	        }
        }
};

int main()
{
	primenumber ans;
	ans.B();
}