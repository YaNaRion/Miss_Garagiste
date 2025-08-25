#include <cstdint>
#include <string>
#include <vector>
using namespace std;

class Moteur {
public:
  int nombreMoteur;
  vector<string> typeMoteur;
  Moteur();
};

class Vaisseau {
public:
  int matricule;
  int anneeFabrication;
  Moteur moteur;
  string fabriquant;
  pair<string, string> bruit;
  bool estApprove = false;
  /*
  bool AmoteurBateau = false;
  bool nombrePairMoteur = false;
  bool dateHorsInterval = false;
  */
  pair<string, string> code;
  string reponseTransmission;
  uint8_t carrosserieHexa = 0x00;
  string carrosseriePair;
  Vaisseau();
  void setFabriquant();
  void setBruit();
  void setCode();
  void setMatricule();
  void setAnneeFab();
  void setMoteur();
  void setCarrosserie();
  void setReponseTrans();
  friend ostream &operator<<(ostream &os, const Vaisseau &vaisseau);
};
