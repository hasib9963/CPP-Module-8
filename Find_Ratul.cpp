#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream rt(s);
    string word;
    while(rt>>word)
    {
        if(word=="Ratul")
        {
            cout<<"YES"<<endl;
            return true;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
