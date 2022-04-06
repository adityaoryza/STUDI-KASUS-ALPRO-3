using namespace std;

class Input {
public:
  void cetak() {
    cout << "\n\n========STUDI KASUS PRAK ALGORITMA 3===================\n" << endl;
    cout << " 1. Aditya Oryza Mahendra (2100018401) " << endl;
    cout << " 2. Shantika Adila Putri  (2100018386)" << endl;	
    cout << "\n===================RESTORAN MAKANAN=====================" << endl;
    cout << "\n====================PENJUALAN AYAM======================" << endl;
    cout << "===========================================================" << endl;
    cout << "Menu yang tersedia : \n";
    cout << "1) Ayam Geprek     Rp. 21000 \n";
    cout << "2) Ayam Goreng     Rp. 17000 \n";
    cout << "3) Udang Goreng    Rp. 19000 \n";
    cout << "4) Cumi Goreng     Rp. 20000 \n";
    cout << "5) Ayam Bakar      Rp. 25000 \n";
    cout << "Pesan Ayam Geprek -> ";
    cin >> bnyk_aymGprk;
    cout << "Pesan Ayam Goreng -> ";
    cin >> bnyk_aymGr;
    cout << "Pesan Udang Goreng -> ";
    cin >> bnyk_udgGr;
    cout << "Pesan Cumi Goreng -> ";
    cin >> bnyk_cumGr;
    cout << "Pesan Ayam Bakar -> ";
    cin >> bnyk_aymBk;
    cout << "Jarak rumah ke restoran  -> ";
    cin >> jarak;
  }

  void toFile() {
    tulis_data.open("slip_bayar.txt");
    tulis_data << bnyk_aymGprk<< endl;
    tulis_data << bnyk_aymGr<< endl;
    tulis_data << bnyk_udgGr<< endl;
    tulis_data << bnyk_cumGr<< endl;
    tulis_data << bnyk_aymBk<< endl;
    tulis_data << jarak;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int bnyk_aymGprk;
  int bnyk_aymGr;
  int bnyk_udgGr;
  int bnyk_cumGr;
  int bnyk_aymBk;
  int jarak;
};