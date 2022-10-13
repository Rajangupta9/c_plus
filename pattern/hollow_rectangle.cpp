#include <iostream>
using namespace std;

void main(){


int rows;
int coulumns;

cout <<"Enter the length of rectangle:\n";
cin >> rows;
cout << "Enter the breadth of reactangle: \n";
cin >> coulumns;

for(int i=1; i<=rows; i++ )
{
    for(int j=1; j<=coulumns; j++)
    {
        if(i==1|| i==rows|| j==1|| j==coulumns)
        {
                cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

}