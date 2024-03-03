// Count the number of digits for a given number n 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Value:";
    cin>>n;

    int digit=0;

    while (n>0)
    {
        digit++;
        n=n/10;
    }
    cout<<digit<<endl;
}