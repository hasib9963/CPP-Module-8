#include <bits/stdc++.h>
using namespace std;
class Student
{
  public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{
    int t_a=a.math_marks+a.eng_marks;
    int t_b=b.math_marks+b.eng_marks;
    if(t_a==t_b) return a.id<b.id;
    // {
    //     if(a.id<b.id) return true;
    // }
    // else if(t_a>t_b) return true;
    // else return false;

    return t_a>t_b;
}
int main()
{
   int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id>>a[i].math_marks>>a[i].eng_marks;

    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;

    }
    return 0;
}
