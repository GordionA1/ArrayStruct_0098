#include <iostream>
using namespace std;

struct orang{
    string nama;
    string alamat;
    string umur;
};

int main()
{
    //deklarasi obyek dengan struct orang
    orang mhs;
    //isi objek
    cout << "nama mahasiswa:";
    cin >> mhs.nama;
    cout << "Alamat Asal:";
    cin >> mhs.alamat;
    cout << "umur:";
    cin >> mhs.umur;
    cout <<endl;
}