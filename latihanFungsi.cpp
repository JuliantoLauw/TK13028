#include <iostream>
#include <string>

using namespace std;

string username, password;

// Fungsi untuk menghitung faktorial
int faktorial(int n){
    int i, fak = 1;

    for(i = n; i>=1;i--){
        fak = fak*i;
    }   
    return fak;
}

// Fungsi untuk penambahan
int penambahan(int a, int b) {
    return a + b;
}

// Fungsi untuk rata-rata
double rataRata(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

// Fungsi untuk menerima input username dan password
bool login(string& username, string& password) {
    string correctUsername = "Julianto";
    string correctPassword = "Juli123";

    cout << "Masukkan username: ";
    cin >> username;
    cout << "Masukkan password: ";
    cin >> password;

    return (username == correctUsername && password == correctPassword);
}

// Fungsi untuk menampilkan menu dan melakukan operasi sesuai pilihan
void menuPilihan() {
    int pilihan;

    cout << "Pilih menu:" << endl;
    cout << "1. Faktorial" << endl;
    cout << "2. Penambahan" << endl;
    cout << "3. Rata-rata" << endl;
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    switch (pilihan) {
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
            cout << "Masukkan dua nilai untuk penambahan:" << endl;
            cout << "Nilai 1: ";
            cin >> nilai1;
            cout << "Nilai 2: ";
            cin >> nilai2;
            cout << "Hasil penambahan adalah " << penambahan(nilai1, nilai2) << endl;
            break;
        }
        case 3: {
            int nilai1, nilai2, nilai3;
            cout << "Masukkan tiga nilai untuk rata-rata:" << endl;
            cout << "Nilai 1: ";
            cin >> nilai1;
            cout << "Nilai 2: ";
            cin >> nilai2;
            cout << "Nilai 3: ";
            cin >> nilai3;
            cout << "Rata-rata adalah " << rataRata(nilai1, nilai2, nilai3) << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }
}

int main() {

    if (!login(username, password)) {
        cout << "Username atau password salah!" << endl;
        return 0;
    }

    cout << "Selamat datang " << username << "!" << endl;
    
    menuPilihan();

    cout << "Terima kasih telah menggunakan aplikasi!" << endl;
    return 0;
}
