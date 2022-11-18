#include <iostream>
using namespace std;

void check (int x, int y, int z){ //z ir mainigais ar kuru parbauda vai abi skaitli ar to dalas
    cout<<"Kopigie dalitaji: ";
while (x>z || y>z){ //ja z parsiendz abus skautlis cikls beidzas, jo vairs nav kopigo dalitaju
    if (x%z==0 && y%z==0){ //parbauda vai abi skaitli dalas ar z
        cout<<z<<" ";
    }
    z++; //palielina z lai parbauditu nakamo skaitli
}
    cout<<"\n\n";
}

int main (){

    int x, y;
    char YesNo;
    bool turpinat = true;

    while (turpinat==true){ //cikls lai varetu atkartoti veikt funkciju
        cout<<"Ievadit 2 vertibas\n";
        cin>>x>>y;
        check (x, y, 1);
        cout<<"Type \"N\" to break\nType \"Y\" to continue\n";
        cin>>YesNo;
        if (YesNo == 'N' or YesNo == 'n'){ //ja lietotajs ievada "N", cikls beidzas
            break;
        }



}
}
