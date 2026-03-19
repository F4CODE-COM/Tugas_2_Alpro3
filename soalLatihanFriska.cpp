#include <iostream>
using namespace std;

int main() {
    int ekspedisi, tujuan;
    float berat, biaya, total;

    cout << "1. JNE\n2. SiCepat\n3. Gojek\nPilih Ekspedisi: ";
    cin >> ekspedisi;
    cout << "Berat barang (kg): ";
    cin >> berat;
    cout << "Tujuan (1: Dalam Kota, 2: Luar Kota): ";
    cin >> tujuan;

    if (ekspedisi == 1) 
        biaya = (tujuan == 1) ? 10000 : 20000;
        total = biaya * berat;
        if (berat > 10) {
            total = total * 0.5; // Diskon 50%
        }
    } 
    else if (ekspedisi == 2) { // SiCepat
        if (berat > 15) {
            total = 0;  ongkir
        } else {
            biaya = (tujuan == 1) ? 8000 : 18000;
            total = biaya * berat;
        }
    } 
    else if (ekspedisi == 3) { // Gojek
        if (tujuan == 2) {
            cout << "Gojek hanya tersedia untuk Dalam Kota!" << endl;
            return 0;
        }
        total = 12000 * berat;
        if (berat > 5) {
            total = total - 10000;  
        }
    }

    cout << "Total Biaya: Rp" << total << endl;
    return 0;
}
