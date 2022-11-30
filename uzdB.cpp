#include <iostream>
#include <cmath>
using namespace std;

void check(int n) { //n ir skaitlis lidz kuram mekle pitagora trijniekus
    cout<<"\n";
    int a, b, c;
    int p = 2;
    while (c < n) { //c vienmer bus lielaka vertiba, tapec ja c parsniedz n cikls beidzas
        int q = 1;
        while (q < p){

          a = p * p - q * q; //forumulas lai atrastu pitagora trijniekus
          b = 2 * p * q;
          c = p * p + q * q;

          if (c > n){ //c vienmer bus lielaka vertiba, tapec ja c parsniedz n cikls beidzas
                break;
            }

            if (a*a+b*b==c*c){
            cout<<a<<" "<<b<<" "<<c<<"\n"; //ja atbilst nosacijumiem izprinte vertibas
                }

            ++q; //palienina q vertibu, un ar katru vertibu parbauda vai veidojas pitagora trijnieks (nemaina p vertibu)
        }

        p++; //kad cikls ir beidzies, palielina p vertibu, un atkal parbauda katru q vertibu
    }

}

int main(){
    int n;
    cout<<"Ievadit skaitli\n"; //lietotajs ievada lidz kuram skaitlim meklet
    cin>>n;
    check(n);
}
