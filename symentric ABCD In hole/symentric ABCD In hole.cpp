#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    char r;
    cout<<"Enter the number of rows\n\n";
    cin>>k;
    for(i=1;i<=k;i++)
    {
        r='A';
        for(j=1;j<=2*k-1;j++)
        {
            if(j<=(k+1)-i || j>=(k-1)+i)
                cout<<r++;
            else
            {
                cout<<" ";
                r++;
             }
        }
        cout<<endl;
    }
}
