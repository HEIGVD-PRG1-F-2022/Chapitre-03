#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

   double tauxInteretAnnuel; // en %

   cout << "Entrez le taux d'interet annuel en % > ";
   cin >> tauxInteretAnnuel;

   const unsigned NB_ANNEES = 
      (unsigned) ceil(log10(2) / log10(1 + tauxInteretAnnuel / 100));
   // ou (log désignant le logarithme naturel) :
   // const unsigned NB_ANNEES =
   //    (unsigned) ceil(log(2) / log(1 + tauxInteretAnnuel / 100));
         
   cout << "Le montant aura double apres " 
        << NB_ANNEES << " an" << (NB_ANNEES > 1 ? "s" : "") << "." << endl;
   
   return EXIT_SUCCESS;
}
