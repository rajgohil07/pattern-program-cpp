#include<iostream>
using namespace std;

int main()
{
    int i,j,k;

    cout<<"Enter the number of rows for pyramid pattern\n";
    cin>>k;
    for(i=1;i<=k;i++){
        for(j=1;j<=(2*k-1);j++)
        {
            if(j>=(k+1)-i && j<=(k-1)+i)
                cout<<"*";
            else
                cout<<" ";
        }cout<<endl;

}}
