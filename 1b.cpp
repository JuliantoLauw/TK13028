#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukan Jumlah Cetakan 'Program C++' :";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Program C++ Ke-" << (i + 1) << endl;
    }

    return 0;
}
