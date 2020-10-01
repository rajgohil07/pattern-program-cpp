#include<iostream>
using namespace std;


int main()
{
    int i,j,k,m;
    cout<<"Enter the number of matrics.....\n\n";
    cin>>k;
    for(m=1;m<=k;m++)
    {
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5*k;j++)
        {
            if(m==k && i==5)
            cout<<"* ";

          else  if(i==1 || j==1 || j==5  || j%5==0 )
                {
                    cout<<"* ";

                }
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    }
}
