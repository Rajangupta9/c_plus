#include <iostream>
using namespace std;

void main(){
    int n;
    cout<<"enter the length of pyramid ";
    cin>> n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
          cout<<"*";
        }
        cout<<endl;


    }

}