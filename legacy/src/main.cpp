#include "class.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <vector>

int main() {
  int nombredeVaisseau = 100;
  std::cout << "TEST" << std::endl;

  std::vector<Heart> listeVaisseau;
  std::fstream fichier("couple.txt", std::ios::out);

  if (!fichier.is_open()) {
    std::cerr << "Erreur : impossible d’ouvrir le fichier couple.txt\n";
    return 1;
  }

  srand(time(0));
  for (int i = 0; i < nombredeVaisseau; i++) {
    Heart vaisseau;
    fichier << "Vaisseau " << i + 1 << std::endl;
    fichier << vaisseau << std::endl << std::endl;
  }
  return 0;
}
