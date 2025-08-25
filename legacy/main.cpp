#include "class.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void ecrireDansTxt(fstream &fichier, int i) {
  Vaisseau vaisseau;
  fichier << "Vaisseau " << i + 1 << endl;
  fichier << vaisseau << endl << endl;
}

int main() {
  int nombredeVaisseau = 100;

  vector<Vaisseau> listeVaisseau;
  fstream fichier("ListeVaisseau.txt");
  cout << "TEST";
  srand(time(0));
  for (int i = 0; i < nombredeVaisseau; i++) {
    Vaisseau vaisseau;
    ecrireDansTxt(fichier, i);
  }
  return 0;
}
