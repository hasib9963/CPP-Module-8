#include <bits/stdc++.h>
using namespace std;
class Student
{
  public:
    string name;
    int cls;
    char section;
    int id;
};
int main()
{
   int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id;

    }
    for(int i=0;i<n/2;i++) //it n/2 becuse we swap two value so it becomes half time
    {
        swap(a[i].id, a[n-1-i].id);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<endl;
    }
    return 0;
}

