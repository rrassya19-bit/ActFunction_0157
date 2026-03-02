//library
#include <iostream>
using namespace std;

//deklerasi variabel global
int panjang, lebar;

//implementasi prosedur dan fungsi
void input() {
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
}

int luaspersegi(int a, int b) {
    return a * b;
}

int jumlah(int x, int y, int z) {
    return x + y + z;
}

void output() {
    cout << "hasilnya: " << luaspersegi(panjang, lebar) << endl;
}

int main() {
    input();
    output();
    cout << "Hasil penjumlahan: " << jumlah(5, 2, 7) << endl;
}