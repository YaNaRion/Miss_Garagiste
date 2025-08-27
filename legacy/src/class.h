#include <cstdint>
#include <string>
#include <vector>

class Moteur {
public:
  int nombreMoteur;
  std::vector<std::string> typeMoteur;
  Moteur();
};

class Vaisseau {
public:
  int matricule;
  int anneeFabrication;
  Moteur moteur;
  std::string fabriquant;
  std::pair<std::string, std::string> bruit;
  bool estApprove = false;
  std::pair<std::string, std::string> code;
  std::string reponseTransmission;
  uint8_t carrosserieHexa = 0x00;
  std::string carrosseriePair;

  Vaisseau();
  void setFabriquant();
  void setBruit();
  void setCode();
  void setMatricule();
  void setAnneeFab();
  void setMoteur();
  void setCarrosserie();
  void setReponseTrans();
  friend std::ostream &operator<<(std::ostream &os, const Vaisseau &vaisseau);
};
