// ismail soru2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

class Islem1
{
private:
    int number1, number2;
public:
    void setIslem1(int sayi1, int sayi2)
    {
        number1 = sayi1;
        number2 = sayi2;
    }
    int toplamaIslemi(int sayi1, int sayi2)
    {
        return sayi1 + sayi2;
    }


};
class Islem2
{
private:
    int number;
public:
    int setIslem2(int sayi)
    {
        number = sayi;
    }
    float karekokHesabi(int sayi)
    {
        float a = sqrt(sayi);
        return a;
    }

};
class Islem3
{
private:
    int number1, number2;
public:
    void setIslem3(int sayi1, int sayi2)
    {
        number1 = sayi1;
        number2 = sayi2;
    }
    int cikarma(int sayi1, int sayi2)
    {
        return sayi1 - sayi2;
    }

};
class Islem4
{
private:
    int number;
public:
    void setIslem4(int sayi1)
    {
        number = sayi1;
    }
    int kareAlma(int sayi1)
    {
        return pow(sayi1, 2);
    }
};
class noktalarArasiUzaklik : public Islem1, Islem2, Islem3, Islem4
{
public:
    float ikiNoktaArasiUzaklik(float x1, float x2, float y1, float y2)
    {
        float sonuc = karekokHesabi(toplamaIslemi(kareAlma(cikarma(x2, x1)), kareAlma(cikarma(y2, y1))));
        return sonuc;
    }
}NAU;


int main()
{
    system("color 4");
    float x1, x2, y1, y2;
    cout << "Iki Nokta Arasindaki Uzakligi Hesapliyoruz  " << endl;
    cout << "  ------------------------" << endl;
    cout << " /        2             2    " << endl;
    cout << "V (X2- X1)   + (Y2 - Y1) " << endl;
    cout << "Nokta 1 degerlerini giriniz (X1,Y1) " << endl;
    cout << "X1 :";
    cin >> x1;
    cout << "Y1 :";
    cin >> y1;
    cout << "Nokta 2 degerlerini giriniz (X2,Y2) " << endl;
    cout << "X2 :";
    cin >> x2;
    cout << "Y2 :";
    cin >> y2;
    cout << "Iki Nokta Arasindaki Uzaklik :" << NAU.ikiNoktaArasiUzaklik(x1, x2, y1, y2) << endl << endl;;
    return 0;
}
