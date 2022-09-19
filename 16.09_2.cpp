#include <iostream>
using namespace std;

int main () {

    int x, y, z;
    cout<<"Enter 3 Values"<<endl;
    cin>> x;
    cin>> y;
    cin>> z;


    if ((x>0)&&(y>0)&&(z>0)){
    if ((x+y>z) && (y+z>x) && (x+z>y)) {
        cout<<"Eksiste"<<endl;
        } else {
        cout<<"Neeksiste"<<endl;

        }

    } else {

        cout<<"No negative values"<<endl;
    }






}
