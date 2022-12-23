#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

   unsigned n;
       
   cout << "Entrez un entier >= 0 : ";
   cin >> n;
   
   cout << n;

   if (n % 3 == 0 && n % 5 == 0) { // ou if (n % 15 == 0) {
      cout << " est un multiple de 3 et de 5";
   } else if (n % 3 == 0) {
      cout << " est un multiple de 3";
   } else if (n % 5 == 0) {
      cout << " est un multiple de 5";
   } else {
      cout << " n'est ni un multiple de 3 ni un multiple de 5";
   }
   
   cout << endl;

   return EXIT_SUCCESS;
}
