/*! \mainpage Sistem Penilaian
*
* \section intro_sec Pengantar
* Selamat datang di dokumentasi Sistem Penilaian
* Sistem ini dirancang untuk mengelola Nilai Pemrograman dasar dan jaringan
*
* \section structure_sec Struktur Kode 
* Kode ini terdiri dari tiga kelas utama, yaitu :
* - \b MataKuliah: Menangani operasi yang terkait dengan Pemrograman dan Jaringan
* - \b Pemrograman : Menangani informasi tentang nilai dari presensi, activity, exercise dan Tugas akhir
* - \b Proyek : Menangani informasi tentang nilai dari activity, exercise dan nilai akhir
*
* \section setup_sec Setup dan Konfigurasi
* Untuk menjalankan sistem ini, pastikan anda memiliki compiler c++
* Kompilasi dan jalankan file ini menggunakan compiler c++
*
* \section author_sec Tentang Pengembang
* Sistem ini dibuat dan dikembangkan oleh Muhammad Davin Surya sebagai bagian dari ujian mata kuliah Pemrograman Dasar
*
* \section n
/**
 * @file UCPIII Pemdas.cpp
 * @author 
 * Muhammad Davin Surya (muhammad.davin.ft23@mail.umy.ac.id)
 * @brief Sistem Penilaian mata kuliah
 * @version 0.1
 * @date 2024-06-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <string>
#include<vector>

using namespace std;
/**
 * @class Mata Kuliah
 * @brief Mewakili sebuah Mata kuliah dengan nilai
 */
class Pemrograman;
class Jaringan;

class MataKuliah{ 
    string nama; ///< Nama Mata kuliah
    vector<Pemrograman*> matkul_Pemrograman;

    MataKuliah(string pNama) : nama(pNama) {
        cout << "Mata Kuliah dibuat : " << nama << endl;
        cout << "----------------------" << endl; 
    }
    ~MataKuliah(){
        cout << "Mata Kuliah dihapus : " << nama << endl;
        cout << "---------------------------" << endl;
    }
    void tambahPemrograman(Pemrograman* pPemrograman);
    void cetakPemrograman();
    }




{
        float presensi;
        
        public:
        MataKuliah()
        {
        presensi = 0.0;
        int a, b c,d;
        
        }
        virtual void namaMataKuliah() { 
            
            return; }
        
        void setPresensi(float nilai) {
        this->presensi = nilai;
        }
        float getPresensi()
        {
        return presensi;
        }
        // tambahkan setter dan getter lain yang dibutuhkan dibawah ini
        {};
        class Pemrograman : public MataKuliah
        {
        public:
        Pemrograman(int pPresensi, pActivity, pExercise, pTugas_Akhir);
        cout << " Dibuat " << endl;

        }

};
        class Jaringan : public MataKuliah
        {
        public:
        Jaringan(int pActivity, pExercise,pNilai_Akhir);
        cout << "  " << endl;
        };

    int main()
    {
        MataKuliah* VarMatakuliah1 = new matakuliah("Pemrograman");
        MataKuliah* VarMatakuliah2 = new matakuliah("Jaringan");
        Pemrograman* VarPemrograman1 = new pemrograman(100,"Presensi");
        Pemrograman* VarPemrograman2 = new pemrograman(90, "activity");
        Pemrograman* VarPemrograman3 = new pemrograman(70, "Exercise");
        Pemrograman* VarPemrograman4 = new pemrograman(97, "Tugas Akhir");
        Jaringan* VarJaringan1 = new jaringan(45"Activity");
        Jaringan* VarJaringan2 = new jaringan(90"Exercise");
        Jaringan* VarJaringan3 = new jaringan(63"Nilai Akhir");

        VarMatakuliah1->tambahPemrograman(VarPemrograman1);
        VarMatakuliah1->tambahPemrograman(VarPemrograman2);
        VarMatakuliah1->tambahPemrograman(VarPemrograman3);
        VarMatakuliah1->tambahPemrograman(VarPemrograman4);

        VarMatakuliah2->tambahJaringan(VarJaringan1);
        VarMatakuliah2->tambahJaringan(VarJaringan2);
        VarMatakuliah2->tambahJaringan(VarJaringan3);

        VarMatakuliah1->cetakPemograman();
        VarMatakuliah2->cetakJaringan();

        delete VarMatakuliah1;
        delete VarMatakuliah2
        delete VarJaringan1;
        delete VarJaringan2;
        delete VarJaringan3;
        delete VarPemrograman1;
        delete VarPemrograman2;
        delete VarPemrograman3;
        delete VarPemrograman4;

        return 0;
};     






