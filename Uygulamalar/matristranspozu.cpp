#include <iostream>
using namespace std;


int main()
{
    cout << "matris transpozunu alma" << endl;
    
    int a[3][3]= {5,4,3,4,0,4,7,10,3};
    
    //orjinal matrisin ekrana basılması için
    for(int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            
            cout << " " << a[i][j];
            }
        cout << endl;
        }
    
    //transpozun yapıldığı iç içe for döngüsü
    
     // int b[3][3];
     for(int i=0;i<3;i++) {
        for (int j=i+1;j<3;j++) {
            int g= a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=g;
            }
        }
    cout << endl;//iki matris arasında boşluk olmasını sağlamak için
    cout << endl;
    cout << endl;
    
    //transpozu alınmış matrisin basılmasını sağlıyoruz
    
      for(int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            
            cout << " " << a[i][j];
            }
        cout << endl;
        }
   
    return 0;
}
