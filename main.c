#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "power_level.h"

int main() {
	srand(time(NULL));
	printf("\nBefore Super Saiyan:\n\n");
	char *name = "Goku";
	char *species = "Saiyan";
	int power_level = 9000;
	char *hair_color = "Black";

	struct z_fighter *Goku = create_z(name, species, power_level, hair_color);
	print_z(Goku);
	
	printf("\nAfter Super Saiyan:\n\n");
	change_z(Goku, rand(), "Yellow");
	print_z(Goku);

	printf("\nITS OVER 9000\n");

	free(Goku);

	return 0;
}