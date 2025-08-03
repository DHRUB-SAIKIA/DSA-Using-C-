#include <iostream>

using namespace std;
class pyr
{
    int i, j , k, r,s;
    public:
    void dis()
    {
        cout<<"enter the number of rows for pyramid = ";
        cin>>r;
        for(i=1,s=r-1;i<=r;i++,s--)
        {
            for(j=0;j<s;j++)
            {
                cout<<" ";
            }
            for(k = 0;k<2*i-1;k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }

};

int main()
{
    pyr ob;
    ob.dis();
    return 0;
}