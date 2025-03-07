// Judul : Menghitung Volume dan Luas Permukaan Limas Segiempat
// Memodifikasi dengan Class
// Jumat 7 Maret 2025
// Programmer : Raka Heidar Baihaqi

#include <iostream>
#include <cmath>

using namespace std;

// Kelas untuk merepresentasikan limas segiempat
class LimasSegiempat {
private:
    float sisiAlas;  // Panjang sisi alas
    float tinggi;    // Tinggi limas

public:
    // Konstruktor untuk inisialisasi nilai saat objek dibuat
    LimasSegiempat(float s, float t) {
        sisiAlas = s;
        tinggi = t;
        cout << "\nObjek limas segiempat berhasil dibuat.\n";
    }

    // Destruktor, dipanggil saat objek keluar dari scope
    ~LimasSegiempat() {
        cout << "\nObjek limas segiempat dihapus dari memori.\n";
    }

    // Fungsi untuk menghitung volume limas
    float hitungVolume() {
        return (1.0 / 3) * (sisiAlas * sisiAlas) * tinggi;
    }

    // Fungsi untuk menghitung luas permukaan limas
    float hitungLuasPermukaan() {
        float luasAlas = sisiAlas * sisiAlas;
        float tinggiSegitiga = sqrt((sisiAlas / 2) * (sisiAlas / 2) + tinggi * tinggi);
        float luasSisiTegak = 4 * (0.5 * sisiAlas * tinggiSegitiga);
        return luasAlas + luasSisiTegak;
    }

    // Menampilkan hasil perhitungan
    void tampilkanHasil() {
        cout << "\n=== Hasil Perhitungan ===\n";
        cout << "Sisi Alas        : " << sisiAlas << endl;
        cout << "Tinggi           : " << tinggi << endl;
        cout << "Volume           : " << hitungVolume() << endl;
        cout << "Luas Permukaan   : " << hitungLuasPermukaan() << endl;
    }
};

// Program utama
int main() {
    float sisiAlas, tinggi;

    cout << "\n=== Program Menghitung Volume dan Luas Permukaan Limas Segiempat ===\n";
    cout << "\nMasukkan panjang sisi alas: ";
    cin >> sisiAlas;
    cout << "Masukkan tinggi limas: ";
    cin >> tinggi;

    // Membuat objek limas segiempat
    LimasSegiempat limas(sisiAlas, tinggi);

    // Menampilkan hasil perhitungan
    limas.tampilkanHasil();

    cout << "\nTerima kasih telah menggunakan program ini!\n";

    return 0;
}
