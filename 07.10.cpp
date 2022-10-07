#include <iostream>
using namespace std;

void addi (double x, double y){
    cout<<"Answer:\n"<<x<<"+"<<y<<"="<<x+y<<endl;
    }

void subt (double x, double y){
    cout<<"Answer:\n"<<x<<"*"<<y<<"="<<x*y<<endl;
}

int main (){
    int x, y, b;
    cout<<"Choose a mathematical expression\n"<<"Addition: enter 1\n"<<"Subtraction: enter 2\n"<<endl;
    cin>>b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>x>>y;

    if(b==1){
        addi(x, y);
    }
    if(b==2){
        subt(x, y);
    }




}



