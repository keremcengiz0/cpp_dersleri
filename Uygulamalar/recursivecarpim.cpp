#include <iostream>
#include <math.h>
using namespace std;

//öz yineli fonksiyonlar ile yazılan
int recursive (int a,int b) {
    if (b==0||a==0) 
        return 0;
    if (b<0) 
        return recursive(0-a,0-b);
    return a + recursive(a,b-1);
    }
    
// döngüler ile yazılan
int carpim (int a, int b) {
    int sonuc;
    for (int i=0;i<b;i++) {
        
        sonuc=sonuc + a;
        
        }
    return sonuc;
    }


int main()
{
    cout << "oz yineli carpim fonksiyonu" << endl;
    cout << carpim(3,4) << endl;
    cout << recursive(3,4) << endl;
    cout << recursive(-5,-3) << endl;
    cout << recursive(5,-3) << endl;
    }