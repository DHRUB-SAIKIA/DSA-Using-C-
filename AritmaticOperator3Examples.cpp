#include<iostream>
using namespace std;
int main()
{
	
	int i=0;
	
	i= i++ - --i + ++i - i--;   // 0 //0 //1 //1 // the finl ans is 0
	
	cout<<"value of i="<<i<<endl;
	
	return 0;
}