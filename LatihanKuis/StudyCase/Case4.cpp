#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variabel akumulasi rekap (bersifat global di dalam main agar data tidak hilang)
    int countFiksi = 0, biayaFiksi = 0;
    int countSains = 0, biayaSains = 0;
    int countRef = 0, biayaRef = 0;
    
    int pilihanMenu;

    do {
        cout << "\nPERPUSTAKAAN CAHAYA ILMU\n";
        cout << "1. Pinjam Buku\n";
        cout << "2. Rekap Peminjaman\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1: {
                int jumlahPeminjam;
                cout << "Masukkan jumlah peminjam: ";
                cin >> jumlahPeminjam;
                cin.ignore(); // Membersihkan buffer newline

                bool hentikanSemua = false;

                for (int i = 1; i <= jumlahPeminjam; i++) {
                    if (hentikanSemua) break;

                    cout << "--- Peminjam ke-" << i << " ---\n";
                    string nama;
                    cout << "Nama Lengkap: ";
                    getline(cin, nama);

                    int kategori;
                    cout << "Pilih Kategori:\n";
                    cout << "1. Buku Fiksi\n";
                    cout << "2. Buku Sains\n";
                    cout << "3. Buku Referensi\n";
                    cout << "Pilihan: ";
                    cin >> kategori;

                    // Validasi kategori tidak tersedia
                    if (kategori < 1 || kategori > 3) {
                        cout << "Kategori tidak tersedia. Pencatatan dihentikan!\n";
                        cout << "(Kembali ke menu awal dan tidak melanjutkan pencatatan setelahnya)\n";
                        hentikanSemua = true;
                        cin.ignore();
                        break;
                    }

                    int lamaPinjam;
                    cout << "Lama Pinjam (hari): ";
                    cin >> lamaPinjam;
                    cin.ignore(); // Membersihkan buffer newline

                    // Validasi lama peminjaman melebihi batas
                    if (lamaPinjam > 7) {
                        cout << "Lama peminjaman melebihi batas. Peminjaman ditolak!\n";
                        continue; // Lanjut ke peminjam berikutnya
                    }

                    // Hitung biaya administrasi
                    int tarifPerHari = 0;
                    switch (kategori) {
                        case 1: tarifPerHari = 1000; break;
                        case 2: tarifPerHari = 1500; break;
                        case 3: tarifPerHari = 2000; break;
                    }

                    int totalBiaya = tarifPerHari * lamaPinjam;
                    cout << "Peminjaman Berhasil! Biaya administrasi: Rp" << totalBiaya << "\n";

                    // Akumulasi data ke rekap
                    if (kategori == 1) {
                        countFiksi++;
                        biayaFiksi += totalBiaya;
                    } else if (kategori == 2) {
                        countSains++;
                        biayaSains += totalBiaya;
                    } else if (kategori == 3) {
                        countRef++;
                        biayaRef += totalBiaya;
                    }
                }
                break;
            }
            case 2: {
                int totalPeminjaman = countFiksi + countSains + countRef;
                int totalBiayaSemua = biayaFiksi + biayaSains + biayaRef;

                cout << "\nREKAP PEMINJAMAN\n";
                cout << "Buku Fiksi      : " << countFiksi << " peminjaman | Rp" << biayaFiksi << "\n";
                cout << "Buku Sains      : " << countSains << " peminjaman | Rp" << biayaSains << "\n";
                cout << "Buku Referensi  : " << countRef << " peminjaman | Rp" << biayaRef << "\n";
                cout << "Total Peminjaman: " << totalPeminjaman << "\n";
                cout << "Total Biaya     : Rp" << totalBiayaSemua << "\n";
                break;
            }
            case 3:
                cout << "Terima kasih telah menggunakan program Perpustakaan Cahaya Ilmu.\n";
                break;
            default:
                cout << "Menu tidak valid! Silakan pilih antara 1 - 3.\n";
        }
    } while (pilihanMenu != 3);

    return 0;
}
