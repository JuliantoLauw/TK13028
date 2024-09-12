#include <iostream>
#include <string>
using namespace std;

 string usernameInput(){
   string usernameInput, passwordInput;
   string username = "Julianto";
   string password = "Juli";

    cout << "Masukkan username: ";
    cin >> usernameInput;
    cout << "Masukkan password: ";
    cin >> passwordInput;

    if (usernameInput != username || passwordInput != password) {
        cout << "Username atau password salah!" << endl;
        return 0;
    }
    else{
        cout << "Selamat datang, " << usernameInput << "!" << endl;
    }

}

int faktorial(int n){
    int i, fak = 1;

    for(i = n; i>=1;i--){
        fak = fak*i;
    }   
    return fak;
}

int penambahan(int a, int b){
    return a + b;
}

float rataRata(float a, float b, float c){
    return (a+b+c)/3.0;
}

int main(){

    usernameInput();

    int menuPilihan;
    cout << "Pilih Proses Perhitungan:" << endl;
    cout << "1. Faktorial" << endl;
    cout << "2. Penambahan" << endl;
    cout << "3. Rata-rata" << endl;
    cout << "Masukkan pilihan menu (1/2/3): ";
    cin >> menuPilihan;

    switch (menuPilihan) {
        case 1: {
            int nilai;
            cout << "Masukkan nilai untuk faktorial: ";
            cin >> nilai;
            if (nilai < 0) {
                cout << "Nilai tidak boleh negatif!" << endl;
            } else {
                cout << "Faktorial dari " << nilai << " adalah " << faktorial(nilai) << endl;
            }
            break;
        }
        case 2: {
            int nilai1, nilai2;
            cout << "Masukkan dua nilai untuk penambahan:\n";
            cout << "Nilai 1: ";
            cin >> nilai1;
            cout << "Nilai 2: ";
            cin >> nilai2;
            cout << "Hasil penambahan: " << penambahan(nilai1, nilai2) << endl;
            break;
        }
        case 3: {
            int nilai1, nilai2, nilai3;
            cout << "Masukkan tiga nilai untuk rata-rata:\n";
            cout << "Nilai 1: ";
            cin >> nilai1;
            cout << "Nilai 2: ";
            cin >> nilai2;
            cout << "Nilai 3: ";
            cin >> nilai3;
            cout << "Rata-rata: " << rataRata(nilai1, nilai2, nilai3) << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    cout << "Terimakasih telah menggunakan aplikasi!" << endl;
    return 0;
}
