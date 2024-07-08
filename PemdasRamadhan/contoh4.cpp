#include <iostream>
using namespace std;

int nTelor, nMie, nAir, jumlah;
int hTelor = 2000, hMie = 2800, hAir = 3000; 
string nama;

void input()
{
    cout << "Masukkan Nama = ";
    cin >> nama;
    cout << "Masukkan Jumlah Telor = ";
    cin << nTelor;
    cout << "Masukkan Jumlah Mie = ";
    cin >> nMie;
    cout << "Masukkan Jumlah Air = ";
    cin >> nAir; 
}

int hitungHarga() {
    return (nTelor * hTelor) + (nMie * hMie) + (nAir * hAir);
}

void display(){
    cout << "Nama = " << nama << endl;
    cout << "Jumlah Telor = " << nTelor << endl;
    cout << "Jumlah Mie = " << nMie << endl;
    cout << "Jumlah Air = " << nAir << endl;
    cout << "Total Harga Rp. " << hitungHarga() << endl;
}

int main(){
    char pilihan;

    do{
    input();
    display();

    cout << "Apakah anda ingin mengulangi (y/n) ? ";
    cin >> pilihan;
    
    system("cls");
} while (pilihan == 'y' || pilihan == 'Y');

}