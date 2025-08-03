#include<iostream>
using namespace std;
class A
{
	public:
	void B()
	{
		int num1, num2, sum;
		cout<<"Enter the first value: ";
		cin>>num1;
		cout<<"Enter the second value: ";
		cin>>num2;
		sum=num1+num2;
		cout<<"the sum is : "<<sum;
	}
};
int main()
{
	A show;
	show.B();
	return 0;
}