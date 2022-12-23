// Variante 1

// #include <cstdlib>
// #include <iostream>
// using namespace std;
// 
// int main() {
// 
//    int n1, n2, n3;
//    int tmp; 
//        
//    cout << "Entrez 3 entiers : ";
//    cin >> n1 >> n2 >> n3;
//          
//    if (n1 > n2) {
//       tmp = n1;
//       n1 = n2;
//       n2 = tmp;
//    }
// 
//    if (n1 > n3) {
//       tmp = n1;
//       n1 = n3;
//       n3 = tmp;
//    }
// 
//    if (n2 > n3) {
//       tmp = n2;
//       n2 = n3;
//       n3 = tmp;
//    }
// 
//    cout << "Les 3 entiers tries par ordre croissant : "
//         << n1 << " " << n2 << " " << n3 << endl;   
// 
//    return EXIT_SUCCESS;
// }


// Variante 2 (plus efficace)

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

   int n1, n2, n3;
   int tmp; 
       
   cout << "Entrez 3 entiers : ";
   cin >> n1 >> n2 >> n3;
         
   if (n1 > n2) {
      tmp = n1;
      n1 = n2;
      n2 = tmp;
   }
   
   if (n2 > n3) {
      tmp = n2;
      n2 = n3;
      n3 = tmp;
      if (n1 > n2) {
         tmp = n1;
         n1 = n2;
         n2 = tmp;
      }
   }

   cout << "Les 3 entiers tries par ordre croissant : "
        << n1 << " " << n2 << " " << n3 << endl;   

   return EXIT_SUCCESS;
}
