#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        cout<<" ";
        for(int k=1;k<2*i;k++)
        cout<<"*";
        cout<<endl;
    }
}