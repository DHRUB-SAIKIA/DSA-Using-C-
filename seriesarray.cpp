#include<iostream>
using namespace std;
int main()
{
	int a[10], sum=0, i;
	for(i=0;i<=9;i++)
	{
		a[i]=i+1;
		sum=sum+a[i];
	}
	cout<<"thr results are = "<<sum;
	return 0;
}