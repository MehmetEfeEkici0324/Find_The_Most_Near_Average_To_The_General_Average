#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");

    int adet_200 = 0;
    int adet_100 = 0;
    int adet_50 = 0;
    int adet_20 = 0;
    int adet_10 = 0;
    int toplam_banknot = 0;
    int miktar;

    tekrar:

    cout << "\n\n\t > ÇEKMEK İSTEDİĞİNİZ MİKTARI GİRİNİZ : ";
    cin >> miktar;

    if (miktar <= 0 || miktar % 10 != 0) {
        cout << "\n\n\t\a GEÇERSİZ GİRİŞ YAPTINIZ ! ";
        goto tekrar;
    }

    if (miktar >= 200) {
        adet_200 = (miktar / 200);
        miktar %= 200;
        toplam_banknot += adet_200;
    }

    if (miktar >= 100) {
        adet_100 = (miktar / 100);
        miktar %= 100;
        toplam_banknot += adet_100;
    }

    if (miktar >= 50) {
        adet_50 = (miktar / 50);
        miktar %= 50;
        toplam_banknot += adet_50;
    }

    if (miktar >= 20) {
        adet_20 = (miktar / 20);
        miktar %= 20;
        toplam_banknot += adet_20;
    }

    if (miktar >= 10) {
        adet_10 = (miktar / 10);
        miktar %= 10;
        toplam_banknot += adet_10;
    }

    cout << "\n\n\n\t 200 Banknot -> " << adet_200 << endl;
    cout << "\t 100 Banknot -> " << adet_100 << endl;
    cout << "\t 50 Banknot -> " << adet_50 << endl;
    cout << "\t 20 Banknot -> " << adet_20 << endl;
    cout << "\t 10 Banknot -> " << adet_10 << endl;
    cout << "\n\n\t | TOPLAM BANKNOT | : " << toplam_banknot;

}
