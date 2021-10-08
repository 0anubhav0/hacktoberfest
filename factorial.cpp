#include <iostream>
using namespace std;


long long factorial(long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// Driver code
int main()
{
    long long num ;
    cout<<"Enter the number: ";
    cin>>num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
