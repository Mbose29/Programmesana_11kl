#include <iostream>
using namespace std;

 int A[3][3];     //masivu define arpus jebkadas funkcijas lai tas ir globals


void zerocolumn(){
int m, n = 0;                     //mainigie lai izsekotu cik kolonnas ir ar tikai 0
for (int j = 0; j<3; j++){        //j palielinas katra cikla beigas lai sakti parbaudit nakamo kolonnu. j<3, jo 3 ir masiva izmers
    for (int i = 0; i<3; i++){   //parbauda katru vertibu viena kolonna
        if (A[i][j] == 0){       //ja vertiba ir 0
            m++;                  //tad palielina m (lai to ka vetiba ir 0 kautkur saglabatu)
            }
        if (m == 3){       //ja m = 3, tad visas vertibas bija 0, tapec si konkreta kolonna ir tikai 0
            n++;           //tapec pelielina n (tas izseko cik kolonnas ir ar tikai 0)
        }
    }
    m = 0;                 //m atiestata un nomaina uz 0, lai varetu ciklu veikt atkalt un nesaglabatos veca m vertiba
}
cout<<"There are "<<n<<" colums with only 0s\n\n"; //pasaka cik kolonnas ir ar tikai 0. n vertiba saglabaja to cik tas ir
}

void zerorow(){
int m, n = 0;
for (int i = 0; i<3; i++){     //lidzigi ar rindam, tikai samaina i un j vietam ieksa "for statements" un tad ir ka parbauda rindas nevis kolonnas
    for (int j = 0; j<3; j++){
        if (A[i][j] == 0){
            m++;
            }
        if (m == 3){
            n++;
        }
    }
    m = 0;
}
cout<<"There are "<<n<<" rows with only 0s\n\n";
}

void onecolumn(){               //identiski ar vieniniekiem, tikai ieksa "if statement", jabut vienadam ar 1 nevis 0
int m, n = 0;
for (int j = 0; j<3; j++){
    for (int i = 0; i<3; i++){
        if (A[i][j] == 1){
            m++;
            }
        if (m == 3){
            n++;
        }
    }
    m = 0;
}
cout<<"There are "<<n<<" colums with only 1s\n\n";
}

void onerow(){
int m, n = 0;
for (int i = 0; i<3; i++){
    for (int j = 0; j<3; j++){
        if (A[i][j] == 1){
            m++;
            }
        if (m == 3){
            n++;
        }
    }
    m = 0;
}
cout<<"There are "<<n<<" rows with only 1s\n\n";
}

int main () {

    A[0][0]= 0;   //manuali savaditas vertibas masiva
    A[0][1]= 0;
    A[0][2]= 1;
    A[1][0]= 0;
    A[1][1]= 0;
    A[1][2]= 1;
    A[2][0]= 0;
    A[2][1]= 1;
    A[2][2]= 1;

zerocolumn();    //izsauc visas funkcijas
zerorow();
onecolumn();
onerow();


}











