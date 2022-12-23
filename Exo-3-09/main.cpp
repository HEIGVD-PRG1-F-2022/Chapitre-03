#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

   int n1, n2, n3;
   
   cout << "Entrez 3 entiers : ";
   cin >> n1 >> n2 >> n3;
   
   { // Variante 1
      int min = n1;
      
      if (n2 < min) {
         min = n2; 
      }   
   
      if (n3 < min) {
         min = n3; 
      }
      
      cout << "La plus petite valeur est " << min << endl;   
   }   
   
   { // Variante 2
      int min = n1 < n2 ? n1 : n2;
      min = n3 < min ? n3 : min;      
      cout << "La plus petite valeur est " << min << endl;   
   }   

   { // Variante 3
      int min = n1 < n2 ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);      
      cout << "La plus petite valeur est " << min << endl;   
   }   

   return EXIT_SUCCESS;
}
