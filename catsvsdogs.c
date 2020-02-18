#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

typedef struct Animal {
	int id;
	pthread_t species;
}
Animal;

int main(int argc, char const *argv[]) {

	/**-----SPAWNING THREADS-----**/

	//First Dog Thread
	pthread_t dog1;
	pthread_create(&dog1, NULL, TheWateringBowl, NULL);

	//Second Dog Thread
	pthread_t dog2;
	pthread_create(&dog2, NULL, TheWateringBowl, NULL);
	/*
	pthread_t dog3;
	pthread_t dog4;
	pthread_t dog5;
	pthread_t dog6;
	pthread_t dog7;
	pthread_t dog8;
	pthread_t dog9;
	*/

	//First Cat Thread
	pthread_t cat1;
	pthread_create(&cat1, NULL, TheWateringBowl, NULL);

	//Second Cat Thread
	pthread_t cat2;
	pthread_create(&cat1, NULL, TheWateringBowl, NULL);

	/*
	pthread_t cat3;
	pthread_t cat4;
	pthread_t cat5;
	pthread_t cat6;
	pthread_t cat7;
	pthread_t cat8;
	pthread_t cat9;
	pthread_t cat10;
	pthread_t cat11;
	pthread_t cat12;
	pthread_t cat13;
	*/

	/**-----WAITING FOR THREADS TO FINISH-----**/
	pthread_join(dog1, NULL);


	return 0;
}

void theWateringBowl(){
	//TODO make conditional statements and locks to ensure the kitchen is agreeable
	//drinks using usleep(), number should be arbitrary but tiny so we can stresstest

	// Critical section starts
	pthread_mutex_lock(&mutex);
	usleep(5);

	// Critical section ends
	pthread_mutex_unlock(&mutex);

	pthread_exit(NULL);
}
