#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "power_level.h"

int main() {	
	struct z_fighter *Goku = create_z("Goku", "Saiyan", 9000, "Yellow");
	struct z_fighter *Krillin = create_z("Krillin", "Human", 10, "Black");
	struct z_fighter *Piccolo = create_z("Piccolo", "Namekian", 5000, "Bald");
	Goku->next = Krillin;
	Krillin->next = Piccolo;
	print_list(Goku);

	return 0;
}