#include <iostream> 
using namespace std;

class MasukUniversitas {
    private: // isi access modifier disini 
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
    // isi daftar variable yang dibutuhkan di bawah ini 

public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
        // isi nilai default variable yang dibutuhkan di bawah ini 
    }

    virtual void namaJalurMasuk() { 
        return; 
    }
    // isi disini dengan fungsi virtual yang dibutuhkan 

    virtual void hitungTotalBiaya() {
        return;
    }
    virtual void tampilkanTotalBiaya() {
        return;
    }
    virtual void input() {
        return;
    }
    
    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran() {
        return uangPendaftaran;
    }

    // isi setter dan getter variable yang dibutuhkan di bawah ini

    void setUangSemesterPertama(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangSemesterPertama() {
        return uangPendaftaran;
    }
    void setUangBangunan(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangBangunan() {
        return uangPendaftaran;
    }
    void setTotalBiaya(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getTotalBiaya() {
        return uangPendaftaran;
    }
};

class SNBT : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBT 
public:
    void namaJalurmasuk() {
        cout << "Jalur SNBT" << endl;
    }
    
    void input() {
        int uangPendaftaran, uangSemesterPertama, uangBangunan;
        cout << "Masukkan uang pendaftaran : ";
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester pertama : ";
        cin >> uangSemesterPertama;
        cout << "Masukkan uang bangunan : ";
        cin >> uangBangunan;

        setUangPendaftaran(uangPendaftaran);
        setUangSemesterPertama(uangSemesterPertama);
        setUangBangunan(uangBangunan);
    }

    void hitungTotalBiaya() {
        int totalBiaya = getUangPendaftaran() + getUangSemesterPertama() + getUangBangunan();
        setTotalBiaya(totalBiaya);
    }

    void tampilkanTotalBiaya() {
        int totalBiaya = getTotalBiaya();
        cout << "Total Biaya : " << totalBiaya << endl;

        if (totalBiaya > 20000000) {
            cout << "Kategori : Muahall" << endl;
        }
        else if (totalBiaya < 10000000){
            cout << "Kategori : Murahh" << endl;
        }
        else {
            cout << "Kategori : Sedang" << endl;
        }
    }
};

class SNBP : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBP 
public:
    void namaJalurmasuk() {
        cout << "Jalur SNBP" << endl;
    }

    void input() {
        int uangPendaftaran, uangSemesterPertama, uangBangunan;
        cout << "Masukkan uang pendaftaran : ";
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester pertama : ";
        cin >> uangSemesterPertama;

        setUangPendaftaran(uangPendaftaran);
        setUangSemesterPertama(uangSemesterPertama);
    }

    void hitungTotalBiaya() {
        int totalBiaya = getUangPendaftaran() + getUangSemesterPertama();
        setTotalBiaya(totalBiaya);
    }

    void tampilkanTotalBiaya() {
        int totalBiaya = getTotalBiaya();
        cout << "Total Biaya : " << totalBiaya << endl;

        if (totalBiaya > 20000000) {
            cout << "Kategori : Muahall" << endl;
        }
        else if (totalBiaya < 10000000) {
            cout << "Kategori : Murahh" << endl;
        }
        else {
            cout << "Kategori : Sedang" << endl;
        }
    }
};

int main() {
    // isi disini untuk fungsi main 
    MasukUniversitas* mu;
    int ch;
    cout << "**Hitung Biaya Masuk Universitas**\n" << endl;
    cout << "Pilih Jalur Masuk : " << endl;
    cout << "1. SNBT" << endl;
    cout << "1. SNBT" << endl;
    cout << "3. Keluar" << endl;
    
    mu->namaJalurMasuk();
    mu->input();
    mu->hitungTotalBiaya();
    mu->tampilkanTotalBiaya();

    return 0;
}