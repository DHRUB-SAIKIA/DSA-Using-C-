#include<iostream>
using namespace std;
class A
{
		int num1, num2, sum, r,i;
	public:
		
	void B()
	{
		
		
		cout<<"Enter the no of times u want: ";
		cin>>r;
		for(i=1;i<=r;i++)
		{
		
		cout<<"Enter the first value: "<<endl;
		cin>>num1;
		cout<<"Enter the second value: "<<endl;
		cin>>num2;
		sum=num1+num2;
		cout<<"the sum is : "<<sum<<endl;
	    }
	}
};
int main()
{
	A show;
	show.B();
	return 0;
}