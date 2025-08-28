#include "class.h"
#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using std::make_pair;
using std::map;
using std::pair;
using std::string;
using std::vector;

const string Vegan = "Végan";
const string Vege = "Végétarien";
const string PescaPescaTerrein = "Pescapescatarien";
const string Omnivor = "Omnivor";
const string Carnivor = "Carnivor";

const string ROUGE = "Rouge";
const string BLEU = "Bleu";
const string VERT = "Vert";
const string JAUNE = "Jaune";
const string ORANGE = "Orange";
const string VIOLET = "Violet";
const string ROSE = "Rose";
const string MARRON = "Marron";
const string NOIR = "Noir";
const string BLANC = "Blanc";

const string Long = "Long";
const string Court = "Court";
const string Raser = "Raser";
const string Mullet = "Mullet";

const string FACEBOOK = "FACEBOOK";
const string INSTAGRAM = "INSTAGRAM";
const string FAXE = "FAXE";
const string LETTRE = "Lettre";
const string MSN = "MSN";
const string SNAPCHAT = "SnapChat";
const string CODEMORSE = "Code Morse";
const string DISCORD = "Discord";
const string SLACK = "SLACK";
const string TEAM = "TEAM";
const string COURRIEL = "Courriel";

vector<string> ListHair = {Long, Court, Raser, Mullet};
vector<string> ListEating = {Vegan, Vege, PescaPescaTerrein, Omnivor, Carnivor};
vector<string> ListColor = {ROUGE,  BLEU, VERT,   JAUNE, ORANGE,
                            VIOLET, ROSE, MARRON, NOIR,  BLANC};
vector<string> ListComm = {FACEBOOK, INSTAGRAM, FAXE,      LETTRE,
                           MSN,      SNAPCHAT,  CODEMORSE, DISCORD,
                           SLACK,    TEAM,      COURRIEL};

bool Person::checkIfComAlreadyUsed(string incom) {
  bool doesExist = false;
  for (string comm1 : com) {
    if (incom == comm1) {
      doesExist = true;
    }
  }
  return doesExist;
}

void Person::setCommunication() {
  int i = 0;
  int maxCom = 3 + rand() % 3;
  while (i < maxCom) {
    string comm = ListComm[rand() % 10];
    if (!checkIfComAlreadyUsed(comm)) {
      com.push_back(comm);
      i++;
    }
  }
}

Person::Person() {
  HairColor = ListColor[rand() % 9];
  EyeColor = ListColor[rand() % 9];
  Eating = ListEating[rand() % 4];
  HairLenght = ListHair[rand() % 3];
  com = vector<string>{};
  setCommunication();
}

void Heart::setBruit() {
  vector<pair<string, string>> ListePairBruit = {
      make_pair("**H!", "Or - Écrou - À l'arc"),
      make_pair("9!9*", "Platine - Tige - Tungstène"),
      make_pair("HH!*", "Silicone - Brut - Plasma"),
      make_pair("!!**", "Acier - Filament - Chalumeau"),
      make_pair("9HH9", "Uranium enrichi - Écrou - Colle chaude"),
      make_pair("H!*9", "Cuivre - Brut - Plasma"),
      make_pair("*H!9", "Cobalt - Filament - À l'arc"),
      make_pair("9!*9", "Aluminium - Tige - À l'arc"),
      make_pair("*H9!", "Fer forgé - Lingot - Colle chaude"),
      make_pair("!H!*", "Fer - Tige - Plasma"),
      make_pair("999*", "Acier - inoxydable - Lingot Chalumeau"),
      make_pair("!*!9", "Argent - Filament - Tungstène")};
  bruit = ListePairBruit[rand() % 11];
}

void Heart::setCode() {
  vector<pair<string, string>> ListePairCode = {
      make_pair("BRUTISA", "Fer - Brut - À l'arc"),
      make_pair("SEVIERN", "Acier Inox - Lingot - Chalumeau"),
      make_pair("TSIEBAT", "Cuivre - Tige - À l'arc"),
      make_pair("FAMFAES", "Acier forgé, Filament, Chalumeau"),

      make_pair("PLESPLA", "Or - Écrou - Chalumeau"),
      make_pair("BVEERDA", "Platine - Lingot - Plasma"),
      make_pair("ROTISAN", "Uranium - Tige - Colle Chaude "),
      make_pair("STSABUA", "Silicone - Brut - Tungstène"),

      make_pair("TLABREA", "Acier - Tige - Plasma"),
      make_pair("VSADUNE", "Cobalt - Brut - Colle Chaude"),
      make_pair("RESVESA", "Aluminium - Tige - Tungstène"),
      make_pair("LSBEALS", "Argent - Écrou - À l'arc"),

      make_pair("MAEPHAM", "Platine - Filament - Tungstène"),
      make_pair("VDARESE", "Cobalt - Écrou - Colle Chaude"),
      make_pair("AAMESPH", "Acier - Brut - Tungstène"),
      make_pair("BUSESTA", "Silicone - Filament - Chalumeau"),

      make_pair("BWZIIZW", "Aluminium - Lingot - Colle Chaude"),
      make_pair("TRISENU", "Uranium - Brut - Plasma"),
      make_pair("BTBASAU", "Argent - Écrou - À l'arc"),
      make_pair("BSARTUU", "Fer - Tige - Plasma"),

      make_pair("LELESAP", "Acier Inox - Lingot - Plasma"),
      make_pair("FREAIAF", "Fer Forgé - Tige - À l'arc"),
      make_pair("FAMESAF", "Cuivre - Brut - Chalumeau"),
      make_pair("LESBELP", "Or - Tige - À l'arc")};
  code = ListePairCode[rand() % 24];
}

// A changer
void Heart::setCarrosserie() {
  map<uint8_t, string> ListePairCode{
      {0x00, "Silicone - Brut - À l'arc"},
      {0x08, "Fer - Écrou - Tungstène"},
      {0x0C, "Cuivre - Tige - Colle Chaude"},
      {0x04, "Aluminium, Lingot, Plasma"},
      {0x0A, "Acier inoxydable - Écrou - À l'arc"},

      {0x0E, "Platine - Filament - Chalumeau"},
      {0x0F, "Argent - Brut - Chalumeau "},
      {0x0D, "Uranium enrichi - Tige - Tungstène"},
      {0x05, "Or - Écrou - Colle Chaude"},
      {0x02, "Cuivre - Tige - Plasma"},

      {0x06, "Acier inoxydable - Lingot - À l'arc"},
      {0x07, "Fer - Filament - Plasma"},
      {0x0B, "Or - Écrou - À l'arc"},
      {0x09, "Fer forgé - Écrou - Colle Chaude"},
      {0x01, "Aluminium - Filament - Tungstène"}, // Changer
      {0x03, "Cobalt - Brut - Plasma"}};
}

bool Heart::com4option2() {
  for (string com : person.com) {
    if (com == SLACK || com == TEAM || com == CODEMORSE) {
      return true;
    }
  }
  return false;
}

void Heart::setReponseTrans() {
  for (string com : person.com) {
    if (com == LETTRE || com == FAXE || com == MSN || com == SNAPCHAT ||
        com == SLACK || com == TEAM) {
      person.moyenClasse++;
    } else {
      person.moyenSansClasse++;
    }
  }

  if (person.com.size() == 3) {
    for (string com : person.com) {
      if (com == INSTAGRAM) {
        reponseTransmission = "Cuivre - Filament - Chalumeau";
        break;
      }
    }
    if (person.HairLenght == Long || person.HairColor == ORANGE ||
        person.HairColor == ROUGE || person.HairColor == NOIR) {
    } else if (person.moyenClasse > person.moyenSansClasse) {
      reponseTransmission = "Or - Lingot - Colle Chaude";
    } else {
      reponseTransmission = "Fer - Tige - Colle Chaude";
    }
  } else if (person.com.size() == 4) {
    if (person.Eating == Vege) {
      reponseTransmission = "Cobalt - Brut - À l'arc";
    } else if (com4option2()) {
      reponseTransmission = "Acier - Soudé - Plasma";
    } else {
      reponseTransmission = "Aluminium - Filaments - Chalumeau";
    }
  } else if (person.com.size() == 5) {
    if ((person.HairColor == BLEU || person.HairColor == ROSE ||
         person.HairColor == BLANC) &&
        person.Eating == PescaPescaTerrein) {
      reponseTransmission = "Uranium Enrichie - Tige - Tungstène";
    } else if (person.HairLenght == Mullet) {
      reponseTransmission = "Argent - Brute - Chalumeau";
    } else if (person.Eating == Carnivor) {
      reponseTransmission = "Silicone - Filaments - À l'arc";
    } else {
      reponseTransmission = "Fer Forgé - Lingot - Colle Chaude";
    }
  } else if (person.com.size() == 6) {
    if (person.moyenSansClasse == person.moyenClasse) {
      reponseTransmission = "Cuivre - Écrous - Tungstène";
    } else if (person.Eating == Omnivor) {
      reponseTransmission = "Cobalt - Brut - PLasma";
    } else if ((person.HairColor == BLANC && person.Eating == Vegan) ||
               ((person.HairColor == ORANGE || person.HairColor == VERT) &&
                person.Eating == PescaPescaTerrein) ||
               (person.HairLenght == Long && person.Eating == Omnivor)) {
      reponseTransmission = "Acier Inox - Tige - Plasma";
    } else {
      reponseTransmission = "Or - Filaments - À l'arc";
    }
  }
}

Heart::Heart() {
  setBruit();
  setPerson();
  setCode();
  setCarrosserie();
  setReponseTrans();
  person = Person();
}

std::ostream &operator<<(std::ostream &os, const Heart &heart) {
  os << "Les types de moyen de communication sont: ";
  for (string com : heart.person.com) {
    os << com << ", ";
  }
  os << std::endl;

  os << "Couleur de cheveux: " << heart.person.HairColor << std::endl;
  os << "Longeur de cheveux: " << heart.person.HairLenght << std::endl;
  os << "Couleur yeux: " << heart.person.EyeColor << std::endl;
  os << "Regime: " << heart.person.Eating << std::endl;

  os << '\n';
  os << "Le code chiffré est: " << heart.code.first << '\t' << '\t' << '\t'
     << '\n';
  os << "Bruit fait par le moteur: " << heart.bruit.first << '\t' << '\t'
     << '\t' << '\n';
  os << "======================================================================"
        "============="
     << '\n';

  // TODO
  os << "La solution pour le problème de transmission est: "
     << heart.reponseTransmission << '\n';

  // Modifier
  os << "La solution pour le probème de pression est: " << heart.bruit.second
     << '\n';

  // Modifier
  os << "La solution pour le problème de code de porte est: "
     << heart.code.second << '\n';

  // TODO
  os << "La solution pour le diagramme de Veine est: " << heart.carrosseriePair
     << '\n';
  return os;
}
