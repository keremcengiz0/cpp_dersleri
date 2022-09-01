#include <iostream>
#include <math.h>
using namespace std;

//mersanne sayılarının örnek kodları

int ust (int t, int u) // t = taban , u = ussu
{
int sonuc =1;
for (int i=1; i<=u; i++) {
       sonuc = sonuc * t ; // t^u = t*t*t*t*... (u tane)
}
return sonuc; 
}

//asal sayılarının örnek kodları

bool asalmi (int x) 
    {
    for (int i=2; i<x; i++) 
    {
    if (x%i==0) /*eğer 2 (ve artan değerler) değerlerine bölündüğünde 
     * kalıyorsa false (yanlış-asal değil) 
     * olarak ata diyoruz. */
        {
        return false;
        }    
    }
    return true; //diğer durumlarda asal sayı olduğu için true (doğru) döndürüyoruz.
    }

int main()
{
    cout << "diziler - asal mersanne" << endl;
    
    int c=0; // kontrol değişkeni olarak atanmıştır, içinde asal mersanne sayılarını tutacaktır
    for (double i=2;  c<20; i++) {
        if (asalmi(ust(2,i)-1)) {
            
            cout << ust(2,i)-1 << endl;
            c++;
            }
        }
    return 0;
}

/* n. asal sayıyı veren örnek kodlarımızın fonksiyonu
int asal (int x) {
 * int c=0;
 * double i;
 * for(i=2; c<x;i++) {
 * if (asalmı(i)){
 * c++;
 * }
 * }
 * return i-1; //i++ olduğu için, i dersek asal sayının 1 fazlasını basıyor
 * }
 * int main () {
 *  cout << asal(5) << endl;
 * } */