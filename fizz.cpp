
#include <iostream>
#include <cassert>  //needed by assert
using namespace std;

//used a function, you could also just do the whole program in main
void printit(int n)
{
    for(int i =1;i<=n;i++)
    {    assert(!n>200); // just to avoid higher  values, you can remove it 
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
{ int num;
cout<<"We are going to do the fizzbuzz test, \
now enter an integer from 1-100 : ";cin>>num;
   printit(num);  //calling of the functiom\n 
return 0;
}
