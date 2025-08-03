#include<iostream>            //...BITWISE OPERATOR..// OPERATE ON BITS AND PERFORM BIT-BY-BIT OPERATIONS..
using namespace std;          // & AND OPERATOR.. // | OR OPERATOR.. // ^ XOR OPREATOR.. // ~ ONCE COMPLEMENT.. // << LEFT SHIFT OPERATOR..
int main()                    // >> RIGHT SHIFT OPERATOR..  // a<<n = a*2^n... // a>>n = a3^n...
{
	int a=12, b=25;
	
	cout<<"a = "<<a<<endl;           // HERE 12= 00001100 (IN BINARY)
	cout<<"b = "<<b<<endl;           // HERE 25= 00011001 (IN BINARY)
	cout<<"a & b = "<<(a&b)<<endl;   // BITWISE AND OPERATORS OF 12 AND 25.....00001100 & 00011001 = 00001000 =8 (IN DECIMAL)....
	
    return 0;
}