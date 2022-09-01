#include <iostream>
using namespace std;

int main()
{
    cout << "diziler - ornekler" << endl;
    
    int a[7] ={4,5,8,18,41,3,6};
    
    //ilk olarak en büyük bütün sayıları, dizinin ilk elemanı olarak atadık
    //daha sonra karşılaştırıken hafızada tutulan sayılar ile yer değiştirecektir.
    
    int eb1= a[0]; 
    int eb2= a[0];
    int eb3= a[0];
    
    for (int i=1; i<6;i++) 
        {
        if (eb1< a[i]) //eğer dizideki diğer sayılar 1.hafızada tutalandan büyükse
        {
        eb3=eb2;
        eb2=eb1;
        eb1= a[i]; //hafızada tutalan 1.sayı ile yer değiştir.
        }
        else if (eb2< a[i]) //eğer dizideki diğer sayılar 2.hafızada tutalandan büyükse
        {
        eb3=eb2;
        eb2=a[i]; //hafızada tutalan 2.sayı ile yer değiştir.
        }
        else if (eb3< a[i])  //eğer dizideki diğer sayılar 3.hafızada tutalandan büyükse
        {
        eb3=a[i]; //hafızada tutalan 2.sayı ile yer değiştir.
        }
        }
        cout << "en buyuk sayilar:" << eb1 << ", " << eb2 << ", " << eb3 << endl;
        
        cout << "en buyuk sayilarin toplami:" << eb1+eb2+eb3 << endl;
        }
