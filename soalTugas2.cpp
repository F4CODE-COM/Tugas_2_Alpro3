#include <iostream>
using namespace std;

int main() {
    int angka;
    
    cout << "KLASIFIKASI BILANGAN MAS DODO " << endl;
    cout << "Masukkan angka (4 digit): ";
    cin >> angka;

    // Validasi input 4 digit
    if (angka < 1000 || angka > 9999) {
        cout << "Error: Angka harus 4 digit (1000-9999)!" << endl;
        return 0;
    }

    // CEK ALFA (Pakai Matematika Dasar) 
    // Kita ambil digit satu per satu dari kiri ke kanan
    // Digit 1 (ribuan): angka / 1000
    // Digit 2 (ratusan): (angka % 1000) / 100
    // Digit 3 (puluhan): (angka % 100) / 10
    // Digit 4 (satuan): angka % 10
    
    int d1 = angka / 1000;
    int d2 = (angka % 1000) / 100;
    int d3 = (angka % 100) / 10;
    int d4 = angka % 10;

    bool naik = true;
    bool turun = true;

    // Cek urutan 1 ke 2
    if (d1 >= d2) naik = false;
    if (d1 <= d2) turun = false;

    // Cek urutan 2 ke 3
    if (d2 >= d3) naik = false;
    if (d2 <= d3) turun = false;

    // Cek urutan 3 ke 4
    if (d3 >= d4) naik = false;
    if (d3 <= d4) turun = false;

    bool isAlfa = false;
    if (naik == true || turun == true) {
        isAlfa = true;
    }

    // CEK BETA (Pakai Matematika Dasar) 
    // 2 digit depan = angka dibagi 100    // 2 digit belakang = angka sisa bagi 100
    int depan = angka / 100;
    int belakang = angka % 100;
    int selisih = depan - belakang;
    
    // Nilai mutlak manual pakai if-else
    if (selisih < 0) {
        selisih = selisih * -1;
    }
    
    bool isBeta = false;
    if (selisih >= 30) {
        isBeta = true;
    }

    // OUTPUT STATUS
    cout << "\nHasil Analisis:" << endl;
    
    if (isAlfa == true) {
        cout << "Status Alfa: YA" << endl;
    } else {
        cout << "Status Alfa: TIDAK" << endl;
    }
    
    if (isBeta == true) {
        cout << "Status Beta: YA" << endl;
    } else {
        cout << "Status Beta: TIDAK" << endl;
    }

    cout << "\n";
    
    // PENENTUAN KATEGORI 
    if (isAlfa == true && isBeta == true) {
        cout << "KLASIFIKASI: BILANGAN GAMMA" << endl;
        cout << "(Memenuhi syarat Alfa dan Beta)" << endl;
    }
    else if (isAlfa == true) {
        cout << "KLASIFIKASI: BILANGAN ALFA" << endl;
        cout << "(Hanya memenuhi syarat Alfa)" << endl;
    }
    else if (isBeta == true) {
        cout << "KLASIFIKASI: BILANGAN BETA" << endl;
        cout << "(Hanya memenuhi syarat Beta)" << endl;
    }
    else {
        cout << "KLASIFIKASI: BILANGAN DELTA" << endl;
        cout << "(Tidak memenuhi syarat apapun)" << endl;
    }
    return 0;
}
