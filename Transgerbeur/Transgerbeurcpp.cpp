#include <iostream>
#include <string>
#include <array>


using namespace std;

int main() {
	cout << " Transgerbeur" << endl;


	enum class e_etat {
		VIDE,
		PALETTE,
		ROULEAU
	};

	struct s_palette {
		int poids;
		char ref;
	};

	struct s_rouleau {
		float longeur;
		int num;

	};

	union u_contenu {
		s_palette palette;
		s_rouleau rouleau;

	};

	struct s_casier {
		int px;
		int py; 
		e_etat etat;
		u_contenu contenu;
	};

	s_casier tabCasier;

		return 0;
		


}
