// variante 1
// #include <cstdlib>
// #include <iostream>
// using namespace std;
// 
// int main() {
// 
//    unsigned noMois;
//    
//    cout << "Entrez un no de mois (1-12) : ";
//    cin >> noMois;
//    
//    cout << "Ce mois comporte "
//         << ( noMois == 2 ? "28 ou 29" :
//              noMois == 4 || 
//              noMois == 6 || 
//              noMois == 9 || 
//              noMois == 11 ? "30" : "31"
//            )
//         << " jours." << endl;     
//    
//    return EXIT_SUCCESS;
// }

// variante 2
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

   unsigned noMois;
   
   cout << "Entrez un no de mois (1-12) : ";
   cin >> noMois;
   
   cout << "Ce mois comporte "
        << ( noMois == 2 ? "28 ou 29" :
             (noMois <= 6 && noMois % 2 == 0) || 
             (noMois >= 9 && noMois % 2 != 0) ? "30" : "31"
           )
        << " jours." << endl;     

   return EXIT_SUCCESS;
}
