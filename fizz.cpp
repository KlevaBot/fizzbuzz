
#include <iostream>
#include <cassert>
using namespace std;


void printit(int n)
{
    for(int i =1;i<=n;i++)
    {    assert(!n>200);
        if(i%15==0)
            cout<<"fizzbuzzzz"<<endl;
        else if (i%5==0)
            cout<<"buzz"<<endl;
        else if(i%3==0)
            cout<<"fizz"<<endl;
        else
            cout<<i<<endl;
    }
}

int main()
{ int n;
cout<<"We are going to do the fizzbuzz test, \
now enter an integer from 1-100 : ";cin>>n;
   printit(n);
return 0;
}
