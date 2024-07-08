/**
 * @file UASPemdas.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;
/**
 * @brief class Mata Kuliah
 * 
 */
class MataKuliah
{
private: 
 // isi dengan access modifier yang dibutuhkan

 float presensi;
 float activity;
 float exercise;
 float tugasakhir;
 // tambahkan dengan variabel lain yang dibutuhkan dibawah ini

 /**
  * @brief enkapsulasi Matakuliah
  * @param presensi
  * @param activity
  * @param exercise
  * @param tugasakhir
  */
public:
MataKuliah()
{
 presensi = 0.0;
 activity = 0.0;
 exercise = 0.0;
 tugasakhir = 0.0;
 // isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
 /**
  * @brief 
  * 
  */
}
virtual void namaMataKuliah() { 
    int Pemrograman;
    int Jaringan;
    int Keluar;
    
    cout << "Pilih Mata Kuliah: \n";
    cout << "1. ";
    cin >> Pemrograman;
    cout << "2. ";
    cin >> Jaringan;
    cout << "3. ";
    cin >> Keluar;
     }

virtual void inputNilai () { 
    float nilai;
      cout << "Masukkan nilai presensi = " << endl;
      cin >> nilai;
         cout << "Masukkan nilai activity = " << endl;
         cin >> nilai;
          cout << "Masukkan nilai exercise = " << endl;
          cin >> nilai;
           cout << "Masukkan nilai tugas akhir = " << endl;
           cin >> nilai;
            cout << "Nilai akhir = " << endl;
     cin >> nilai;
    
    return; }
virtual void hitungNilaiAkhir () { 
    float nPresensi, nActivity, nExercise, ntugasAkhir, nAkhir;
    nAkhir = (nPresensi+nActivity+nExercise+ntugasAkhir) / 4;
    
    return; }
virtual void cekKelulusan () { 
    float nAkhir;
    string status;
    if (nAkhir>= 75) {
        status = "Selamat anda dinyatakan Lulus";
    }
    else  {
        status = "Anda dinyatakan Tidak Lulus";
    }
    return; }
// tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
void setPresensi(float nilai)
{
 this->presensi = nilai;
}

void setActivity(float nilai)
{
    this->activity = nilai;
}

void setExercise(float nilai)
{
    this->exercise = nilai;
}

void setTugasakhir(float nilai)
{
    this->tugasakhir = nilai;
}


float getPresensi()
{
 return presensi;
}

float getActivity()
{
 return activity;
}

float getExercise()
{
 return exercise;
}

float getTugasakhir()
{
 return tugasakhir;
}
// tambahkan setter dan getter lain yang dibutuhkan dibawah ini
};
class Pemrograman : public MataKuliah
{
    public:
    void namaMataKuliah() { 
    int presensi;
    int activity;
    int exercise;
    int tugasakhir;
     }

    void inputNilai() {
        float nilai1, nilai 2;
      cout << "Masukkan nilai presensi = " << endl;
      cin >> nilai;
         cout << "Masukkan nilai activity = " << endl;
         cin >> nilai;
          cout << "Masukkan nilai exercise = " << endl;
          cin >> nilai;
           cout << "Masukkan nilai tugas akhir = " << endl;
           cin >> nilai;
           setPresensi(nilai)
    return; }

    void hitungNilaiAkhir () {
        float nPresensi, nActivity, nExercise, ntugasAkhir, nAkhir;
    nAkhir = (nPresensi+nActivity+nExercise+ntugasAkhir) / 4;
    
    return; }

    void cekKelulusan () { 
    float nAkhir;
    string status;
    if (nAkhir>= 75) {
        status = "Selamat anda dinyatakan Lulus";
    }
    else  {
        status = "Anda dinyatakan Tidak Lulus";
    }
    return; }
 // isi disini untuk mengisi kelas pemrograman
};
class Jaringan : public MataKuliah
{
    public:
    void namaMataKuliah() { 
    int activity;
    int exercise;
     }

    void inputNilai () {
        float nilai;
         cout << "Masukkan nilai activity = " << endl;
         cin >> nilai;
          cout << "Masukkan nilai exercise = " << endl;
          cin >> nilai;
    return; }

    void hitungNilaiAkhir () {
        float nActivity, nExercise, nAkhir;
    nAkhir = (+nActivity+nExercise) / 2;
    
    return; }

    void cekKelulusan () {
        float nAkhir;
    string status;
    if (nAkhir>= 75) {
        status = "Selamat anda dinyatakan Lulus";
    }
    else  {
        status = "Anda dinyatakan Tidak Lulus";
    }
    return; }
 // isi disini untuk mengisi kelas jaringan
};
int main()
{
 char pilih;
 MataKuliah *mataKuliah;
 Pemrograman pemrograman;
 Jaringan jaringan;


mataKuliah->namaMataKuliah;
pemrograman.inputNilai
 // isi disini untuk menentukan mata kuliah yang dipilih
}