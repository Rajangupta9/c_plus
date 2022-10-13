#include <iostream>
using namespace std;

void main(){

    int n, m;
    cout<<"enter the length of pyramid : \n";
    cin>> n;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";

        }
        cout<<endl;

    }


}