#include <iostream>
using namespace std;

int main()
{
    cout << "diziler - ornekler" << endl;
    
    int a[3]= {1,2,3};
    int b[10]= {6,7,1,2,3,8,9,4,11,30};
    
    int aboyut=3;
    int bboyut=10;
    
    for(int i=0; i<bboyut; i++) {
        bool esit=true;
        for (int j=0; j<aboyut; j++) {
            if (a[j] != b[i+j]) { 
/* b[i+j] dememizin sebebi sayıları kontrol ederken 0. değilse 1'e, 1. değilse 2'ye
ve bu şekilde devamını da kontrol etmesini istememizdir. */ 
                
                esit=false; //eğer eşit değilse yanlış olarak döndür ve
                break; // eğer eşit değilse döngüyü kır
                
                }
            }
    if(esit) {
        cout << "alt dizisidir ve " << i << " 'den baslar" << endl;
        }
        }
        }
        