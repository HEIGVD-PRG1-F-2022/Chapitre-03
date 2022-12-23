#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

   const int N = 5;

   int compteur = 0;
   
   for (int i = 0; i < N; ++i) {
      for (int j = i; j < N; ++j) {
         compteur++;
      }   
   }
   cout << "compteur = " << compteur << endl;
 
   compteur = 0;
   for (int i = 1; i <= N; ++i) {
      compteur = compteur + i;
   }
   cout << "compteur = " << compteur << endl;
   
   cout << "compteur = " << N * (N + 1) / 2 << endl;
      
   return EXIT_SUCCESS;
}
