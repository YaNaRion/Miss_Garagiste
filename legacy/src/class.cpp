#include "class.h"
#include <algorithm>
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

Moteur::Moteur() {
  vector<string> ListMoteur = {"Moteur Hybride", "Moteur à Réaction",
                               "Moteur à Propulsion", "Moteur à Bateau",
                               "Moteur Solaire"};
  nombreMoteur = 3 + rand() % 4;
  for (int i = 0; i < nombreMoteur; i++) {
    typeMoteur.push_back(ListMoteur[rand() % 5]);
  }
  sort(typeMoteur.begin(), typeMoteur.end());
}

void Vaisseau::setFabriquant() {
  vector<string> ListFabriquant = {"ASTRACORP",
                                   "NOTRECORP",
                                   "Coco & Vaisseau",
                                   "Spitfire Corporation",
                                   "VaissPress",
                                   "Anonymarque",
                                   "Correct Craft Vaisseaux",
                                   "Notre Vaisseau Maison"};
  fabriquant = ListFabriquant[rand() % 7];
  if (fabriquant == "ASTRACORP" || fabriquant == "VaissPress" ||
      fabriquant == "Anonymarque" || fabriquant == "Coco & Vaisseau" ||
      fabriquant == "Notre Vaisseau Maison") {
    carrosserieHexa += 0x08;
    estApprove = true;
  }
}

void Vaisseau::setBruit() {
  vector<pair<string, string>> ListePairBruit = {
      make_pair("**H!", "Or - Écrou - À l'arc"),
      make_pair("9!9*", "Platine - Tige - Tungstène"),
      make_pair("HH!*", "Silicone - Brut - Plasma"),
      make_pair("!!**", "Acier - Filament - Chalumeau"),
      make_pair("9HH9", "Uranium enricrandhi - Écrou - Colle chaude"),
      make_pair("H!*9", "Cuivre - Brut - Plasma"),
      make_pair("*H!9", "Cobalt - Filament - À l'arc"),
      make_pair("9!*9", "Aluminium - Tige - À l'arc"),
      make_pair("*H9!", "Fer forgé - Lingot - Colle chaude"),
      make_pair("!H!*", "Fer - Tige - Plasma"),
      make_pair("999*", "Acier - inoxydable - Lingot Chalumeau"),
      make_pair("!*!9", "Argent - Filament - Tungstène")};
  bruit = ListePairBruit[rand() % 11];
}

void Vaisseau::setAnneeFab() { anneeFabrication = 2300 + rand() % 380; }

void Vaisseau::setMatricule() { matricule = 9000 + rand() % 22000; }

void Vaisseau::setMoteur() { moteur = Moteur(); }

void Vaisseau::setCode() {
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
void Vaisseau::setCarrosserie() {
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
  for (string i : moteur.typeMoteur) {
    if (i == "Moteur de Bateau") {
      carrosserieHexa += 0x01;
      break;
    }
  }
  if (moteur.nombreMoteur % 2 == 0) {
    carrosserieHexa += 0x04;
  }
  if (anneeFabrication < 2467 ||
      (anneeFabrication >= 2567 && anneeFabrication <= 2588)) {
    carrosserieHexa += 0x02;
  }
  carrosseriePair = ListePairCode[carrosserieHexa];
}

// A changer
void Vaisseau::setReponseTrans() {
  int nReaction = 0;
  int nPropulsion = 0;
  int nBateau = 0;
  int nSolaire = 0;
  int nHybride = 0;
  for (int i = 0; moteur.nombreMoteur > i; i++) {
    if (moteur.typeMoteur[i] == "Moteur à Réaction")
      nReaction++;
    else if (moteur.typeMoteur[i] == "Moteur à Propulsion")
      nPropulsion++;
    else if (moteur.typeMoteur[i] == "Moteur à Bateau")
      nBateau++;
    else if (moteur.typeMoteur[i] == "Moteur Solaire") {
      nSolaire++;
    } else if (moteur.typeMoteur[i] == "Moteur Hybride") {
      nHybride++;
    }
  }
  if (moteur.nombreMoteur == 3) {
    if (nHybride == 0) {
      reponseTransmission = "Cuivre - Filament - Chalumeau";
    } else if (fabriquant == "ASTRACORP") {
      reponseTransmission = "Or - Lingot - Colle Chaude";
    } else if (nReaction > nPropulsion) {
      reponseTransmission = "Fer Forgé - Tige - Tungstène";
    } else {
      reponseTransmission = "Fer - Tige - Colle Chaude";
    }
  } else if (moteur.nombreMoteur == 4) {
    if (estApprove && anneeFabrication % 2 == 1) {
      reponseTransmission = "Cobalt - Brut - À l'arc";
    } else if (nSolaire % 2 == 1) {
      reponseTransmission = "Acier - Soudé - Plasma";
    } else {
      reponseTransmission = "Aluminium - Filaments - Chalumeau";
    }
  } else if (moteur.nombreMoteur == 5) {
    if (nBateau - 1 == nReaction) {
      reponseTransmission = "Uranium Enrichie - Tige - Tungstène";
    } else if (nReaction == 0) {
      reponseTransmission = "Argent - Brute - Chalumeau";
    } else if (anneeFabrication + 200 <= 2656) {
      reponseTransmission = "Silicone - Filaments - À l'arc";
    } else {
      reponseTransmission = "Fer Forgé - Lingot - Colle Chaude";
    }
  } else if (moteur.nombreMoteur == 6) {
    if ((nPropulsion == 0) && (estApprove == false)) {
      reponseTransmission = "Cuivre - Écrous - Tungstène";
    } else if ((fabriquant == "Coco & Vaisseau") && (nHybride > 0)) {
      reponseTransmission = "Cobalt - Brut - PLasma";
    } else if ((fabriquant == "Anonymarque") || (fabriquant == "VaissPress")) {
      reponseTransmission = "Acier Inox - Tige - Plasma";
    } else {
      reponseTransmission = "Or - Filaments - À l'arc";
    }
  }
}

Vaisseau::Vaisseau() {
  setAnneeFab();
  setMatricule();
  setFabriquant();
  setBruit();
  setMoteur();
  setCode();
  setCarrosserie();
  setReponseTrans();
}

std::ostream &operator<<(std::ostream &os, const Vaisseau &vaisseau) {
  os << "Matricule du vaisseau: " << vaisseau.matricule << '\n';
  os << "Année de Fabrication: " << vaisseau.anneeFabrication << '\n';
  os << "Fabriquant: " << vaisseau.fabriquant << '\n';
  os << "Le nombre de moteur dans le vaisseau est de: "
     << vaisseau.moteur.nombreMoteur << '\n';
  os << "Les types de moteurs sont: ";

  for (int i = 0; i < vaisseau.moteur.nombreMoteur; i++) {
    if (i == vaisseau.moteur.nombreMoteur - 1) {
      os << vaisseau.moteur.typeMoteur[i];
    } else {
      os << vaisseau.moteur.typeMoteur[i] << ", ";
    }
  }

  os << '\n';
  os << "Le code chiffré est: " << vaisseau.code.first << '\t' << '\t' << '\t'
     << '\n';
  os << "Bruit fait par le moteur: " << vaisseau.bruit.first << '\t' << '\t'
     << '\t' << '\n';
  os << "======================================================================"
        "============="
     << '\n';
  os << "La solution pour le problème de transmission est: "
     << vaisseau.reponseTransmission << '\n';
  os << "La solution pour le probème de combustion est: "
     << vaisseau.bruit.second << '\n';
  os << "La solution pour le prblème de code de porte est: "
     << vaisseau.code.second << '\n';
  os << "La solution pour le diagramme de Veine est: "
     << vaisseau.carrosseriePair << '\n';

  return os;
}
