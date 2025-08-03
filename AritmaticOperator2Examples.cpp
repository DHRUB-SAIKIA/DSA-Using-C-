#include<iostream>
using namespace std;
int main()
{
	
	int i=1;
	int j=2;
	int k;

	k= i + j + i++ + j++ + ++i + ++j;          // ( i=1 + j=2 + i++=1 + j++=2 + ++i=3 + ++j=4; ) ans should be i=3, j=4 and k=13...
	
	cout<<"  i="<<i<<"  j="<<j<<"  k="<<k<<endl;
	
	
	
	return 0;
}