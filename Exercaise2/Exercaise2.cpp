#include <string>
#include <iostream>
using namespace std;

class bidangDatar {
private:
        int x;// variable untuk menyimpan input dari lingkaran maupun bujursangkar
public:
    bidangDatar() {// construktor
        x = 0;
    }
    virtual void input (){}// fungsi yang menerima input dan mengrim input melalui fungsi setX unutk disimpan di x
    virtual float Luas(int a) {//FUngsi untuk menghitung Luas
        return 0;
    }
    virtual float keliling(int a) {// FUngsi unutk menghitung keliling
        return 0;
    }
    void setX(int a) {//fungsi untuk menghitung keliling
        this->x = a;
    }
    int getX() { // fungsi untunk membaca.mengambil nilai dalam x
        return x;
    }
};

class Lingkaran :public bidangDatar {
public:
    float Luas;
    Lingkaran(int pA, int pX) :
        bidangDatar(),
        Luas(pA) {
        cout << "Linkaran di hapus";
    }
    ~Lingkaran() {
        cout << "Lingkaran di hapus" << endl;
    }
    string Rumus{
         return "Hallo, Nama Saya " + Luas + " dari sekilah " + bidangDatar + "\n\n";
    }
};

int main()
{
    Lingkaran Rms1("alas di kali tinggi", "10");
    cout << Rms1.Rumus();
    cout << "hasil =" << Rms1.setX(int a) << endl;
}


