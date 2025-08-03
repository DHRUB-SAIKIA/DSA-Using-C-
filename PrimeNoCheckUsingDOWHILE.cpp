#include<iostream>
using namespace std;

int main()
{
	
	int num;
	bool isprime = true;
	
	do{
		cout<<"Enter a positive integer greter than 1: ";
		cin>>num;
	}
	while(num <= 1);
	
	for(int i=2; i<=num/2; ++i)
	{
		if(num%i==0)
		{
			isprime= false;
			break;
		}
	}
	
	if (isprime){
	    cout<<num<<"is a prime number.";
    }
	else{
		cout<<num<<"is not a prime number.";
	}
	
	
	return 0;
}