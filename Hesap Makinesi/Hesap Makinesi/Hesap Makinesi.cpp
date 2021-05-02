#include <iostream>
#include <windows.h> // Arkaplan ve yazı rengi
using namespace std;

class OzelIslem
{
private:
	int number1;
	int number2;
	int number3;
public:

	void setSayi1Ulasma(int number1) { this->number1 = number1; }
	void setSayi2Ulasma(int number2) { this->number2 = number2; }
	void setSayi3Ulasma(int number3) { this->number3 = number3; }
	void setAll(int number1, int number2, int number3)
	{
		this->number1 = number1;
		this->number2 = number2;
		this->number3 = number3;
	}

	int getSayi1Ulasma() { return number1; }
	int getSayi2Ulasma() { return number2; }
	int getSayi3Ulasma() { return number3; }

	int Ekok(int number1, int number2)
	{

		int kucuk, buyuk;
		if (number1 > number2)
		{
			buyuk = number1;
			kucuk = number2;
		}
		else
		{
			buyuk = number2;
			kucuk = number1;
		}
		int kat = kucuk;
		while (kat % kucuk != 0 || kat % buyuk != 0)
		{
			kat = kat + kucuk;
		}
		return kat;
	}
	int Ekok(int number1, int number2, int number3)
	{
		return Ekok(Ekok(number1, number2), number3);
	}

	int Ebob(int number1, int number2)
	{

		int kucuk, buyuk;
		if (number1 > number2)
		{
			buyuk = number1;
			kucuk = number2;
		}
		else
		{
			buyuk = number2;
			kucuk = number1;
		}
		int bolen = kucuk;
		while (number1 % bolen != 0 || number2 % bolen != 0)
		{
			bolen--;
		}
		return bolen;
	}
	int Ebob(int number1, int number2, int number3)
	{
		return Ebob(Ebob(number1, number2), number3);
	}

	int Faktoriyel(int number1)
	{
		if (number1 == 1 || number1 == 0)
			return 1;
		else
			return number1 * Faktoriyel(number1 - 1);
	}

	int UsAlma(int number1, int number2)
	{
		int sonuc = 1;
		for (int i = 0; i < number2; i++)
		{
			sonuc = number1 * sonuc;
		}
		return sonuc;
	}

}Islem1;
class DortIslem
{
private:
	int sayi1;
	int sayi2;
	int sayi3;
public:

	void setReachingNumber1(int sayi1) { this->sayi1 = sayi1; }
	void setReachingNumber2(int sayi2) { this->sayi2 = sayi2; }
	void setReachingNumber3(int sayi3) { this->sayi3 = sayi3; }
	void setReachingNumberAll(int sayi1, int sayi2, int sayi3)
	{
		this->sayi1 = sayi1;
		this->sayi2 = sayi2;
		this->sayi3 = sayi3;
	}

	int getReachingNumber1() { return sayi1; }
	int getReachingNumber2() { return sayi2; }
	int getReachingNumber3() { return sayi3; }

	int Topla(int sayi1, int sayi2)
	{
		int toplam = 0;
		toplam = sayi1 + sayi2;
		return toplam;
	}
	int Topla(int sayi1, int sayi2, int sayi3)
	{
		return Topla(Topla(sayi1, sayi2), sayi3);
	}

	int Cikar(int sayi1, int sayi2)
	{
		int fark = 0;
		fark = sayi1 - sayi2;
		return fark;
	}
	int Cikar(int sayi1, int sayi2, int sayi3)
	{
		return Cikar(Cikar(sayi1, sayi2), sayi3);
	}

	int Carp(int sayi1, int sayi2)
	{
		int carpim = 1;
		carpim = sayi1 * sayi2;
		return carpim;
	}
	int Carp(int sayi1, int sayi2, int sayi3)
	{
		return Carp(Carp(sayi1, sayi2), sayi3);
	}

	int Bol(int sayi1, int sayi2)
	{
		int bolme = 1;
		bolme = sayi1 / sayi2;
		return bolme;
	}
	int Bol(int sayi1, int sayi2, int sayi3)
	{
		return Bol(Bol(sayi1, sayi2), sayi3);
	}

}Islem2;
class Islemler : public OzelIslem, DortIslem
{
public:
	void anaMenü()
	{
		int sayi1, sayi2, sayi3;
		int sayibelirleme;
		char devam2, secim;
		system("cls");
		cout << "======== MENU ========" << endl << endl;
		cout << "1-EKOK (En Kucuk Ortak Kat )" << endl;
		cout << "2-EBOB (En Buyuk Ortak Bolen)" << endl;
		cout << "3-Faktoriyel Hesabi" << endl;
		cout << "4-Us Alma " << endl;
		cout << "5-Toplama" << endl;
		cout << "6-Cikarma" << endl;
		cout << "7-Carpma" << endl;
		cout << "8-Bolme" << endl;
		cout << "Secmek Istediginiz Islem Numarasini Giriniz :";
		cin >> secim;
		switch (secim)
		{
		case '1':
		{
			do
			{
				system("cls");
				cout << "===== EKOK (En Kucuk Ortak Kat ) HESAPLAMA =====" << endl << endl;
				cout << "Kac Sayi Ile Islem Yapmak Istiyorsunuz (2 veya 3 ) : ";
				cin >> sayibelirleme;
				if (sayibelirleme == 2)
				{
					system("cls");
					cout << "===== EKOK (En Kucuk Ortak Kat ) HESAPLAMA =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem1.setSayi1Ulasma(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem1.setSayi2Ulasma(sayi2);
					cout << Islem1.getSayi1Ulasma() << " , " << Islem1.getSayi2Ulasma() << " EKOK :" << Islem1.Ekok(sayi1, sayi2) << endl;

				}
				if (sayibelirleme == 3)
				{
					system("cls");
					cout << "===== EKOK (En Kucuk Ortak Kat ) HESAPLAMA =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem1.setSayi1Ulasma(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem1.setSayi2Ulasma(sayi2);
					cout << "3.Sayiyi Giriniz :";
					cin >> sayi3;
					Islem1.setSayi3Ulasma(sayi3);
					cout << Islem1.getSayi1Ulasma() << " , " << Islem1.getSayi2Ulasma() << " , " << Islem1.getSayi3Ulasma() << " EKOK :" << Islem1.Ekok(sayi1, sayi2, sayi3) << endl;
				}
				else if (sayibelirleme != 2 && sayibelirleme != 3)
				{
					system("cls");
					cout << "=====EKOK (En Kucuk Ortak Kat ) HESAPLAMA=====" << endl << endl;
					cout << "Sadece 2 veya 3 Sayi Ile Islem Yapabilirsiniz ! ! " << endl;
				}

				cout << "Devam Etmek Istiyor Musunuz (E-e / H-h) :";
				cin >> devam2;
			} while (devam2 == 'e' || devam2 == 'E');
			break;
		}
		case '2':
		{
			do
			{
				system("cls");
				cout << "===== EBOB (En Buyuk Ortak Bolen) HESAPLAMA =====" << endl << endl;
				cout << "Kac Sayi Ile Islem Yapmak Istiyorsunuz (2 veya 3 ) : ";
				cin >> sayibelirleme;
				if (sayibelirleme == 2)
				{
					system("cls");
					cout << "===== EBOB (En Buyuk Ortak Bolen) HESAPLAMA =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem1.setSayi1Ulasma(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem1.setSayi2Ulasma(sayi2);
					cout << Islem1.getSayi1Ulasma() << " , " << Islem1.getSayi2Ulasma() << " EBOB :" << Islem1.Ebob(sayi1, sayi2) << endl;

				}
				if (sayibelirleme == 3)
				{
					system("cls");
					cout << "===== EBOB (En Buyuk Ortak Bolen) HESAPLAMA =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem1.setSayi1Ulasma(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem1.setSayi2Ulasma(sayi2);
					cout << "3.Sayiyi Giriniz :";
					cin >> sayi3;
					Islem1.setSayi3Ulasma(sayi3);
					cout << Islem1.getSayi1Ulasma() << " , " << Islem1.getSayi2Ulasma() << " , " << Islem1.getSayi3Ulasma() << " EBOB :" << Islem1.Ebob(sayi1, sayi2, sayi3) << endl;
				}
				else if (sayibelirleme != 2 && sayibelirleme != 3)
				{
					system("cls");
					cout << "===== EBOB (En Buyuk Ortak Bolen) HESAPLAMA =====" << endl << endl;
					cout << "Sadece 2 veya 3 Sayi Ile Islem Yapabilirsiniz ! ! " << endl;
				}
				cout << "Devam Etmek Istiyor Musunuz (E-e / H-h) :";
				cin >> devam2;
			} while (devam2 == 'e' || devam2 == 'E');
			break;
		}
		case '3':
		{
			do
			{
				system("cls");
				cout << "===== FAKTORIYEL HESAPLAMA =====" << endl << endl;
				cout << "Hesaplamak Istedigiz Sayiyi Giriniz :";
				cin >> sayi1;
				Islem1.setSayi1Ulasma(sayi1);
				cout << Islem1.getSayi1Ulasma() << "! = " << Islem1.Faktoriyel(sayi1) << endl;
				cout << "Devam Etmek Istiyor Musunuz (E-e / H-h) :";
				cin >> devam2;
			} while (devam2 == 'e' || devam2 == 'E');
			break;
		}
		case '4':
		{
			do
			{
				system("cls");
				cout << "===== US HESAPLAMA ===== " << endl << endl;
				cout << "Sayinin Tabanini Giriniz :";
				cin >> sayi1;
				Islem1.setSayi1Ulasma(sayi1);
				cout << "Sayinin Ussunu Giriniz :";
				cin >> sayi2;
				Islem1.setSayi2Ulasma(sayi2);
				cout << Islem1.getSayi1Ulasma() << "^" << Islem1.getSayi2Ulasma() << "= " << Islem1.UsAlma(sayi1, sayi2) << endl;
				cout << "Devam Etmek Istiyor Musunuz (E-e / H-h) :";
				cin >> devam2;
			} while (devam2 == 'e' || devam2 == 'E');
			break;
		}
		case '5':
		{
			do
			{
				system("cls");
				cout << "===== TOPLAMA =====" << endl << endl;
				cout << "Kac Sayi Ile Islem Yapmak Istiyorsunuz (2 veya 3 ) : ";
				cin >> sayibelirleme;
				if (sayibelirleme == 2)
				{
					system("cls");
					cout << "===== TOPLAMA =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem2.setReachingNumber1(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem2.setReachingNumber2(sayi2);
					cout << Islem2.getReachingNumber1() << "+" << Islem2.getReachingNumber2() << " = " << Islem2.Topla(sayi1, sayi2) << endl;

				}
				if (sayibelirleme == 3)
				{
					system("cls");
					cout << "===== TOPLAMA =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem2.setReachingNumber1(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem2.setReachingNumber2(sayi2);
					cout << "3.Sayiyi Giriniz :";
					cin >> sayi3;
					Islem2.setReachingNumber3(sayi3);
					cout << Islem2.getReachingNumber1() << "+" << Islem2.getReachingNumber2() << "+" << Islem2.getReachingNumber3() << " = " << Islem2.Topla(sayi1, sayi2, sayi3) << endl;
				}
				else if (sayibelirleme != 2 && sayibelirleme != 3)
				{
					system("cls");
					cout << "===== TOPLAMA =====" << endl << endl;
					cout << "Sadece 2 veya 3 Sayi Ile Islem Yapabilirsiniz ! ! " << endl;
				}
				cout << "Devam Etmek Istiyor Musunuz (E-e / H-h) :";
				cin >> devam2;
			} while (devam2 == 'e' || devam2 == 'E');
			break;
		}
		case '6':
		{
			do
			{
				system("cls");
				cout << "===== CIKARMA =====" << endl << endl;
				cout << "Kac Sayi Ile Islem Yapmak Istiyorsunuz (2 veya 3 ) : ";
				cin >> sayibelirleme;
				if (sayibelirleme == 2)
				{
					system("cls");
					cout << "===== CIKARMA =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem2.setReachingNumber1(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem2.setReachingNumber2(sayi2);
					cout << Islem2.getReachingNumber1() << "-" << Islem2.getReachingNumber2() << " = " << Islem2.Cikar(sayi1, sayi2) << endl;

				}
				if (sayibelirleme == 3)
				{
					system("cls");
					cout << "===== CIKARMA =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem2.setReachingNumber1(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem2.setReachingNumber2(sayi2);
					cout << "3.Sayiyi Giriniz :";
					cin >> sayi3;
					Islem2.setReachingNumber3(sayi3);
					cout << Islem2.getReachingNumber1() << "-" << Islem2.getReachingNumber2() << "-" << Islem2.getReachingNumber3() << " = " << Islem2.Cikar(sayi1, sayi2, sayi3) << endl;
				}
				else if (sayibelirleme != 2 && sayibelirleme != 3)
				{
					system("cls");
					cout << "===== CIKARMA =====" << endl << endl;
					cout << "Sadece 2 veya 3 Sayi Ile Islem Yapabilirsiniz ! ! " << endl;
				}
				cout << "Devam Etmek Istiyor Musunuz (E-e / H-h) :";
				cin >> devam2;
			} while (devam2 == 'e' || devam2 == 'E');
			break;
		}
		case '7':
		{
			do
			{
				system("cls");
				cout << "===== CARPMA =====" << endl << endl;
				cout << "Kac Sayi Ile Islem Yapmak Istiyorsunuz (2 veya 3 ) : ";
				cin >> sayibelirleme;
				if (sayibelirleme == 2)
				{
					system("cls");
					cout << "===== CARPMA =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem2.setReachingNumber1(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem2.setReachingNumber2(sayi2);
					cout << Islem2.getReachingNumber1() << "*" << Islem2.getReachingNumber2() << " = " << Islem2.Carp(sayi1, sayi2) << endl;

				}
				if (sayibelirleme == 3)
				{
					system("cls");
					cout << "===== CARPMA =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem2.setReachingNumber1(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem2.setReachingNumber2(sayi2);
					cout << "3.Sayiyi Giriniz :";
					cin >> sayi3;
					Islem2.setReachingNumber3(sayi3);
					cout << Islem2.getReachingNumber1() << "*" << Islem2.getReachingNumber2() << "*" << Islem2.getReachingNumber3() << " = " << Islem2.Carp(sayi1, sayi2, sayi3) << endl;
				}
				else if (sayibelirleme != 2 && sayibelirleme != 3)
				{
					system("cls");
					cout << "===== CARPMA =====" << endl << endl;
					cout << "Sadece 2 veya 3 Sayi Ile Islem Yapabilirsiniz ! ! " << endl;
				}
				cout << "Devam Etmek Istiyor Musunuz (E-e / H-h) :";
				cin >> devam2;
			} while (devam2 == 'e' || devam2 == 'E');
			break;
		}
		case '8':
		{
			do
			{
				system("cls");
				cout << "===== BOLME =====" << endl << endl;
				cout << "Kac Sayi Ile Islem Yapmak Istiyorsunuz (2 veya 3 ) : ";
				cin >> sayibelirleme;
				if (sayibelirleme == 2)
				{
					system("cls");
					cout << "===== BOLME =====" << endl << endl;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem2.setReachingNumber1(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem2.setReachingNumber2(sayi2);
					if (sayi1 > sayi2)
					{
						cout << Islem2.getReachingNumber1() << "/" << Islem2.getReachingNumber2() << " = " << Islem2.Bol(sayi1, sayi2) << endl;
					}
					else
					{
						cout << "Ilk Deger Her Zaman En Buyuk Olmalidir !!" << endl;
						cout << "Tekrar Deger Giriniz" << endl;
						while (sayi1 < sayi2)
						{
							cout << "1.Sayiyi Giriniz :";
							cin >> sayi1;
							Islem2.setReachingNumber1(sayi1);
							cout << "2.Sayiyi Giriniz :";
							cin >> sayi2;
							Islem2.setReachingNumber2(sayi2);
							cout << Islem2.getReachingNumber1() << "/" << Islem2.getReachingNumber2() << " = " << Islem2.Bol(sayi1, sayi2) << endl;
						}
					}
				}
				if (sayibelirleme == 3)
				{
					system("cls");
					cout << "===== BOLME =====" << endl << endl;
					int sonuc;
					cout << "1.Sayiyi Giriniz :";
					cin >> sayi1;
					Islem2.setReachingNumber1(sayi1);
					cout << "2.Sayiyi Giriniz :";
					cin >> sayi2;
					Islem2.setReachingNumber2(sayi2);
					if (sayi1 > sayi2)
					{
						sonuc = Islem2.Bol(sayi1, sayi2);
						cout << Islem2.getReachingNumber1() << "/" << Islem2.getReachingNumber2() << " = " << sonuc << endl;
					}
					else
					{
						cout << "Ilk Deger Her Zaman En Buyuk Olmalidir !!" << endl;
						cout << "Tekrar Deger Giriniz" << endl;
						while (sayi1 < sayi2)
						{
							cout << "1.Sayiyi Giriniz :";
							cin >> sayi1;
							Islem2.setReachingNumber1(sayi1);
							cout << "2.Sayiyi Giriniz :";
							cin >> sayi2;
							Islem2.setReachingNumber2(sayi2);
							sonuc = Islem2.Bol(sayi1, sayi2);
							cout << Islem2.getReachingNumber1() << "/" << Islem2.getReachingNumber2() << " = " << sonuc << endl;
						}
					}
					cout << "3.Sayiyi Giriniz :";
					cin >> sayi3;
					Islem2.setReachingNumber3(sayi3);
					if (sonuc > sayi3)
					{
						cout << Islem2.getReachingNumber1() << "/" << Islem2.getReachingNumber2() << "/" << Islem2.getReachingNumber3() << " = " << Islem2.Bol(sayi1, sayi2, sayi3) << endl;
					}
					else
					{
						cout << "Girilen Deger Her Zaman " << sonuc << " 'den Kucuk Olmalidir !!" << endl;
						cout << "Tekrar Deger Giriniz" << endl;
						while (sonuc < sayi3)
						{
							cout << "3.Sayiyi Giriniz :";
							cin >> sayi3;
							Islem2.setReachingNumber3(sayi3);
							cout << sonuc << "/" << Islem2.getReachingNumber3() << " = " << Islem2.Bol(sayi1, sayi2, sayi3) << endl;
						}
					}
				}
				else if (sayibelirleme != 2 && sayibelirleme != 3)
				{
					system("cls");
					cout << "===== BOLME =====" << endl << endl;
					cout << "Sadece 2 veya 3 Sayi Ile Islem Yapabilirsiniz ! ! " << endl;
				}
				cout << "Devam Etmek Istiyor Musunuz (E-e / H-h) :";
				cin >> devam2;
			} while (devam2 == 'e' || devam2 == 'E');
			break;
		}
		default:
			cout << "Yanlis Tuslama Yaptiniz !!!" << endl;
			break;
		}
	}
}menu;

int main()
{
	char devam;
	do
	{
		menu.anaMenü();
		cout << "Ana Menuye Donmek Istiyor Musunuz (E-e / H-h) :";
		cin >> devam;
	} while (devam == 'e' || devam == 'E');
	return 0;
}
