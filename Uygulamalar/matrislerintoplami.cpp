#include <iostream>
using namespace std;

int main()
{
    cout << "matrislerin toplami" << endl;
    
    int a[3][4]= {0,1,2,9,8,7,6,5,3,5,1,2};
    int b[3][4]= {6,5,4,3,4,5,9,7,2,4,7,1};  
    int c[3][4]; // toplamını yapması için
    
    for (int i=0;i<3;i++) {
        for (int j=0;j<4;j++) {
            
            c[i][j]= a[i][j] + b[i][j]; // a[i][j] += b[i][j]
        }
        }
    
     for (int i=0;i<3;i++) {
        for (int j=0;j<4;j++) {
            
            cout << "  " << c[i][j];
        }
        cout << endl;
        }
   
    return 0;
}
