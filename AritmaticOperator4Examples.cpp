#include<iostream>
using namespace std;
int main()
{
	
	int i=1, j=2, k=3;
	
	int m= i-- - j-- - k--;      //1 //2 //3....  //output   0 -1 -2 = -4....
	
	cout<<"i="<<i<<endl;
	cout<<"j="<<j<<endl;
	cout<<"k="<<k<<endl;
	cout<<"m="<<m<<endl;
	
	
    return 0;
}