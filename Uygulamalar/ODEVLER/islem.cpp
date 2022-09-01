#include <iostream>

using namespace std;

int main()
{
    int sayi1,sayi2;
    char islem_tipi;
    cout << "Birinci sayiyi girin: ";
    cin>>sayi1;
    cout << "Ikinci sayiyi girin: ";
    cin>>sayi2;
    cout << "Yapmak istediginiz islemi girin(+,-,*,/): ";
    cin>>islem_tipi;
     
    switch (islem_tipi) {
        case '+': cout <<"Sonuc: "<<sayi1+sayi2<<endl;
        break;
        case '-': cout <<"Sonuc: "<<sayi1-sayi2<<endl;
        break;
        case '*': cout <<"Sonuc: "<<sayi1*sayi2<<endl;
        break;
        case '/':
            if (sayi2==0)
                cout<<"Sayi sifira bolunemez";
            else
                cout <<"Sonuc: "<<sayi1/sayi2<<endl;
        break;
    }

return 0;
}
