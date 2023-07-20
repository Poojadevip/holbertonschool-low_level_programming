#ifndef dog_h
#define dog_h

/**
*struct dog - Name of the dog
*@name:first member
*@age:second member
*@owner:third member
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif