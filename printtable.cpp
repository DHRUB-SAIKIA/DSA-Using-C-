#include<iostream>
using namespace std;

class mul
{
	public:
		int i,number;
		
		
	
		void printtable()
		{
			cout<<"enter the number: ";
	        cin>>number;
	
	    if (i<1||i>10)
        {
		    cout<<"Invalid!!";
	    }
		else
			for(i=1;i<=10;i++)
			{
				cout << number << " x " << i << " = " << (number * i) << std::endl;
            }
		}
};
int main()
{
	
	
	mul pt;
	pt.printtable();
	return 0;
}