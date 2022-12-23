#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
   
   const unsigned NB_TIRS = 100000;
   
   double r,             // Nombre aléatoire dans [0; 1]
          x, y,          // Coordonnées aléatoires du point d'impact
          estimation_pi; // Rappel : pi = 3.14159...

   unsigned nb_succes = 0; // Nb de fléchettes tirées et telles que leur point
                           // d'impact se trouve dans ou sur le bord du cercle
   
   // Initialisation du générateur aléatoire       
   srand((unsigned)time(NULL));    
   
   for (unsigned i = 1; i <= NB_TIRS; i++) {   
      r = rand() * 1.0 / RAND_MAX; // entre 0 et 1 (ou (double) rand() / RAND_MAX)
      r = (double) rand() / RAND_MAX; // entre 0 et 1
      x = -1 + 2 * r;              // entre –1 et 1
      r = rand() * 1.0 / RAND_MAX;
      y = -1 + 2 * r;
      if (x * x + y * y <= 1) { // tir dans le cercle
         nb_succes++;
      }
   }

   estimation_pi = 4.0 * nb_succes / NB_TIRS;
   
   cout << fixed << setprecision(2)
        << "Estimation de pi : " << estimation_pi << endl;

   return EXIT_SUCCESS;
}
