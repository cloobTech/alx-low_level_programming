#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a structure for a dog object
 * @name: is the name element
 * @age: is the age element
 * @owner: is the owner element
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog dog_t;
#endif /*DOG_H*/
