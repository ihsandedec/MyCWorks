#include <iostream>
using namespace std;

void yıldız1(int sayi)
{
    int satiruzunluk = sayi * 2 - 1;
    for (int i = 0; i < sayi; i++)
    {
        for (int j = 0; j < satiruzunluk; j++)
        {

            if (j<i || j>satiruzunluk - i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }

        }
        cout << endl;
    }
}
void yıldız2(int sayi)
{
    int satıruznluk = 2.5 * sayi;
    for (int i = 0; i < sayi; i++)
    {
        for (int j = 0; j < satıruznluk; j++)
        {
            if (j > sayi - 1 && j < sayi + sayi / 2)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main()
{
    yıldız1(6);
    cout << endl;
    yıldız2(4);
    return 0;
}
