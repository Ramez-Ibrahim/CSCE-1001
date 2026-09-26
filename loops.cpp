#include <iostream>
using namespace std;

int main() {
    for (int lines = 0; lines < 8; lines++) {
    if (lines % 2 != 0) {
        for (int number = 0;  number < lines; number++) {
          cout << number + 1;
        }
        cout << endl;                                               
     }         
     else {
          for (int dollar = 0; dollar < lines; dollar++) {
            cout << "$";                        
           }
           cout << endl;                     
      }                             
    }  
    return 0;
}