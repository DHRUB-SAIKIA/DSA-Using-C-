#include <iostream>
using namespace std;
class Fbncignr
{

public:
    int n1=0, n2=1, numTerms,i,nextTerm;


    void gnrSeries() 
	{
		cout << "Enter the number of terms: ";
        cin >> numTerms;
        {
            cout << "Fibonacci Series:";
            for (i = 0; i < numTerms; i++) 
		    {
                cout << " " << n1;
                nextTerm = n1 + n2;
                n1 = n2;
                n2 = nextTerm;
            }
			cout << endl;
        }
    }
};

int main() 
{
    Fbncignr ob;
    ob.gnrSeries();

    return 0;
}