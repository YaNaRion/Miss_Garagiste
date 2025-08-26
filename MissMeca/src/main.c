#include <curl/curl.h>
#include <stdio.h>

// Constantes pour les matériaux
const char* MATERIAU_FER			  = "Fer";
const char* MATERIAU_FER_FORGE		  = "Fer forgé";
const char* MATERIAU_ACIER			  = "Acier";
const char* MATERIAU_ACIER_INOXYDABLE = "Acier inoxydable";
const char* MATERIAU_CUIVRE			  = "Cuivre";
const char* MATERIAU_OR				  = "Or";
const char* MATERIAU_ARGENT			  = "Argent";
const char* MATERIAU_PLATINE		  = "Platine";
const char* MATERIAU_COBALT			  = "Cobalt";
const char* MATERIAU_SILICONE		  = "Silicone";
const char* MATERIAU_URANIUM_ENRICHI  = "Uranium enrichi";

// Constantes pour les formes de coupe
const char* FORME_BRUT	   = "Brut";
const char* FORME_LINGOT   = "Lingot";
const char* FORME_TIGE	   = "Tige";
const char* FORME_ECROU	   = "Écrou";
const char* FORME_FILAMENT = "Filament";

// Constantes pour les techniques de soudure
const char* TECHNIQUE_ARC		   = "À arc";
const char* TECHNIQUE_TUNGSTENE	   = "Tungstène";
const char* TECHNIQUE_PLASMA	   = "Plasma";
const char* TECHNIQUE_COLLE_CHAUDE = "Colle chaude";
const char* TECHNIQUE_CHALUMEAU	   = "Chalumeau";


struct ProblemSolution {
	const char* mat;
	const char* shape;
	const char* technique;
};

struct Couple {
	const char* men;
	const char* women;
};

struct Heart {
	struct ProblemSolution snoring;
	struct ProblemSolution communication;
	struct ProblemSolution pressure;
	struct ProblemSolution television;
};

int writeToFile() {
	FILE* f;
	f = fopen("test.txt", "w");
	fprintf(f, "asdasd");
	return 0;
}

int main() {
	return 0;
}
