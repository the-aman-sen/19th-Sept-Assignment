#include<iostream>
using namespace std;

int main()
{
    int n,i,max=0,min=0;
    int *p;

    cout<<endl<<"Enter no. of elements :  ";
    cin>>n;

    p = new int(n);

    cout<<endl<<"Enter "<<n<<" Elements : ";

    max=*p;
    min=*p;
    
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<endl<<"Entered elements are : ";

    for(i=0;i<n;i++)
    {
        cout<<"   "<<*(p+i);
    }

    for(i=0;i<n;i++)
    {
        if(max<*p)
            max=*p;
            p++;
    }
    for(i=0;i<n;i++)
    {
        if(min>*p)
            min=*p;
            p++;
    }
    cout<<endl<<"Largest element is : "<<max;
    cout<<endl<<"Smallest element is : "<<min;

    return 0;

}
