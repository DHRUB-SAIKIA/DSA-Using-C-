#include<iostream>
using namespace std;

class student{
	public:
		string name;
		int age;
		bool gender;
		
		void primeInfo(){
			cout<<"Name= ";
		cout<<name<<endl;
		cout<<"Age= ";
		cout<<age<<endl;
		cout<<"Gender= ";
		cout<<gender<<endl;

		}
};

int main()
{
	
	student array[3];
	for(int i=0; i<3; i++) {
		cout<<"Name= ";
		cin>>array[i].name;
		cout<<"Age= ";
		cin>>array[i].age;
		cout<<"Gender= ";
		cin>>array[i].gender;
    }

    for(int i=0; i<3; i++){
	    array[i].printInfo();
    }

return 0;
}