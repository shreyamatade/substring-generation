#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    /*substring generation
    if no of char of strings=n, sub no=n*(n+1)/2 */

    string s;
    cin>>s;

    int slen=s.length();

    for(int i=1;i<=slen;i++)
    {
        for(int j=0;j<=slen-i;j++)
        {
            int t=j+i-1;

            for(int k=j;k<=t;k++)
            {
                cout<<s[k];
            } cout<<endl;
        }
    }
}

