
#include <iostream>
using namespace std;


double jari_jari;
const double phi = 3.14159;


void input() {
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari_jari;
}

double hitungLuas(double r) {
    return phi * r * r;
}

void output() {
    cout << "hasilnya: " << hitungLuas(jari_jari) << endl;
}

int main() {
    input();
    output();
}