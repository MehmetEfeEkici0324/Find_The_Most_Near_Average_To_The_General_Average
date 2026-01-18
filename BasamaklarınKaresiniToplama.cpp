
﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int sayi1 = 0;
    char secim = 'n';

    baslangic:

    cout << "\n\t Bir sayi giriniz : ";
    cin >> sayi1;

   cout << "\n\t |              Girilen sayının basamakları              | : " << sayi1/10 << " " << (sayi1 % 10);
   cout << "\n\t |        Girilen sayının basamaklarının kareleri        | : " << pow(sayi1/10, 2) << " " << pow((sayi1 % 10), 2);
   cout << "\n\t |   Girilen sayının basamaklarının karelerinin toplamı  | : " << pow(sayi1/10 , 2) + pow((sayi1 % 10), 2) << endl;

   secimekranı:

   cout << "\n\n\t > Tekrar hesaplama yapmak ister misiniz ? ( Y/n ) : ";
   cin >> secim;

   if (secim == 'n') {
       system("exit");
   }
   else if (secim == 'y')
   {
       goto baslangic;
   }
   else if (secim == 'Y') 
   {
       goto baslangic;
   }
   else {

       cout << "\n\n\t\a YANLIŞ SECİM !!!";
       system("timeout /t 1 > nul");
       system("cls");
       goto secimekranı;
   }

}