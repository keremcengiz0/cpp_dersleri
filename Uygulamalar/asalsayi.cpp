#include <iostream>
using namespace std;

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
    cout << "ozyineli fonksiyonlar- asal sayilar" << endl;
    int c = 0; //bir parametre atadık ve aşağıda 20 ye kadar devam etmesini sağladık
    for (int i=2; c<20; i++) {
        if (asalmi(i)) {
            cout << i << endl;
            c++;
            }
        }
}
