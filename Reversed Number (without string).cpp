#include <iostream>
using namespace std;

int main()
{
    int n=0,reversedN=0;
    cin>>n;

    while (n!=0)
    {
        reversedN *= 10;
        reversedN += n % 10;

        n /= 10;
    }

    cout<<reversedN;

    return 0;}
