#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x;                                                      //variabel untuk menyimpan input dari lingkungan maupun bujur sangkar
public:
    bidangDatar() {                                             //Constructor
        x = 0;
    }

    virtual void input() {}                                         // fungsi menerima input dan mengirim input melalui fungsi setX untuk disimpan di x

    virtual float Luas(int a) {
        return 0;
    }                                                               // fungsi untuk menghitung luas

    virtual float Keliling(int a) {
        return 0;
    }

    void setX(int a) {
        this->x = a;                                                //fungsi untuk memberi/mengirim nilai pada x
    }

    int getX() {
        return x;
    }
};

class Lingkaran :public bidangDatar {
public:
    Lingkaran(int a):
        bidangDatar(){
        cout << "Lingkaran Dibuat\n" << endl;
        cout << "Masukan Jejari: " << a << endl;
    }
};

class Bujursangkar :public bidangDatar {
public:
    Bujursangkar(int a) :
        bidangDatar() {
        cout << "Bujursangkar dibuat\n" << endl;
        cout << "Masukkan Jejari: " << a << endl;
    }
};


int main() {
    bidangDatar Lingkaran;
    int a;
    Lingkaran.input();
    Lingkaran.setX(6);
    cout << Lingkaran.Luas(3.14 * 6 * 6) << endl;
    cout << Lingkaran.Keliling(3.14 * 12) << endl;
    Lingkaran.getX();

    
    bidangDatar Bujursangkar;
    Bujursangkar.setX(5);
    cout << Bujursangkar.getX() << endl;

    return 0;

}
