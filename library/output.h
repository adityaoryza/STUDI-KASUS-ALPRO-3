using namespace std;

class Output {
public:
  void cetak() {
    cout << "SLIP PEMBAYARAN \n";
    cout << "Yang dibeli : \n";
    cout << "  Ayam Geprek   -> " << data_file[4] << endl;
    cout << "  Ayam Goreng   -> " << data_file[5] << endl;
    cout << "  Udang Goreng  -> " << data_file[6] << endl;
    cout << "  Cumi Goreng   -> " << data_file[7] << endl;
    cout << "  Ayam Bakar    -> " << data_file[8] << endl;
    cout << "  Jarak Rumah : " << data_file[3] << endl;
    cout << "  Ongkir      : " << data_file[9] << endl;
    cout << "  Harga total Rp. " << data_file[0] << endl;
    cout << "  Diskon      Rp. " << data_file[1] << endl;
    cout << "  Harga Bayar Rp. " << data_file[2];
  }

  void getData() {
    ambil_data.open("slip_bayar.txt");
    while (!ambil_data.eof()) {
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }

  void toFile() {
    tulis_data.open("slip_bayar.txt");
    tulis_data << "SLIP PEMBAYARAN \n";
    tulis_data << "Yang dibeli : \n";
    tulis_data << "  Ayam Geprek   -> " << data_file[4] << endl;
    tulis_data << "  Ayam Goreng   -> " << data_file[5] << endl;
    tulis_data << "  Udang Goreng  -> " << data_file[6] << endl;
    tulis_data << "  Cumi Goreng   -> " << data_file[7] << endl;
    tulis_data << "  Ayam Bakar    -> " << data_file[8] << endl;
    tulis_data << "  Jarak Rumah : " << data_file[3] << endl;
    tulis_data << "  Ongkir      : " << data_file[9] << endl;
    tulis_data << "  Harga total Rp. " << data_file[0] << endl;
    tulis_data << "  Diskon      Rp. " << data_file[1] << endl;
    tulis_data << "  Harga Bayar Rp. " << data_file[2];
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  string data_file[30];
  int index = 0;
};