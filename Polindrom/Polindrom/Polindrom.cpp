// polindrom.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream> // cout,cin vs. için 
#include <string.h> // string türü için 
#include <stdbool.h> //bool
#include <fstream> // dosyalama işlemleri için 
using namespace std;

bool polindrom(char veri[], int ilkKarakter, int sonKarakter) //
{

    if (veri[ilkKarakter] != veri[sonKarakter])  //
    {
        return false;  //
    }

    if (ilkKarakter == sonKarakter)  //
    {
        return true;  //
    }

    if (sonKarakter >= ilkKarakter)  //
    {
        polindrom(veri, ++ilkKarakter, --sonKarakter);  //
        return true;  //
    }

}

bool polindromOlan(char veri[])  //
{
    int karaktersayisi = strlen(veri);  //
    if (karaktersayisi == 0)  //
    {
        return true;  //
    }
    return polindrom(veri, 0, --karaktersayisi);  //
}

int rev(int n, int temp)
{

    if (n == 0)
        return temp;


    temp = (temp * 10) + (n % 10);

    return rev(n / 10, temp);
}

int main()
{
    ofstream yazamadosyasi;  //
    yazamadosyasi.open("polindromlar.txt");  //

    int n = 121;
    int temp = rev(n, 0);
    char str[50];  //
    char devam;  //
    do
    {
        cout << "Denetlenek String Bir Veri Giriniz :";  //
        cin >> str;
        cin >> n;
        if (polindromOlan(str) || temp == n) //
        {
            cout << "Ifade Polindromik Ve Dosyaya Yazildi." << endl;  //
            yazamadosyasi << str << endl;  //

        }

        else
        {
            cout << "Ifade Polindromik Degil" << endl;  //
        }
        cout << "Devam Etmek Istiyor Musunuz ?" << "( E-e / H-h )" << endl;  //
        cin >> devam;  //

    } while (devam == 'E' || devam == 'e');  //

    yazamadosyasi.close();  //
    return 0;
}

