# Latihan Mandiri: Sistem Kasir Laundry Mahasiswa

## Deskripsi Kasus
Usaha laundry dekat kampus butuh program kasir sederhana untuk menghitung biaya cuci pakaian mahasiswa berdasarkan berat timbangan, jenis layanan, dan diskon potongan harga.

Ketentuan Tarif:
1. Layanan Reguler (Kode 1):
   - Biaya: Rp 6.000 per kg.
   - Waktu pengerjaan: 3 hari.
2. Layanan Kilat / Express (Kode 2):
   - Biaya: Rp 9.000 per kg.
   - Waktu pengerjaan: 1 hari.

Ketentuan Diskon:
- Jika berat cucian mencapai 5 kg atau lebih, pelanggan mendapat potongan harga Rp 3.000.
- Jika berat cucian kurang dari 5 kg, tidak ada potongan harga (Rp 0).

---

## Ketentuan Teknis
- Murni Pass by Value (tanpa tanda `&`).
- Tanpa prototype function (semua fungsi ditulis di atas `main()`).
- Wajib memiliki fungsi perapi tampilan `garisBatas()`.
- Jangan menulis semua perhitungan di dalam `main()`.

---

## Fungsi yang Wajib Dibuat

1. `void garisBatas()`
   - Mencetak garis pemisah `----------------------------------------`.

2. `bool validasiLayanan(int jenis)`
   - Return `true` jika jenis bernilai 1 atau 2.
   - Return `false` jika selain itu.

3. `long hitungBiayaDasar(int jenis, double berat)`
   - Mengalikan tarif per kg dengan berat cucian.
   - Return total biaya kotor (sebelum diskon).

4. `long hitungDiskon(double berat)`
   - Cek apakah berat >= 5.0 kg.
   - Jika ya, return 3000. Jika tidak, return 0.

5. `int getEstimasiHari(int jenis)`
   - Return 3 jika jenis 1 (Reguler).
   - Return 1 jika jenis 2 (Kilat).

6. `void cetakNota(string nama, double berat, int jenis, long total, int hari)`
   - Prosedur untuk mencetak nota rapi dengan bantuan `garisBatas()`.

---

## Contoh Alur Program

Input:
```text
----------------------------------------
       KASIR LAUNDRY MAHASISWA
----------------------------------------
Nama Pelanggan    : Budi
Berat Cucian (kg) : 6.5
Pilih Layanan:
1. Reguler (Rp 6.000/kg - 3 Hari)
2. Kilat   (Rp 9.000/kg - 1 Hari)
Pilihan (1/2)     : 1
```

Proses:
- Biaya kotor = 6.5 * 6000 = 39.000.
- Diskon (berat >= 5kg) = 3.000.
- Total bayar = 39.000 - 3.000 = 36.000.
- Estimasi = 3 hari.

Output:
```text
----------------------------------------
            NOTA TRANSAKSI
----------------------------------------
Pelanggan     : Budi
Berat         : 6.5 kg
Layanan       : Reguler
Biaya Dasar   : Rp 39000
Diskon        : Rp 3000
Total Bayar   : Rp 36000
Estimasi Jadi : 3 Hari
----------------------------------------
```