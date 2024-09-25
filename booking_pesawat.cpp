#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

const int ROWS = 15, COLMS = 6;

char seats[ROWS][COLMS]= {
{'X', 'X', '*', '*', '*', '*'},
{'*', '*', '*', 'X', 'X', '*'},
{'*', '*', 'X', 'X', '*', '*'},
{'*', '*', 'X', 'X', '*', '*'},
{'*', '*', '*', '*', '*', '*'},
{'*', '*', '*', 'X', 'X', 'X'},
{'*', '*', 'X', '*', '*', '*'},
{'*', '*', 'X', '*', '*', '*'},
{'X', 'X', '*', '*', '*', 'X'},
{'*', '*', '*', '*', 'X', 'X'},
{'*', '*', 'X', 'X', '*', '*'},
{'*', '*', '*', '*', '*', '*'},
{'*', '*', '*', '*', 'X', 'X'},
{'*', '*', '*', '*', 'X', '*'},
{'X', 'X', 'X', '*', 'X', '*'}
};

// Menampilkan denah kursi
void denahKursi() {
    cout << "         A B C D E F\n";
    for (int i = 0; i < ROWS; i++) {
        cout << "Baris " << setw(2) << i + 1 << " ";
        for (int j = 0; j < COLMS; j++){
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

// Validasi kelas dan baris kursi
bool isValidClass(int row, int kelas) {
    return (kelas == 1 && row <= 2) || (kelas == 2 && row >= 3 && row <= 5) || (kelas == 3 && row >= 6);
}

// Memesan kursi
void bookSeat(int row, char col) {
    if (seats[row - 1][col - 'A'] == 'X')
        cout << "Kursi sudah dipesan. Pilih kursi lain.\n";
    else {
        seats[row - 1][col - 'A'] = 'X';
        cout << "Kursi berhasil dipesan!\n";
    }
}

int main() {
    int kelas, row;
    char colm, choice;

    do {
        denahKursi();
        cout << "=======Pilih Kelas======" << endl;
        cout << "1.Utama   (Baris 1-2)" << endl;
        cout << "2.Bisnis  (Baris 3-5)" << endl;
        cout << "3.Ekonomi (Baris 6-15)"<< endl;
        cout << "Masukan pilihan (1/2/3): ";
        cin >> kelas;
        cout << "Masukkan baris: ";
        cin >> row;
        cout << "Masukkan kolom (A-F): ";
        cin >> colm;

        if (isValidClass(row, kelas)) {
            bookSeat(row, (char)toupper(colm));
        }else{
            cout << "Pilihan kursi tidak sesuai dengan kelas." << endl;
        }
        cout << "Pesan kursi lagi? (y/n): "; cin >> choice;
    } while ((choice == 'y' || choice == 'Y'));

    cout << "Denah kursi setelah pemesanan:"<< endl;
    denahKursi();

    return 0;
}