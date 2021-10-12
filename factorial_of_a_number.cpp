#include<iostream>
using namespace std;
//this function will find the factorial of a number using recursion
int fact1(int n)
{
    if(n==0)
        return 1;
    return n*fact1(n-1);
}

//this function will find the factorial of a number using loop
int fact2(int n)
{
    if(n==0)
        return 1;
    long long int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
   int n,factorial,ch;
   do{  
    cout<<"Enter the number whose factorial needs to be found out: ";
    cin>>n;
    cout<<"\nHow Would you linke to find the factorial";
    cout<<"\n1)Using recursion";
    cout<<"\n2)Using loop";
    cout<<"\n3)Exit";
    cout<<"\nEnter your choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
                factorial=fact1(n);
                cout<<"Factorial of "<<n<<" is:"<<factorial<<"\n";
                break;
            case 2: 
                factorial=fact2(n);
                cout<<"Factorial of "<<n<<" is:"<<factorial<<"\n";
                break;
            case 3:
                cout<<"\nExiting";
                break;
            default:
                cout<<"\nEnter the correct choice!";
    }
   }while(ch!=3);
   return 0;
}