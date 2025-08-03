#include<iostream>
using namespace std;
int main()
{
	int i, j, arr[2][2];
	cout<<"Enter the elements";
	for(i=0; i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>arr[i][j];
		}
	}cout<<"The 2*2 matrics is\n";
	for(i=0; i<2; i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}