#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

   double montantInitial,
          tauxInteretAnnuel; // en %

   cout << "Entrez le montant initial > ";
   cin >> montantInitial;
   
   cout << "Entrez le taux d'interet annuel en % > ";
   cin >> tauxInteretAnnuel;
         
   double montantCourant = montantInitial;   

   const double MONTANT_CIBLE = 2 * montantInitial;   

   unsigned nbAnnees = 0;   

   // NB  while et non pas do while car la condition peut être d'emblée fausse
   // (cas si montantInitial = 0)
   while (montantCourant < MONTANT_CIBLE) {
      nbAnnees++;
      montantCourant = montantCourant * (1 + tauxInteretAnnuel / 100);
   }
   
   cout << "Le montant aura double apres " 
        << nbAnnees << " an" << (nbAnnees > 1 ? "s" : "") << "." << endl;
   
   return EXIT_SUCCESS;
}

