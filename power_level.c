#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "power_level.h"
struct z_fighter * create_z(char *n, char *s, int p_lvl, char *h) {

  struct z_fighter *fighter;
  fighter = malloc(sizeof(struct z_fighter));
  strncpy(fighter->name, n, sizeof(fighter->name)-1);
  strncpy(fighter->species, s, sizeof(fighter->species)-1);
  strncpy(fighter->hair_color, h, sizeof(fighter->hair_color)-1);
  fighter->power_lvl = p_lvl;

  return fighter;
}

void print_z (struct z_fighter *f) {
	printf("Name: %s\nSpecies: %s\nPower Level: %d\nHair Color: %s\n", f->name, f->species, f->power_lvl, f->hair_color);
}

void change_z (struct z_fighter *z_f, int p_lvl, char *h) {
  z_f->power_lvl = p_lvl;
  strncpy(z_f->hair_color, h, sizeof(z_f->hair_color)-1);
}


