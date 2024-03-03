// Revers the given number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter  the number:";
    cin>>n;

    int revers=0;

    while (n>0)
    {
        int lastdigit=n%10;
        revers=revers*10 + lastdigit;
        n=n/10;
    }

    cout<<revers<<endl;
    
}