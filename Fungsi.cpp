
#include <iostream>
using namespace std;


int p, l;


void input() {
    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;
}

int luasPersegi() {
    return p * l;
}

void output() {
    cout << "Hasilnya: " << luasPersegi() << endl;
}

int main() {
    input();
    output();
}