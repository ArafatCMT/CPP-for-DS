#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespace"<<endl;
    }
}
namespace Sakib
{
    int age=25;
    void hello()
    {
        cout<<"Sakib namespace"<<endl;
    }
}
using namespace Rakib;

int main()
{
    // cout<<Rakib::age<<endl;
    cout<<age<<endl;
    hello();
    cout<<Sakib::age<<endl;
    Sakib::hello();
    return 0;
}