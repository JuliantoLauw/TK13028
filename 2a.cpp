#include <iostream>
using namespace std;

int main() {
    int nilai;
    int lulus = 0;
    int tesPerbaikan = 0;
    int tidakLulus = 0;

    cout << "Masukkan nilai siswa 'ketik nilai negatif untuk berhenti':" << endl;

    while (nilai >= 0) {
        cout << "Masukkan nilai: ";
        cin >> nilai;

        if (nilai < 0) {
            break;
        }

        if (nilai >= 70) {
            cout << "Keterangan: LULUS" << endl;
            lulus++;
        } else if (nilai >= 50 && nilai < 70) {
            cout << "Keterangan: TES PERBAIKAN" << endl;
            tesPerbaikan++;
        } else {
            cout << "Keterangan: TIDAK LULUS" << endl;
            tidakLulus++;
        }
    }
    cout << "\nJumlah siswa yang lulus: " << lulus << endl;
    cout << "Jumlah siswa yang tes perbaikan: " << tesPerbaikan << endl;
    cout << "Jumlah siswa yang tidak lulus: " << tidakLulus << endl;

    return 0;
}
