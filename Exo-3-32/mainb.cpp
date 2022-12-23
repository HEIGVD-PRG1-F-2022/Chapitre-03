#include <chrono>
#include <cstdlib>
#include <functional>
#include <iomanip>
#include <iostream>
#include <random>
using namespace std;
// using namespace chrono;

int main() {
   
   const unsigned NB_TIRS = 100000;
   
   double x, y,          // Coordonnées aléatoires du point d'impact
          estimation_pi; // Rappel : pi = 3.14159...

   unsigned nb_succes = 0; // Nb de fléchettes tirées et telles que leur point
                           // d'impact se trouve dans ou sur le bord du cercle
   
   // Obtenir une racine à partir de l'heure du système
   auto racine = chrono::system_clock::now().time_since_epoch().count();
          
   uniform_real_distribution<double> distribution(-1.0,1.0);
   auto tirage_aleatoire = bind(distribution, default_random_engine(racine));
      
   for (unsigned i = 1; i <= NB_TIRS; i++) {   
      x = tirage_aleatoire();
      y = tirage_aleatoire();
      if (x * x + y * y <= 1) { // tir dans le cercle
         nb_succes++;
      }
   }

   estimation_pi = 4.0 * nb_succes / NB_TIRS;
   
   cout << fixed << setprecision(2)
        << "Estimation de pi : " << estimation_pi << endl;

   return EXIT_SUCCESS;
}
