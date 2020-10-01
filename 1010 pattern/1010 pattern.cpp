#include<iostream>

using namespace std;

int main()
{
   int i,j,k;
   cout<<"Enter the value of rows......\n\n";
   cin>>k;
   for(i=1;i<=k;i++)
   {
       for(j=1;j<=k;j++)
       {
           if(j<=i)
           {    if(j%2 != 0)
               cout<<"1";
               else
                cout<<"0";
           }
           else
            cout<<" ";
       }
       cout<<"\n";
   }
}

