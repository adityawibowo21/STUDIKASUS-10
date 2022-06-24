#include <iostream>
using namespace std;

class pointer{
public:
  void input(string *nama, int *nim, int *skor);
  void proses(string *nama, int *nim, int *skor);
  void output(string *nama, int *nim, int *skor);

private:
  int i, j, n, temp;
  string temp2;
};


void pointer::input(string *nama, int *nim, int *skor){
    cout << "============================================" << endl;
    cout << "| Menginput Daftar Mahasiswa yang Berhasil |" << endl;
    cout << "|          Masuk Ke Babak Final            |" << endl;
    cout << "============================================" << endl;
    cout << "Masukkan Jumlah Mahasiswa : ";
    cin >> n;
    for(i=0;i<n;i++){
        cout << "Masukkan Nama Mahasiswa  : ";
        cin >> nama[i];
        cout << "Masukkan NIM Mahasiswa   : ";
        cin >> nim[i];
        cout << "Masukkan Score Mahasiswa : ";
        cin >> skor[i];
        cout << "----------------------------------------" << endl;
    }
}

void pointer::proses(string *nama, int *nim, int *skor){
  for(i=0;i<n;i++){
          for(j=0;j<(n-i-1);j++){
              if(skor[j] < skor[j+1]){
                  temp = skor[j];
                  skor[j] = skor[j+1];
                  skor[j+1] = temp;
  
                  temp = nim[j];
                  nim[j] = nim[j+1];
                  nim[j+1] = temp;
  
                  temp2 = nama[j];
                  nama[j] = nama[j+1];
                  nama[j+1] = temp2;
              }
          }
      }
}

void pointer::output(string *nama, int *nim, int *skor){
    cout << "\n===========================================" << endl;
    cout << "| Daftar Mahasiswa Finalis Lomba Parmatika |" << endl;
    cout << "============================================" << endl;
    for(i=0;i<n;i++){
        cout << "Nama Mahasiswa ke-" << i+1 << " : " << nama[i] << endl;
        cout << "NIM Mahasiswa ke-" << i+1 << " : " << nim[i] << endl;
        cout << "Score Mahasiswa ke-" << i+1 << " : " << skor[i] << endl;
        cout << "--------------------------" << endl;
    }
}

int main(){
  string nama[100];
  int nim[100], skor[100];
  pointer saya;
  saya.input(nama, nim, skor);
  saya.proses(nama, nim, skor);
  saya.output(nama, nim, skor);
}