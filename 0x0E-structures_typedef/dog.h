#ifndef _DOG_H_

#define _DOG_H_

/**
 * struct dog - store information of a dog
 *
 * @name: Name the dog
 *
 * @age: Age the god
 *
 * @owner: Owner the dog
 *
 * Description: structure called dog that store inforation about name,
 * age and owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
