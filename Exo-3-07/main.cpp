#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

   int i, j, k;
   bool reponse, reponse2;

   cout << "Entrez i, j et k : ";
   cin >> i >> j >> k;
   
   if (j == 0) {
      reponse = true;
   } else {
      if (i / j < k) {
         reponse = false;
      } else {
         reponse = true;
      }
   }

   reponse2 = !j || i/j >= k; // càd reponse2 = (j == 0) or (i / j >= k);

   cout << boolalpha << reponse << " " << reponse2 << endl;

   return EXIT_SUCCESS;
}

// A tester avec
// 1. 8 0 1
// 2. 8 2 3
// 3. 8 2 4
// 4. 8 2 5
