#include <iostream>
#include <ctime>
#include <stdlib.h> 

using namespace std;
int main()
{
    cout << "diziler - ornekler" << endl;
    cout << "lutfen kac zar atilacagini giriniz!!!" << endl;
    int n;
    cin >> n; //kullanıcıdan kaç zar atılacağını girmesini istiyoruz.
    
    srand(time(NULL));
    int skor=0; // sonucu belirlemek için bir değişken atıyoruz
    int a[n]; 
    int b[n]; //zar değerlerinin tutlması için
    for (int i=0; i<n; i++) {
        
        int z1 = rand()%6+1; //birinci kullanıcının zarlari
        int z2 = rand()%6+1; //ikinci kullanıcının zarlari
        
        a[i]= z1; //her atanan değeri hafızada tutabilmek için
        b[i]= z2;
        
    //skorun artıtılması-azaltılması için
        if (z1>z2){
            skor++;
            }
        else if (z2>z1) {
            skor--;
            }
        }
    //atılan zar değerlerinin ekranda bastırılması için
    for (int i=0; i<n;i++) {
        cout << a[i] << "  " ;
        }
        cout << endl;
    for (int i=0; i<n;i++) {
        cout << b[i] << "  " ;
        }
        cout << endl;
        //skorun belirlenebilmesi için
    if (skor>0) {
        cout << "birinci kullanici kazanmistir" << endl;
        }
        else if (skor<0){
        cout << "ikinci kullanici kazanmistir" << endl;
            }
    else {
        cout << "oyun beraberedir" << endl;
        }
}
