#include<iostream>
using namespace std;

int main()
{
    int i,j,m,k,r;
    cout<<"Enter the value of rows  \n\n";
    cin>>k;
    for(i=0;i<=k;i++)
    {
        m=1;
        for(j=0;j<=2*k-1;j++)
        {
            if(j>=(k+1)-i && j<=(k-1)+i)
            {
                cout<<m;
               if(k>j)
                m++;
                else
                m--;
            }
            else
                cout<<" ";
        }cout<<endl;
    }
}
