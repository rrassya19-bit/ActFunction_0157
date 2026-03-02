//library
#include <iostream>
using namespace std;

//variabel global
int p, l;

//imlementasi prosedur dan fungsi
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