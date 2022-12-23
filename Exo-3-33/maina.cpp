#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <ctime>
using namespace std;

int main() {

   const unsigned
      NB_PORTES = 3,
      NB_EXPERIENCES = 1'000'000; // (C++14)
      
   unsigned
      porte_voiture, // no de la porte derrière laquelle se cache la voiture
      porte_joueur;  // no de la porte choisie initialement par le joueur

   srand((unsigned)time(NULL));
   
   // On part du principe que le joueur maintient toujours son choix initial
   // et l'on comptabilise combien de fois il gagne
   unsigned compteur = 0;          
      
   for (unsigned i = 1; i <= NB_EXPERIENCES; ++i) {      
      porte_voiture = (unsigned) rand() % NB_PORTES + 1;
      porte_joueur  = (unsigned) rand() % NB_PORTES + 1;
      compteur += porte_voiture == porte_joueur;
   }

   cout << fixed << setprecision(3)
        << "Probabilite de succes si maintien du choix initial   : "
        << (double) compteur / NB_EXPERIENCES << endl
        << "Probabilite de succes si changement du choix initial : "
        << (double) (NB_EXPERIENCES - compteur) / NB_EXPERIENCES << endl;
          
   return EXIT_SUCCESS;
}

// Probabilite de succes si maintien du choix initial   : 0.333
// Probabilite de succes si changement du choix initial : 0.667