#include <iostream>
#include <string.h>

using namespace std;

string inputKalimat(){
    string kalimat;
    int spaceCount;

    do{
        spaceCount = 0;
        cout << "Masukan kalimat (lebih dari 3 Kata): ";
        getline(cin,kalimat);

        char karakter[kalimat.length()];

        cout << "Panjang Karakter :" << kalimat.length()+1 << endl;

        strcpy(karakter,kalimat.c_str());

        for(int i = 0; i < kalimat.length(); i++){
            if(karakter[i] == ' '){
                spaceCount++;
            }
        }
        
    } while(spaceCount < 2);

    // if(spaceCount < 3){
    //     cout << "Kalimat harus memiliki lebih dari 3 kata" << endl;
    //     return 1;
    // }

    return kalimat;
}

char inputChar(){
    char huruf;

    cout << "Masukan huruf yang ingin dicari: ";
    cin >> huruf;

    return huruf;
}

int menghitungChar(string kalimat, char huruf){
    int sum = 0;
    // cout << kalimat << huruf << endl;
    for(char c : kalimat){
        cout << c << (char)tolower(huruf) << endl;
        if((char)tolower(c) == (char)tolower(huruf)){
            sum= sum + 1;
        }
    }
    return sum;
}

int main(){
    string kalimat = inputKalimat();
    char karakter = inputChar();

    int jumlah = menghitungChar(kalimat, karakter);

    cout << "Karakter '" << karakter << "' Muncul sebanyak " << jumlah << " kali dalam kalimat." << endl;
}
