#include<iostream>
using namespace std;

int main()
{
    int i,j,k,loop=0;
    while(loop != -1)
    {


    cout<<"Enter the number of Rows......\n\n";
    cin>>k;
    cout<<endl;
    for(i=1;i<=k;i++)
            {
                    for(j=0;j<=2*k-1;j++)
                            {
                                    if(j>=i && j<=2*k-i)
                                            cout<<"*";
                                    else
                                            cout<<" ";
                            }
                    cout<<endl;
            }
            cout<<"Press any key to continue or press -1 to quit\n";
            cin>>loop;
        }

}

