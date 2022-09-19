#include <iostream>
using namespace std;

int main () {
    char x;
    cin>>x;

    if (isupper(x)){
        cout<<"Uppercase"<<endl;
    }else if (islower(x)){
        cout<<"Lowercase"<<endl;

    } else {
        cout<<"Not a letter"<<endl;


    }




}
