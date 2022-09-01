#include <iostream>
using namespace std;


int main()
{
    cout << "diziler- ornekler" << endl;
    
    int a[5];
    for (int i=0;i<5;i++) 
        {
        cin>> a[i]; //kullanıcıdan alıyoruz değerleri
        }
    
    int eb=a[0];
    for (int i=1; i<5;i++)
        {
        if (eb < a[i]) //eğer başka bir sayı en büyükse yerine onu ata
            {
            eb=a[i];
            }
        }
    cout << "en buyuk:" << eb << endl;
    
    
    int ek=a[0];
    for (int i=1; i<5;i++)
        {
        if (ek > a[i]) //eğer başka bir sayı en küçükse yerine onu ata
            {
            ek=a[i];
            }
        }
    cout << "en kucuk:" << ek << endl;
    
    int toplam=0;
    for (int i=0; i<5;i++)
        {
        toplam= toplam+a[i]; //sayıların toplanması
        }
    cout << "Toplam:" << toplam << endl;
    cout << "Ortalama:" << toplam/5 << endl;
}
