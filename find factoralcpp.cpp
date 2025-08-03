#include <iostream>
using namespace std;
int main()
{
	int n;
	long factoral =1.0;
	
	cout<<"Enter a positive integer :";
	cin>>n;
	
	if(n<0)
	cout<<"EOORE!!! Factoral of a negative number doesn't exist...";
	
	else{
		for(int i=1; i<=n; ++i){
		factoral *= i;
	}
	}
	cout<<"Factoral of "<< n <<"="<<factoral;
	
	return 0;
}