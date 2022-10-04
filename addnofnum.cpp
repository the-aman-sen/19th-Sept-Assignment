#include<iostream>
using namespace std;

int add(int n)
{
    if(n!=0)
        n=n+add(n-1);

    return n;
    
}

int main()
{
    int i;

    cout<<"Enter an integer : ";
    cin>>i;

    cout<<"Addition is : "<<add(i);

    return 0;
}