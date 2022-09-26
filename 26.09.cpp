#include <iostream>
using namespace std;

int main () {

    int x, y;
    cin>>x>>y;
    int z = 1;

    while (x>=z || y>=z){
        if (x%z==0 && y%z==0){
        cout<<z<<" ";
    }
    z++;
    }







}
