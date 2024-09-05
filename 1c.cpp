#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlahCetak = 0;
    string input;

    while (input != "exit") {
        cout << "Masukkan 'exit' untuk keluar atau enter untuk mencetak pesan: ";
        getline(cin, input);
        if (input == "exit") {
            break;
        }
        
        cout << "Program C++" << endl;
        
        ++jumlahCetak;
    }

    cout << "\nJumlah Program C++ yang sudah dicetak: " << jumlahCetak << endl;

    return 0;
}
