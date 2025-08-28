#include <cstdint>
#include <string>
#include <vector>

class Person {
public:
  std::string HairColor;
  std::string HairLenght;
  std::string EyeColor;
  std::string Eating;
  std::vector<std::string> com;

  int moyenClasse;
  int moyenSansClasse;

  Person();
  void setCommunication();
  bool checkIfComAlreadyUsed(std::string incom);
  bool checkIsNaturalColor();
  bool checkIfUseFaxe();
};

class Heart {
public:
  Person person;
  std::pair<std::string, std::string> bruit;
  std::pair<std::string, std::string> code;
  std::string reponseCommu;
  uint8_t carrosserieHexa = 0x00;
  std::string diagramVenn;

  Heart();
  void setProbTelevision();
  void setBruit();
  void setProbCompa();
  void setProbCommu();
  bool com4option2();
  bool com1option1();
  friend std::ostream &operator<<(std::ostream &os, const Heart &heart);
};
