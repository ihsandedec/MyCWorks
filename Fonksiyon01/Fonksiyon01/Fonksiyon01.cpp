

#include <iostream>
using namespace std;

void karesinihesapla(int sayi)
{
    int kare = sayi * sayi;
    cout << "sayinin karesi = " << kare << endl;
}
void merhabadunya()
{
    cout << "HEllo World ?" << endl;
}
int sayilartoplami(int a, int b)
{
    int toplam = 0;
    for (int i = a; i < b; i++)
    {
        toplam = toplam + i;
    }
    cout << "sayilar arasi toplam =" << toplam - 1 << endl;
    return toplam;
}
int main()
{
    merhabadunya();
    cout << "karesi hesaplanacak sayiyi giriniz :";
    int sayi1, sayi2;
    cin >> sayi1;
    karesinihesapla(sayi1);
    cout << " sayi1 giriniz :";
    cin >> sayi1;
    cout << " sayi2 giriniz :";
    cin >> sayi2;
    sayilartoplami(sayi1, sayi2);
    return 0;
}
