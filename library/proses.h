using namespace std;

class Proses {
	public :
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("slip_bayar.txt");
			bool ayam_geprek = true;
			while(!ambil_data.eof()){
				if (ayam_geprek){
					ambil_data >> aymGprk;
					ayam_geprek = false;
				} else{
					ambil_data >> bnyk_ayreng;
          ambil_data >> bnyk_udreng;
          ambil_data >> bnyk_cureng;
          ambil_data >> bnyk_aykar;
          ambil_data >> jarak;
				}
			}
			ambil_data.close();
		}

		void toFile(){
			int total = (hrg_ayprek * aymGprk) + (hrg_ayreng * bnyk_ayreng) + (hrg_udreng * bnyk_udreng) + (hrg_cureng * bnyk_cureng) + (hrg_aykar * bnyk_aykar);
			float batas = 25000;
      float ongkir;
			float t2 = float(total);
			float diskon;

      if (jarak < 3){
        ongkir = 15000;
      } else {
        ongkir = 25000;
      }
      
      if (total >= 150000){
        diskon = t2 * 0.35;
        ongkir = ongkir - 8000;
      } else if (total >= 50000){
        diskon = t2 * 0.15;
        ongkir = ongkir - 5000;
      } else if (total >= 25000){
        ongkir = ongkir - 3000;
      }

			if (total >= batas){
				t2 = t2 - diskon + ongkir;
      } else {
        t2 = t2 + ongkir;
      }

			tulis_data.open("slip_bayar.txt");
			tulis_data << total << endl;//0
			tulis_data << diskon << endl;//1
			tulis_data << t2 << endl;//2
      tulis_data << jarak << endl;//3
			tulis_data << aymGprk << endl;//4
			tulis_data << bnyk_ayreng << endl;//5
      tulis_data << bnyk_udreng << endl;//6
      tulis_data << bnyk_cureng << endl;//7
      tulis_data << bnyk_aykar << endl;//8
      tulis_data << ongkir << endl;//9
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
    int aymGprk;
    int bnyk_ayreng;
    int bnyk_udreng;
    int bnyk_cureng;
    int bnyk_aykar;
		int hrg_ayprek = 21000;
		int hrg_ayreng = 17000;
    int hrg_udreng = 19000;
    int hrg_cureng = 20000;
    int hrg_aykar = 25000;
    int jarak;
};