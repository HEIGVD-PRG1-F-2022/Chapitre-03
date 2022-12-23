#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

   const unsigned NB_NOTES = 4;
   
   double n1, n2, n3, n4;
       
   // Saisie des notes
   cout << "Entrez " << NB_NOTES << " notes : ";
   cin >> n1 >> n2 >> n3 >> n4;
   
   // Calcul de la moyenne
   double moyenne = (n1 + n2 + n3 + n4) / NB_NOTES;
   
   // Affichage de la moyenne
   cout << fixed << setprecision(1) // ou cout << setprecision(2)
        << "Moyenne = " << moyenne << " - ";
   
   // et de l'évaluation correspondante à cette moyenne
   if (moyenne > 5.5) {
      cout << "Excellent";
   } else if (moyenne > 5) {
      cout << "Tres bien";   
   } else if (moyenne > 4.5) {
      cout << "Bien";
   } else if (moyenne >= 4) {
      cout << "Moyen";
   } else {
      cout << "Insuffisant";
   }

   // Autre formulation possible
//    if (moyenne < 4) {
//       cout << "Insuffisant";
//    } else if (moyenne <= 4.5) {
//       cout << "Moyen";   
//    } else if (moyenne <= 5) {
//       cout << "Bien";
//    } else if (moyenne <= 5.5) {
//       cout << "Tres bien";
//    } else {
//       cout << "Excellent";
//    }
   
   cout << endl;

   return EXIT_SUCCESS;
}
