#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    cout<<"Enter the Value of Row or Columns : ";
    cin>>k;
    cout<<endl;
    for(i=0;i<=k;i++)
        {
            for(j=0;j<=k;j++)
            {
                if(j>=i)
                    cout<<"* ";
                else
                    cout<<" "<<" ";
            }cout<<endl;
        }
}
