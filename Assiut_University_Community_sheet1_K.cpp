#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;

    if(a<c&&a<b)
    {
        cout<<a<<" ";
        if(b<c)
            {
                cout<<c;
            }
        else
        {
           cout<<b;
        }
    }

   else if(b<c&&b<a)
    {
        cout<<b<<" ";
        if(a<c)
            {
                cout<<c;
            }
        else
        {
           cout<<a;
        }

    }
   else if(c<a&&c<b)
    {
        cout<<c<<" ";
        if(a<b)
            {
                cout<<b;
            }
        else
        {
           cout<<c;
        }

    }
    else if(a==b&&a<c)
    {
        cout<<a<<" "<<c;
    }
     else if(a==c&&a<b)
    {
        cout<<a<<" "<<b;
    }
     else if(c==b&&c<a)
    {
        cout<<c<<" "<<a;
    }
     else
    {
        cout<<a<<" "<<c;
    }

    return 0;
}


