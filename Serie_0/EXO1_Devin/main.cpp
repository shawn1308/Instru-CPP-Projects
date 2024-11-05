#include <iostream>
using namespace std;

int main(){

  int Min = 0;
  int Max = 100;
  srand((unsigned)time(NULL)); // Pour initialiser le germe
  int nombreAleatoire = Min + (int)(rand() % ((Max - Min) + 1));
  cout << "Nombre a trouver : " << nombreAleatoire << endl;

  int n;
  int i = 0;
  while (i < 6) {
    cout << "Entrer une valeur : ";
    cin >> n;
    if (!cin.good()) {
      cout << "On a dit un entier idiot !" << endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }

    if (nombreAleatoire == n) {
      cout << "Felicitation T'as Trouve" << endl;
      break;
    }
    else if (nombreAleatoire < n)
    {
      if (i == 5) {
        cout << "Fini le jeu" << endl;
        cout << "Nombre a trouver : " << nombreAleatoire << endl;
      }
      cout << "Inferieur" << endl;
    }
    else if (nombreAleatoire > n){
      if (i == 5) {
        cout << "Fini le jeu" << endl;
        cout << "Nombre a trouver : " << nombreAleatoire << endl;
      }
      cout << "Superieur" << endl; 
    }
    i++;
  }
  return 0;
}