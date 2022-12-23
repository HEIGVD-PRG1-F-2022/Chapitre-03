#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

const double g = 9.81; // constante de gravité terrestre

int main() {

   int n;         // nombre de rebonds à simuler 
   double eps,    // coefficient de rebond de la balle
          h0, h1, // hauteur avant et après le rebond [m]
          v0, v1; // vitesse avant et après le rebond [m/s]
   
   // Saisie des valeurs avec test de validité partiel
   do {   
      cout << "Coefficient de rebond (0 <= coeff < 1) : ";
      cin >> eps;
   } while (eps < 0.0 || eps >= 1.0);
   
   do {   
      cout << "Hauteur initiale [m]  (h0 >= 0)        : ";
      cin >> h0;
   } while (h0 < 0.0);

   do {   
      cout << "Nombre de rebonds     (n >= 0)         : ";
      cin >> n;
   } while (n < 0);
   
   // Calculs proprement dits
   // Chaque itération correspond à un rebond
   for (int rebonds = 1; rebonds <= n; ++rebonds) {
      v0 = sqrt(2 * g * h0);    // vitesse avant rebond
      v1 = eps * v0;            // vitesse après rebond
      h1 = (v1 * v1) / (2 * g); // hauteur après rebond
      h0 = h1;                  // ... qui devient la nlle hauteur
                                // avant rebond suivant
   }
   
   // Affichage du résultat
   cout << fixed << setprecision(2)
        << "La hauteur atteinte apres " << n
        << " rebond" << (n > 1 ? "s = " : " = ") << h0 << " [m]" << endl;
                   
   return EXIT_SUCCESS;
}

// Coefficient de rebond (0 <= coeff < 1) : 0.9
// Hauteur initiale [m]  (h0 >= 0)        : 100
// Nombre de rebonds     (n >= 0)         : 10
// La hauteur atteinte apres 10 rebonds = 12.16 [m]
