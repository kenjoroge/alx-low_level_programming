#ifndef DOG
#define DOG
/**
 * struct dog -Struct for dog
 * @name: gets character
 * @age: gets a floating number
 * @owner: gets a charcter type
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

