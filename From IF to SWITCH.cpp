#include <iostream>
using namespace std;

int main()
{
    int a=0;

    cin>>a;

  /*  if(a==1) cout<<"one"<<endl;

    if(a!=3) cout<<"different";
    else if(a>3) cout<<"big";
    else cout<<"error";

  */

    switch(a) {
        case 3: cout<<"error";
        break;
        case 1: cout<<"one"<<endl;
        default: cout<<"different";

    }

    return 0;
}

