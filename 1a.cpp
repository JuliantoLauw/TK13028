#include <iostream>
using namespace std;

int main() {
    int angka;
    angka = 10;
    int n = 0;
    while (n < angka) {
        cout << "Program CPP ke-" << (n + 1) << endl;
        ++n;
    }

    return 0;
}
