// Nama : Alfeus Martinus
// Kelas : RPL1A
// NIM : 2204148

#include <iostream>
using namespace std;

void KuisSatu ()
{
    string pass;
    string passbenar;
        cout << "SILAHKAN LOGIN";  

            for (int i = 2; i >= 0 ; --i)
            {
                cout << endl << "Masukan password anda :";
                cin >> pass;
                passbenar="KUIS1DASPRO";

                    if (pass == passbenar)
                    {
                        cout << "Selamat datang di Laboratorium Komputer SMAN 2 Harapan."<<endl;
                        break;
                    }
                    else if (i == 0)
                    {
                        cout << "Anda tidak diperkenankan mengakses aplikasi ini!"<< endl;
                        break;
                    }
                        cout <<"Login salah! Kesempatan anda " << i << " kali lagi"<<endl;
            }
}

void KuisDua ()
{
    int jam1 , jam2;
    int menit1 , menit2;
    int detik1 , detik2;
    int ops1 , ops2;
    int jumlahDetik , selisihJam , selisihMenit , untukJam , untukMenit;

        cout << "Hitung selisih Waktu Berlari \n"<<endl;
        cout << "Input Mulai"<<endl;
        cout << "Jam : ";
        cin >> jam1;
        cout << "Menit : ";
        cin >> menit1;
        cout << "Detik : ";
        cin >> detik1;

        cout << " \n";

        cout << "Input selesai"<<endl;
        cout << "Jam : ";
        cin >> jam2;
        cout << "Menit : ";
        cin >> menit2;
        cout << "Detik : ";
        cin >> detik2;

        // PENGOPERASIAN
        ops1 = (jam1*3600) + (menit1*60) + (detik1*1);
        ops2 = (jam2*3600) + (menit2*60) + (detik2*1);
        jumlahDetik = ops2 - ops1;
        selisihJam = jumlahDetik%3600;
        selisihMenit = selisihJam%60;
        untukJam = jumlahDetik/3600;
        untukMenit = selisihJam/60;
        

        cout <<untukJam << " jam " <<untukMenit  << " menit " << selisihMenit  <<" detik"<<endl;

}

int main ()
{
    int angka;
    system ("cls");
        cout <<"PROGRAM INSTITUSI PENDIDIKAN"<<endl;
        cout <<"PROGRAM YANG MEMBANTU ANDA SEKALIAN\n"<<endl;
        cout <<"==========MENU=========="<<endl;
        cout <<"[1] INPUT PASSWORD"<<endl;
        cout <<"[2] SELISIH JAM"<<endl;
        cout <<"Masukan Angka : ";
        cin >> angka;
        cout << endl;

        system ("cls");

           switch (angka) 
           {
                case 1 :
                {
                    KuisSatu();
                    system ("pause");
                    system ("cls"); 
                    
                    return main();
                }break;

                case 2 :
                {
                    KuisDua();
                    system ("pause");
                    system ("cls");
                    
                    return main();
                }break;

                default :
                {
                    cout << "Inputan Salah"<<endl;
                }break;
           }
    return main();
}