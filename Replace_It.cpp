#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;

    while(t-->0)
    {
        string s,x;
        cin>>s>>x;
        while((i=s.find(x))!=string::npos)
        {
            s.replace(i,x.length(),"$");
        }
        cout<<s<<endl;
    }
    return 0;
}
