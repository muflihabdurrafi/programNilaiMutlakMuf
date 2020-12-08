#include <iostream>
//Program penghitung persamaan & pertidaksamaan nilai mutlak
using namespace std;

void ambilpersamaan (int Nomorpersamaan, int Nomortanda){
  string persamaan;
  switch(Nomorpersamaan){
    case 0:
      persamaan = "invalid";
      cout << persamaan;
      break;
    case 1:
      switch(Nomortanda){
        case 0:
          persamaan = "invalid";
          cout << "invalid";
        break;
        case 1:
          persamaan = "|ax+b| < c";
          cout << persamaan;
        break;
        case 2:
          persamaan = "|ax+b| > c";
          cout << persamaan;
        break;
        case 3:
          persamaan = "|ax+b| = c";
          cout << persamaan;
        break;
        default:
         persamaan = "invalid";
         cout << persamaan;
         break;
      }
      break;
    case 2:
      switch(Nomortanda){
        case 0:
          persamaan = "invalid";
          cout << "invalid";
        break;
        case 1:
          persamaan = "|ax-b| < c";
          cout << persamaan;
        break;
        case 2:
          persamaan = "|ax-b| > c";
          cout << persamaan;
        break;
        case 3:
          persamaan = "|ax-b| = c";
          cout << persamaan;
        break;
        default:
         persamaan = "invalid";
         cout << persamaan;
        break;
      }
    break;
    case 3:
      switch(Nomortanda){
        case 0:
          persamaan = "invalid";
          cout << "invalid";
        break;
        case 1:
          persamaan = "d|ax+b| < c";
          cout << persamaan;
        break;
        case 2:
          persamaan = "d|ax+b| > c";
          cout << persamaan;
        break;
        case 3:
          persamaan = "d|ax+b| = c";
          cout << persamaan;
        break;
        default:
         persamaan = "invalid";
         cout << persamaan;
        break;
      }
      break;
    case 4:
      switch(Nomortanda){
        case 0:
          persamaan = "invalid";
          cout << "invalid";
        break;
        case 1:
          persamaan = "d|ax-b| < c";
          cout << persamaan;
        break;
        case 2:
          persamaan = "d|ax-b| > c";
          cout << persamaan;
        break;
        case 3:
          persamaan = "d|ax-b| = c";
          cout << persamaan;
        break;
        default:
         persamaan = "invalid";
         cout << persamaan;
        break;
      }
      break;
    default:
        persamaan = "invalid";
        cout << persamaan;
    }
}

void pilihanAkhir (int end);

int main()
{
  double a, b, c, d, e, sol1, sol2;
  int nomortanda;
  int nomorpersamaan;

  cout << "Selamat datang dalam program penghitung persamaan & pertidaksamaan nilai mutlak" << endl;

  cout << endl;
  cout << "Pilih bentuk persamaan/pertidaksamaan yang anda gunakan dengan mengetik nomor bentuk:" << endl;
  cout << "1. |ax+b| (tanda) c" << endl;
  cout << "2. |ax-b| (tanda) c" << endl;
  cout << "3. d|ax+b| (tanda) c" << endl;
  cout << "4. d|ax-b| (tanda) c" << endl;

  cout << endl;
  cout << "Pilih tanda persamaan/pertidaksamaan dengan mengetik nomor tanda: " << endl;
  cout << "1. '<'" << endl; 
  cout << "2. '>'" << endl; 
  cout << "3. '='" << endl; 

  cout << endl;
  cout << "Masukkan nomor persamaan: ";
  cin >> nomorpersamaan;
  cout << "Masukkan nomor tanda untuk persamaan: ";
  cin >> nomortanda;
  cout << "Persamaan yang anda ambil adalah ";
  ambilpersamaan(nomorpersamaan, nomortanda);
  cout << endl;

  switch (nomorpersamaan){
    case 0:
      cout << "invalid";
      break;
    case 1:
      switch (nomortanda){
        case 0:
          cout << "invalid";
          break;
        case 1:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;

          sol1 = (c-b)/a;
          sol2 = (-c-b)/a;
          cout << "Hasil pertidaksamaan tersebut adalah " << sol2 << " < x < " << sol1 << endl;
          break;
        case 2:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;

          sol1 = (c-b)/a;
          sol2 = (-c-b)/a;
          cout << "Hasil pertidaksamaan tersebut adalah x > " << sol1 << " atau x < " << sol2 << endl;
          break;
        case 3:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;

          sol1 = (c-b)/a;
          sol2 = (-c-b)/a;
          cout << "Hasil persamaan tersebut adalah x = " << sol1 << " atau x = " << sol2 << endl;
          break;
      }
      break;
    case 2:
      switch (nomortanda){
        case 0:
          cout << "invalid";
          break;
        case 1:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;

          sol1 = (c+b)/a;
          sol2 = (-c+b)/a;
          cout << "Hasil pertidaksamaan tersebut adalah " << sol2 << " < x < " << sol1 << endl;
          break;
        case 2:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;

          sol1 = (c+b)/a;
          sol2 = (-c+b)/a;
          cout << "Hasil pertidaksamaan tersebut adalah x > " << sol1 << " atau x < " << sol2 << endl;
          break;
        case 3:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;

          sol1 = (c+b)/a;
          sol2 = (-c+b)/a;
          cout << "Hasil persamaan tersebut adalah x = " << sol1 << " atau x = " << sol2 << endl;
          break;
      }
      break;
    case 3:
      switch (nomortanda){
        case 0:
          cout << "invalid";
          break;
        case 1:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;
          cout << "silakan masukan bilangan 'd': ";
          cin >> d;

          sol1 = ((c/d)-b)/a;
          sol2 = ((-c/d)-b)/a;
          cout << "Hasil pertidaksamaan tersebut adalah " << sol2 << " < x < " << sol1 << endl;
          break;
        case 2:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;
          cout << "silakan masukan bilangan 'd': ";
          cin >> d;

          sol1 = ((c/d)-b)/a;
          sol2 = ((-c/d)-b)/a;
          cout << "Hasil pertidaksamaan tersebut adalah x > " << sol1 << " atau x < " << sol2 << endl;
          break;
        case 3:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;
          cout << "silakan masukan bilangan 'd': ";
          cin >> d;

          sol1 = ((c/d)-b)/a;
          sol2 = ((-c/d)-b)/a;
          cout << "Hasil persamaan tersebut adalah x = " << sol1 << " atau x = " << sol2 << endl;
          break;
      }
      break;
    case 4:
      switch (nomortanda){
        case 0:
          cout << "invalid";
          break;
        case 1:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;
          cout << "silakan masukan bilangan 'd': ";
          cin >> d;

          sol1 = ((c/d)+b)/a;
          sol2 = ((-c/d)+b)/a;
          cout << "Hasil pertidaksamaan tersebut adalah " << sol2 << " < x < " << sol1 << endl;
          break;
        case 2:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;
          cout << "silakan masukan bilangan 'd': ";
          cin >> d;

          sol1 = ((c/d)+b)/a;
          sol2 = ((-c/d)+b)/a;
          cout << "Hasil pertidaksamaan tersebut adalah x > " << sol1 << " atau x < " << sol2 << endl;
          break;
        case 3:
          cout << "silakan masukan bilangan 'a': ";
          cin >> a;
          cout << "silakan masukan bilangan 'b': ";
          cin >> b;
          cout << "silakan masukan bilangan 'c': ";
          cin >> c;
          cout << "silakan masukan bilangan 'd': ";
          cin >> d;

          sol1 = ((c/d)+b)/a;
          sol2 = ((-c/d)+b)/a;
          cout << "Hasil persamaan tersebut adalah x = " << sol1 << " atau x = " << sol2 << endl;
          break;
      }
      break;
    default:
      cout << "invalid";
      break;
  }
  int end;
  cout << "Pilih: "<< endl;
  cout << "1. Ulangi" << endl;
  cout << "2. Berhenti" << endl;
  cin >> end;
  pilihanAkhir(end);
    
  return 0;
}

void pilihanAkhir (int end){
  switch(end){
     case 1:
      main();
      break;
     case 2:
      break;
     default:
      break;
  }
}