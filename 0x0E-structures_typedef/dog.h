#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED

/**
 * struct dog - information about dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
#endif
