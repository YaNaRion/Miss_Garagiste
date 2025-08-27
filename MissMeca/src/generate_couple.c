#include "generate_couple.h"
#include <stdlib.h>
#include <time.h>

// Constantes pour les matériaux
const char *MATERIAU_FER = "Fer";
const char *MATERIAU_FER_FORGE = "Fer forgé";
const char *MATERIAU_ACIER = "Acier";
const char *MATERIAU_ACIER_INOXYDABLE = "Acier inoxydable";
const char *MATERIAU_CUIVRE = "Cuivre";
const char *MATERIAU_OR = "Or";
const char *MATERIAU_ARGENT = "Argent";
const char *MATERIAU_PLATINE = "Platine";
const char *MATERIAU_COBALT = "Cobalt";
const char *MATERIAU_SILICONE = "Silicone";
const char *MATERIAU_URANIUM_ENRICHI = "Uranium enrichi";

// Constantes pour les formes de coupe
const char *FORME_BRUT = "Brut";
const char *FORME_LINGOT = "Lingot";
const char *FORME_TIGE = "Tige";
const char *FORME_ECROU = "Écrou";
const char *FORME_FILAMENT = "Filament";

// Constantes pour les techniques de soudure

const char *TECHNIQUE_ARC = "À arc";
const char *TECHNIQUE_TUNGSTENE = "Tungstène";
const char *TECHNIQUE_PLASMA = "Plasma";
const char *TECHNIQUE_COLLE_CHAUDE = "Colle chaude";
const char *TECHNIQUE_CHALUMEAU = "Chalumeau";

const char *male_names[150] = {
    "Liam",      "Noah",      "Oliver",   "Elijah",    "James",       "William",
    "Benjamin",  "Lucas",     "Henry",    "Alexander", "Mason",       "Michael",
    "Ethan",     "Daniel",    "Jacob",    "Logan",     "Jackson",     "Levi",
    "Sebastian", "Mateo",     "Jack",     "Owen",      "Theodore",    "Aiden",
    "Samuel",    "Joseph",    "John",     "David",     "Wyatt",       "Matthew",
    "Luke",      "Asher",     "Carter",   "Julian",    "Grayson",     "Leo",
    "Jayden",    "Gabriel",   "Isaac",    "Lincoln",   "Anthony",     "Hudson",
    "Dylan",     "Ezra",      "Thomas",   "Charles",   "Christopher", "Jaxon",
    "Maverick",  "Josiah",    "Isaiah",   "Andrew",    "Elias",       "Joshua",
    "Nathan",    "Caleb",     "Ryan",     "Adrian",    "Miles",       "Eli",
    "Nolan",     "Christian", "Aaron",    "Cameron",   "Ezekiel",     "Colton",
    "Luca",      "Landon",    "Hunter",   "Jonathan",  "Santiago",    "Axel",
    "Easton",    "Cooper",    "Jeremiah", "Angel",     "Roman",       "Connor",
    "Jameson",   "Robert",    "Greyson",  "Jordan",    "Ian",         "Carson",
    "Jaxson",    "Leonardo",  "Nicholas", "Dominic",   "Austin",      "Everett",
    "Brooks",    "Xavier",    "Kai",      "Jose",      "Parker",      "Adam",
    "Jace",      "Wesley",    "Kayden",   "Silas",     "Declan",      "Weston",
    "Bennett",   "Evan",      "Emmett",   "Micah",     "Ryder",       "Beau",
    "Damian",    "Brayden",   "Gael",     "Rowan",     "Harrison",    "Bryson",
    "Sawyer",    "Amir",      "Kingston", "Jason",     "Giovanni",    "Vincent",
    "Ayden",     "Chase",     "Myles",    "Diego",     "Nathaniel",   "Legend",
    "Jonah",     "River",     "Tyler",    "Cole"};

const char *female_names[150] = {
    "Olivia",    "Emma",      "Charlotte", "Amelia",   "Sophia",    "Isabella",
    "Ava",       "Mia",       "Evelyn",    "Luna",     "Harper",    "Camila",
    "Gianna",    "Elizabeth", "Eleanor",   "Ella",     "Abigail",   "Sofia",
    "Avery",     "Scarlett",  "Emily",     "Aria",     "Penelope",  "Chloe",
    "Layla",     "Mila",      "Nora",      "Hazel",    "Madison",   "Ellie",
    "Lily",      "Nova",      "Isla",      "Grace",    "Violet",    "Aurora",
    "Riley",     "Zoey",      "Willow",    "Emilia",   "Stella",    "Zoe",
    "Victoria",  "Hannah",    "Addison",   "Leah",     "Lucy",      "Eliana",
    "Ivy",       "Everly",    "Lillian",   "Paisley",  "Elena",     "Naomi",
    "Maya",      "Natalie",   "Kinsley",   "Delilah",  "Claire",    "Audrey",
    "Aaliyah",   "Ruby",      "Alice",     "Aubrey",   "Autumn",    "Leilani",
    "Savannah",  "Valentina", "Brooklyn",  "Samantha", "Caroline",  "Kennedy",
    "Skylar",    "Genesis",   "Bella",     "Ariana",   "Allison",   "Sarah",
    "Cora",      "Madelyn",   "Eva",       "Adeline",  "Hailey",    "Gianna",
    "Quinn",     "Nevaeh",    "Piper",     "Lydia",    "Alexandra", "Josephine",
    "Clara",     "Vivian",    "Reagan",    "Eliza",    "Hadley",    "Melody",
    "Raelynn",   "Julia",     "Peyton",    "Rylee",    "Athena",    "Maria",
    "Liliana",   "Jade",      "Katherine", "Brielle",  "Adalynn",   "Arianna",
    "Faith",     "Alexis",    "Rosalie",   "Ashley",   "Margaret",  "Isabelle",
    "Melanie",   "Emery",     "Ayla",      "Elise",    "Khloe",     "Amara",
    "Georgia",   "Juliana",   "Natalia",   "Hope",     "Brianna",   "Valerie",
    "Everleigh", "Ruth",      "Mary",      "Freya"};

const char *snoringSequence[12] = {"**H!", "9!9*", "HH!*", "!!**",
                                   "9HH9", "H!*9", "*H!9", "9!*9",
                                   "*H9!", "!H!*", "999*", "!*!9"};

Couple createCouple() {
  srand(time(NULL)); // Initialization, should only be called once.
  int m = rand();
  int w = rand();
  struct Couple couple = {.men = male_names[m % 149],
                          .women = female_names[w % 140]};
  return couple;
}

Problems createProblems() {}

ProblemSolution createSnoring() { struct ProblemSolution sol = {}; }

ProblemSolution createCommunication() {}
ProblemSolution createPressure() {}
ProblemSolution createTelevision() {}
