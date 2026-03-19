#include <iostream>
#include <string>
#include <iomanip> //untuk setprecision()
using namespace std;

/**
 * Fungsi untuk menentukan kategori beasiswa berdasarkan IP dan Gaji.
 * 
 * LOGIKA PEMROGRAMAN (Prioritas Pengecekan):
 * 
 * 1. PRIORITAS UTAMA: IP ≥ 3.5 → Kategori 4 (Otomatis, abaikan gaji)
 *    Ini dicek pertama karena bersifat "automatic qualification".
 * 
 * 2. Jika IP < 3.5, baru cek berdasarkan Gaji:
 *    a. Gaji < 1 juta  Kategori 1
 *    b. Gaji 1 - 5 juta  Cek IP lagi:
 *       - IP ≥ 2.0  Kategori 3
 *       - IP < 2.0  Kategori 2
 *    c. Gaji > 5 juta  Tidak berhak (karena IP sudah pasti < 3.5)
 * 
 * 3. Jika tidak memenuhi semua kondisi di atas → Tidak berhak
 * 
 * Parameter:
 * - ip: Indeks Prestasi mahasiswa (float)
 * - gaji: Gaji orang tua dalam juta rupiah (float)
 * 
 * Return:
 * - string: Nama kategori beasiswa atau pesan tidak berhak
 */
string tentukanKategoriBeasiswa(float ip, float gaji) {
    // PRIORITAS 1: IP ≥ 3.5 → Langsung Kategori 4
    if (ip >= 3.5) {
        return "Kategori 4";
    }
        // Jika IP < 3.5, lanjut cek berdasarkan gaji
    // KONDISI 2: Gaji < 1 juta → Kategori 1
    if (gaji < 1.0) {
        return "Kategori 1";
    }
    // KONDISI 3: Gaji 1 - 5 juta → Cek IP untuk Kategori 2 atau 3
    if (gaji >= 1.0 && gaji <= 5.0) {
        if (ip >= 2.0) {
            return "Kategori 3";  // IP 2.0 - 3.49
        } else {
            return "Kategori 2";  // IP < 2.0
        }
    }
    // KONDISI 4: Gaji > 5 juta DAN IP < 3.5 → Tidak berhak
    // (Karena jika IP ≥ 3.5 sudah tertangkap di prioritas 1)
    return "Tidak berhak mendapatkan beasiswa";
}
int main() {
    float ip, gaji;

    cout << " SISTEM PENENTUAN KATEGORI BEASISWA USU " << endl;
    cout << "Silakan masukkan data mahasiswa berikut:" << endl;

    // Input IP Mahasiswa
    cout << "\nMasukkan Indeks Prestasi (IP) [contoh: 3.51]: ";
    cin >> ip;

    // Input Gaji Orang Tua (dalam juta)
    cout << "Masukkan Gaji Orang Tua (dalam juta rupiah) [contoh: 1.5]: ";
    cin >> gaji;

    // Validasi input dasar
    if (ip < 0.0 || ip > 4.0 || gaji < 0) {
        cout << "\n[ERROR] Input tidak valid!" << endl;
        cout << "- IP harus antara 0.00 - 4.00" << endl;
        cout << "- Gaji tidak boleh negatif" << endl;
        return 1;
    }

    // Proses penentuan kategori
    string hasil = tentukanKategoriBeasiswa(ip, gaji);

    // Output hasil dengan format rapi
    cout << "\nHASIL PENILAIAN " << endl;
    cout << fixed << setprecision(2);  // Format 2 angka desimal
    cout << "IP Mahasiswa   : " << ip << endl;    cout << "Gaji Orang Tua : Rp " << gaji << " juta" << endl;

    cout << "STATUS         : " << hasil << endl;

    // Tambahan: Tampilkan pesan motivasi berdasarkan kategori
    if (hasil == "Kategori 4") {
        cout << "\nSelamat! Prestasi akademik luar biasa!" << endl;
    } else if (hasil != "Tidak berhak mendapatkan beasiswa") {
        cout << "\nTetap semangat pertahankan/tingkatkan IP!" << endl;
    } else {
        cout << "\nJangan menyerah, tingkatkan IP dan coba lagi!" << endl;
    }
    return 0;
}
