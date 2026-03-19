#include <iostream> //header c++.
using namespace std; // namespace untuk std input/output.

int main() {
    int tujuan, berat, ekspedisi;
    long biaya,diskon;
    system("cls");

    cout << "WELCOME PAK BUDI\n";
    cout << "Masukkan berat barang (kg): ";
    cin >> berat;
    cout << "Masukkan tujuan:dalam kota(1) dan luar kota(2), cukup masukkan angkanya saja : ";
    cin >> tujuan;
    cout << "Masukkan Pilihan Ekspedisi (1.JNE 2.SiCepat 3.Gojek, masukkan angkanya saja ): ";
    cin >> ekspedisi; cout <<"\n\n";
    //menerima input user
    switch (ekspedisi){ // menyeleksi ekspedisi pilihan user.
        case 1 :cout<<"Ekspedisi yang dipilih: JNE\n";
            if(tujuan==1){
            biaya=10000*berat;}
            else if(tujuan==2){
                biaya=20000*berat;}
            else{cout<<"Input anda salah!";}
            if(berat>10){
                diskon=biaya*0.5;// variabel diskon adalah variabel biaya yang memenuhi kriteria untuk dapat diskon.
                cout<<"Total biaya: Rp"<< diskon<<endl;
                cout<<"(Diskon 50% dari Rp"<<biaya<<" karena berat > 10kg)";}// dibedakan supaya variabel harga sebelum diskon tetap ada dan dapat dilihat.
            else {cout<<"Total biaya: Rp"<< biaya;}//jika tidak masuk kriteria diskon variabel biaya akan tetap jadi variabel utama.
            break;
        case 2:cout<<"Ekspedisi yang dipilih: SiCepat\n";
            if(tujuan==1){
            biaya=8000*berat;}
            else if(tujuan==2){
                biaya=18000*berat;}
            else{cout<<"Input anda salah!";}
            if(berat>15){
                biaya=biaya*0;
                cout<<"Total biaya: Rp"<< biaya<<endl;
                cout<<"(Gratis ongkir karena berat barang lebih dari 15kg)";}//penjelasan kurang lebih sama seperti case 1(JNE).
            else {cout<<"Total biaya: Rp"<< biaya;}
            break;
        case 3:cout<<"Ekspedisi yang dipilih: Gojek\n";
            biaya=12000*berat;
            if(tujuan==1){
                if(berat>5){
                    diskon=biaya-10000;
                    cout<<"Total biaya: Rp"<<diskon<<endl;
                    cout<<"(Diskon Rp10.000 dari Rp"<<biaya<<" karena berat > 5kg)";}}
            else cout <<"!Gojek hanya menerima pengiriman di dalam kota!";//antisipasi jika user memasukkan pilihan input selain dalam kota.
                break;
        default:cout<<"Input salah!";}
}    
