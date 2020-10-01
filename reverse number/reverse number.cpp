#include<iostream>

using namespace std;

int main()
{
    int i,j,k,m,n;
    cout<<"Enter The number of columns : ";
    cin>>n;
    cout<<endl;
    m=n+1;
    for(i=1;i<=m;i++)
    {
        k=m-i;
        for(j=1;j<=m;j++)
        {
            if(j<=m+1-i)
               {
                   cout<<k;
                    k--;
               }
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}
