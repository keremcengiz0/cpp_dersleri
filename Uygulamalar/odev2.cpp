#include <iostream>

using namespace std;

int main()
{

int a,sayi1,sayi2;
cout<<"Bir sayi giriniz:";
cin>>a;
cout<<"Girdiginiz sayi:"<<a<<endl;

cout<<"1.Sayiyi giriniz:";
cin>>sayi1;
cout<<"2.Sayiyi giriniz:";
cin>>sayi2;

cout<<"Toplam:"<<sayi1+sayi2<<endl;
cout<<"Fark:"<<sayi1-sayi2<<endl;
cout<<"Carpim:"<<sayi1*sayi2<<endl;
cout<<"Bolum:"<<float(sayi1/sayi2)<<endl;
cout<<"Kalan:"<<sayi1%sayi2<<endl;

}