#include<iostream>         //...LOGICAL OPERATOR...// USE TO CONNECT MULTIPLE CONDITION/ EXPRESSIONS TOGETHER OR TO REVERSE LOGICAL VALUE..
using namespace std;         // &&  AND gives us true if both operends are true, else false..
int main()                   // ||  OR dive us true if at least one of the operands are true..
{                            //  !  NOT gives the opposite logical value of the oerands. True become False , and False become True..                                                              
	int n;
	cin>>n;
	
	if(n%2==0&&n%3==0){
		cout<<"Divisible by both"<<endl;
	}
	else if(n%2==0){
		cout<<"Divisible by 2"<<endl;
	}
	else if(n%3==0){
		cout<<"Divisible by 3"<<endl;
	}
	else{
		cout<<"Divisible ny none"<<endl;
	}
	
	
	return 0;
}