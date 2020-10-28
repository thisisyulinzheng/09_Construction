#ifndef POWER_LEVEL_H
#define POWER_LEVEL_H

struct z_fighter {
	char name[256]; 
	char species[256]; 
	int power_lvl;
	char hair_color[256];
};

struct z_fighter * create_z(char *name, char *species, int p_lvl, char *h);
void print_z(struct z_fighter *);
void change_z(struct z_fighter *z_f, int p_lvl, char *h);

#endif