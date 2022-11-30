#include <iostream>
using namespace std;

 int A[4][4]={
 {1, 1, 1, 1},
 {1, 1, 1, 1},
 {0, 1, 0, 1},
 {0, 0, 0, 0},
 };    //masivu define arpus jebkadas funkcijas lai tas ir globals


void zerocolumn(){
int m, n = 0;                     //mainigie lai izsekotu cik kolonnas ir ar tikai 0
for (int j = 0; j<4; j++){        //j palielinas katra cikla beigas lai sakti parbaudit nakamo kolonnu. j<4, jo 4 ir masiva izmers
    for (int i = 0; i<4; i++){   //parbauda katru vertibu viena kolonna
        if (A[i][j] == 0){       //ja vertiba ir 0
            m++;                  //tad palielina m (lai to ka vetiba ir 0 kautkur saglabatu)
            }
        if (m == 4){       //ja m = 4, tad visas vertibas bija 0, tapec si konkreta kolonna ir tikai 0
            n++;           //tapec pelielina n (tas izseko cik kolonnas ir ar tikai 0)
        }
    }
    m = 0;                 //m atiestata un nomaina uz 0, lai varetu ciklu veikt atkalt un nesaglabatos veca m vertiba
}
cout<<"There are "<<n<<" colums with only 0s\n\n"; //pasaka cik kolonnas ir ar tikai 0. n vertiba saglabaja to cik tas ir
}

void zerorow(){
int m, n = 0;
for (int i = 0; i<4; i++){     //lidzigi ar rindam, tikai samaina i un j vietam ieksa "for statements" un tad ir ka parbauda rindas nevis kolonnas
    for (int j = 0; j<4; j++){
        if (A[i][j] == 0){
            m++;
            }
        if (m == 4){
            n++;
        }
    }
    m = 0;
}
cout<<"There are "<<n<<" rows with only 0s\n\n";
}

void onecolumn(){               //identiski ar vieniniekiem, tikai ieksa "if statement", jabut vienadam ar 1 nevis 0
int m, n = 0;
for (int j = 0; j<4; j++){
    for (int i = 0; i<4; i++){
        if (A[i][j] == 1){
            m++;
            }
        if (m == 4){
            n++;
        }
    }
    m = 0;
}
cout<<"There are "<<n<<" colums with only 1s\n\n";
}

void onerow(){
int m, n = 0;
for (int i = 0; i<4; i++){
    for (int j = 0; j<4; j++){
        if (A[i][j] == 1){
            m++;
            }
        if (m == 4){
            n++;
        }
    }
    m = 0;
}
cout<<"There are "<<n<<" rows with only 1s\n\n";
}

int main () {

zerocolumn();    //izsauc visas funkcijas
zerorow();
onecolumn();
onerow();


}











