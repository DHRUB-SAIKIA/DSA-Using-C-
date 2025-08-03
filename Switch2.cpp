#include<iostream>
using namespace std;
int main()
{
	char button;
	cout<<"Input a Cheracter:";
	cin>>button;
	
	
	switch (button)
	{
		case'a':
		cout<<"hello"<<endl;
		break;
		case'b':
		cout<<"Namaste"<<endl;
		break;
		case'c':
		cout<<"Radhi Krishna"<<endl;
		break;
		case'd':
		cout<<"joi guru sankar"<<endl;
		break;
		case'e':
		cout<<"krishna"<<endl;
		break;
		
		default:
		cout<<"I am still learning more!"<<endl;
		break;
	}
	return 0;
}
		