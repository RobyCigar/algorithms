// #include <iostream>
// #include <string>

// using namespace std;

// struct Siswa
// {
//     int no_induk;
//     string nama;
//     float nilai;
// };

// int main()
// {
//     Siswa adi, bambang, murid;

//     cout << "Masukkan NIS Adi: ";
//     cin >> adi.no_induk;
//     cout << "Masukkan Nama Adi: ";
//     cin >> adi.nama;
//     cout << "Masukkan Nilai Adi: ";
//     cin >> adi.nilai;

//     cout << "Masukkan NIS Bambang: ";
//     cin >> bambang.no_induk;
//     cout << "Masukkan Nama Bambang: ";
//     cin >> bambang.nama;
//     cout << "Masukkan Nilai Bambang: ";
//     cin >> bambang.nilai;

//     cout << "Masukkan NIS Murid: ";
//     cin >> murid.no_induk;
//     cout << "Masukkan Nama Murid: ";
//     cin >> murid.nama;
//     cout << "Masukkan Nilai Murid: ";
//     cin >> murid.nilai;

//     cout << "Data siswa sebagai berikut:" << endl;
//     cout << "Data Adi" << endl;
//     cout << "NIS: " << adi.no_induk << " Nama: " << adi.nama << " Nilai: " << adi.nilai << endl;

//     cout << "Data Bambang" << endl;
//     cout << "NIS: " << bambang.no_induk << " Nama: " << bambang.nama << " Nilai: " << bambang.nilai << endl;

//     cout << "Data Siswa" << endl;
//     cout << "NIS: " << murid.no_induk << " Nama: " << murid.nama << " Nilai: " << murid.nilai << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// struct Siswa
// {
//     int no_induk;
//     string nama;
//     float nilai[4];
// };

// int main()
// {
//     Siswa murid; // inisiasi object di luar struct
//     cout << "Masukkan NIS: ";
//     cin >> murid.no_induk;
//     cout << "Masukkan Nama: ";
//     cin >> murid.nama;

//     float rata = 0.0;
//     for (int i = 0; i < 4; i++)
//     {
//         cout << "Masukkan Nilai " << i + 1 << ": ";
//         cin >> murid.nilai[i];
//         rata += murid.nilai[i];
//     }

//     rata /= 4; // Hitung rata-rata nilai

//     cout << "Data siswa:" << endl;
//     cout << "NIS: " << murid.no_induk << ", Nama: " << murid.nama << endl;
//     cout << "Nilai:";
//     for (int i = 0; i < 4; i++)
//     {
//         cout << " " << murid.nilai[i];
//     }
//     cout << endl;
//     cout << "Rata-rata nilai: " << rata << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// struct Siswa
// {
//     int no_induk;
//     string nama;
//     float nilai[4];
//     float rata;
// };

// int main()
// {
//     Siswa murid[20]; // inisiasi objek di luar struct

//     for (int j = 0; j < 4; j++)
//     {
//         cout << "Masukkan NIS: ";
//         cin >> murid[j].no_induk;
//         cout << "Masukkan Nama: ";
//         cin >> murid[j].nama;
//         murid[j].rata = 0; // Inisialisasi rata-rata

//         for (int i = 0; i < 4; i++)
//         {
//             cout << "Masukkan Nilai " << i + 1 << ": ";
//             cin >> murid[j].nilai[i];
//             murid[j].rata += murid[j].nilai[i];
//         }
//     }

//     cout << endl
//          << "Data Siswa" << endl;
//     murid[0].rata = murid[0].rata / 4;
//     cout << "Rata-rata Nilai " << murid[0].nama << " adalah " << murid[0].rata;

//     if (murid[0].rata > 70)
//     {
//         cout << " dinyatakan LULUS";
//     }
//     else
//     {
//         cout << " dinyatakan Remid";
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// const int GajiPerJam = 5000;
// const int JamLembur = 7;
// const float RateLembur = 15.0;

// struct Pegawai
// {
//     string nama;
//     int no_identitas;
//     int jam_kerja_perhari[5]; // Jam kerja per hari dari Senin hingga Jumat
// };

// int HitungTotalJamKerja(const Pegawai &pegawai)
// {
//     int total_jam_kerja = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         total_jam_kerja += pegawai.jam_kerja_perhari[i];
//     }
//     return total_jam_kerja;
// }

// int HitungGaji(const Pegawai &pegawai)
// {
//     int total_jam_kerja = HitungTotalJamKerja(pegawai);
//     int gaji_harian = total_jam_kerja * GajiPerJam;
//     if (total_jam_kerja > JamLembur)
//     {
//         int lembur = (total_jam_kerja - JamLembur) * GajiPerJam * RateLembur;
//         return gaji_harian + lembur;
//     }
//     return gaji_harian;
// }

// int main()
// {
//     Pegawai pegawai;

//     cout << "Masukkan Nama Pegawai: ";
//     getline(cin, pegawai.nama);

//     cout << "Masukkan No. Identitas Kerja: ";
//     cin >> pegawai.no_identitas;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Masukkan jam kerja hari ke-" << i + 1 << ": ";
//         cin >> pegawai.jam_kerja_perhari[i];
//     }

//     int total_gaji = HitungGaji(pegawai);
//     cout << "Total Jam Kerja: " << HitungTotalJamKerja(pegawai) << " jam" << endl;
//     cout << "Total Gaji Pegawai: Rp " << total_gaji << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

struct MataKuliah
{
    string nama_matkul;
    int sks;
    float nilai;
};

float HitungTotalSKS(const MataKuliah *matkul, int jumlah_matkul)
{
    float total_sks = 0;
    for (int i = 0; i < jumlah_matkul; i++)
    {
        total_sks += matkul[i].sks;
    }
    return total_sks;
}

float HitungTotalBobot(const MataKuliah *matkul, int jumlah_matkul)
{
    float total_bobot = 0;
    for (int i = 0; i < jumlah_matkul; i++)
    {
        total_bobot += matkul[i].nilai * matkul[i].sks;
    }
    return total_bobot;
}

float HitungIPK(const MataKuliah *matkul, int jumlah_matkul)
{
    float total_bobot = HitungTotalBobot(matkul, jumlah_matkul);
    float total_sks = HitungTotalSKS(matkul, jumlah_matkul);
    if (total_sks == 0)
        return 0;
    return total_bobot / total_sks;
}

int main()
{
    int jumlah_matkul;
    cout << "Masukkan jumlah mata kuliah: ";
    cin >> jumlah_matkul;

    MataKuliah *matkul = new MataKuliah[jumlah_matkul];

    for (int i = 0; i < jumlah_matkul; i++)
    {
        cout << "Masukkan nama mata kuliah " << i + 1 << ": ";
        cin.ignore(); 
        getline(cin, matkul[i].nama_matkul);

        cout << "Masukkan SKS mata kuliah " << i + 1 << ": ";
        cin >> matkul[i].sks;

        cout << "Masukkan nilai mata kuliah " << i + 1 << " (0-4): ";
        cin >> matkul[i].nilai;
    }

    float ipk = HitungIPK(matkul, jumlah_matkul);
    cout << "IPK Anda adalah: " << ipk << endl;

    delete[] matkul;

    return 0;
}
