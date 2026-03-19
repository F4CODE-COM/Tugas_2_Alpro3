#include <iostream> //header c++.
using namespace std; // namespace untuk std input/output.

int main() {
    int berangkat,pulang,ob,ok;// berangkat&pulang itu waktu berangkat dan pulang,ob=ongkos berangkat,ok=ongkos kepulangan.
    system("cls");//clear terminal sebelum output main program
    cout<<"Masukkan jam keberangkatan (bilangan bulat 1-24): "; cin >> berangkat;
    cout<<"Masukkan jam pulang (Bilangan bulat 1-24): ";    cin >> pulang;
    cout<<"\nAnda berangkat jam "<<berangkat<<" dan pulang jam "<<pulang<<"\n";
    cout<<"HASIL REKOMENDASI:";

    cout<< "\n=======BERANGKAT=======\n";
    if((berangkat>=6&&berangkat<=8)||(berangkat>=15&&berangkat<=17)){//pilihan pertama untuk mencari paling hemat adalah linus.
        cout<<"Moda transportasi yang sebaiknya anda pilih adalah: Bus Linus\n";
        ob=0;}//ongkos berangkat gratis
    else if(berangkat>=7&&berangkat<=18){
        cout<<"Moda transportasi yang sebaiknya anda pilih adalah: Bus Hijau\n";
        ob=5000;}//ongkos bus hijau 5000
    else{cout<<"Moda transportasi yang sebaiknya anda pilih adalah: Angkot\n";
        ob=10000;}//ongkos angkot 10000
    cout<<"Biaya berangkat: Rp"<<ob;//setelah operasi kondisi untuk mencari moda transportasi berangkat akan langsung tampil biaya yang dikeluarkan.
    
    cout<< "\n=======PULANG=======\n";
    if((pulang>=6&&pulang<=8)||(pulang>=15&&pulang<=17)){//linus tersedia kalau tidak di jam 6-8 tersedia lagi di jam 15-17.
        cout<<"Moda transportasi yang sebaiknya anda pilih adalah: Bus Linus\n";
        ok=0;}
    else if(pulang>=7&&pulang<=18){// bus hijau tersedia di jam 7 hingga jam 18.
        cout<<"Moda transportasi yang sebaiknya anda pilih adalah: Bus Hijau\n";
        ok=5000;}
    else{cout<<"Moda transportasi yang sebaiknya anda pilih adalah: Angkot\n";//pilihan terakhir adalah angkot yang tersedia kapan saja.
        ok=10000;}
    cout<<"Biaya pulang: Rp"<<ok<<endl;

    cout <<"_______________\nTotal biaya yang dikeluarkan: Rp"<<ob+ok;// output akhir adalah biaya yang dikeluarkan untuk ongkos berangkat dan pulang.
}    
