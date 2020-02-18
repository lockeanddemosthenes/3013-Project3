#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

//Create an Animal struct so we can name and ID each cat and/or dog
typedef struct Animal {
	int ID;
	pthread_t species;
	char* NameOfSpeciesID;
}

int main(int argc, char const *argv[]) {

	/**-----SPAWNING THREAD SECTION-----**/
	//First dog thread
	struct Animal dog1;
	dog1.NameOfSpeciesID = "dog1";
	dog1.ID = 201;
	dog1.species;
	pthread_create(&dog1, NULL, TheWateringBowl, NULL);

	//Second dog thread
	struct Animal dog2;
	dog2.NameOfSpeciesID = "dog2";
	dog2.ID = 202;
	dog2.species;
	pthread_create(&dog2, NULL, TheWateringBowl, NULL);

	/*
	struct Animal dog3;
	dog3.NameOfSpeciesID = "dog3";
	dog3.ID = 203;
	dog3.species;
	pthread_create(&dog3, NULL, TheWateringBowl, NULL);

	struct Animal dog4;
	dog4.NameOfSpeciesID = "dog4";
	dog4.ID = 204;
	dog4.species;
	pthread_create(&dog4, NULL, TheWateringBowl, NULL);

	struct Animal dog5;
	dog5.NameOfSpeciesID = "dog5";
	dog5.ID = 205;
	dog5.species;
	pthread_create(&dog5, NULL, TheWateringBowl, NULL);

	struct Animal dog6;
	dog6.NameOfSpeciesID = "dog6";
	dog6.ID = 206;
	dog6.species;
	pthread_create(&dog6, NULL, TheWateringBowl, NULL);

	struct Animal dog7;
	dog7.NameOfSpeciesID = "dog7";
	dog7.ID = 207;
	dog7.species;
	pthread_create(&dog7, NULL, TheWateringBowl, NULL);

	struct Animal dog8;
	dog8.NameOfSpeciesID = "dog8";
	dog8.ID = 208;
	dog8.species;
	pthread_create(&dog8, NULL, TheWateringBowl, NULL);

	struct Animal dog9;
	dog9.NameOfSpeciesID = "dog9";
	dog9.ID = 209;
	dog9.species;
	pthread_create(&dog9, NULL, TheWateringBowl, NULL);
	*/


	//First cat thread
	struct Animal cat1;
	cat1.NameOfSpeciesID = "cat1";
	cat1.id = 9001;
	cat1.species;
	pthread_create(&cat1, NULL, TheWateringBowl, NULL);

	//Second cat thread
	struct Animal cat2;
	cat2.NameOfSpeciesID = "cat2";
	cat2.id = 9002;
	cat2.species;
	pthread_create(&cat2, NULL, TheWateringBowl, NULL);

	/*
	struct Animal cat3;
	cat3.NameOfSpeciesID = "cat3";
	cat3.id = 9003;
	cat3.species;
	pthread_create(&cat3, NULL, TheWateringBowl, NULL);

	struct Animal cat4;
	cat4.NameOfSpeciesID = "cat4";
	cat4.id = 9004;
	cat4.species;
	pthread_create(&cat4, NULL, TheWateringBowl, NULL);

	struct Animal cat5;
	cat5.NameOfSpeciesID = "cat5";
	cat5.id = 9005;
	cat5.species;
	pthread_create(&cat5, NULL, TheWateringBowl, NULL);

	struct Animal cat6;
	cat6.NameOfSpeciesID = "cat6";
	cat6.id = 9006;
	cat6.species;
	pthread_create(&cat6, NULL, TheWateringBowl, NULL);

	struct Animal cat7;
	cat7.NameOfSpeciesID = "cat7";
	cat7.id = 9007;
	cat7.species;
	pthread_create(&cat7, NULL, TheWateringBowl, NULL);

	struct Animal cat8;
	cat8.NameOfSpeciesID = "cat8";
	cat8.id = 9008;
	cat8.species;
	pthread_create(&cat8, NULL, TheWateringBowl, NULL);

	struct Animal cat9;
	cat9.NameOfSpeciesID = "cat9";
	cat9.id = 9009;
	cat9.species;
	pthread_create(&cat9, NULL, TheWateringBowl, NULL);

	struct Animal cat10;
	cat10.NameOfSpeciesID = "cat10";
	cat10.id = 9010;
	cat10.species;
	pthread_create(&cat10, NULL, TheWateringBowl, NULL);

	struct Animal cat11;
	cat11.NameOfSpeciesID = "cat11";
	cat11.id = 9011;
	cat11.species;
	pthread_create(&cat11, NULL, TheWateringBowl, NULL);

	struct Animal cat12;
	cat12.NameOfSpeciesID = "cat12";
	cat12.id = 9012;
	cat12.species;
	pthread_create(&cat12, NULL, TheWateringBowl, NULL);

	struct Animal cat13;
	cat13.NameOfSpeciesID = "cat13";
	cat13.id = 9013;
	cat13.species;
	pthread_create(&cat13, NULL, TheWateringBowl, NULL);
	*/


	//---------------Joining together threads------------------------
	//joins dog1's thread back to the single thread
	pthread_join(dog1, NULL);

	//joins dog2's thread back to the single thread
	pthread_join(dog2, NULL);

	/*
	pthread_join(dog3, NULL);
	pthread_join(dog4, NULL);
	pthread_join(dog5, NULL);
	pthread_join(dog6, NULL);
	pthread_join(dog7, NULL);
	pthread_join(dog8, NULL);
	pthread_join(dog9, NULL);
	*/


	//joins cat1's thread back to the single thread
	pthread_join(cat1, NULL);

	//joins cat2's thread back to the single thread
	pthread_join(cat2, NULL);

	/*
	pthread_join(cat3, NULL);
	pthread_join(cat4, NULL);
	pthread_join(cat5, NULL);
	pthread_join(cat6, NULL);
	pthread_join(cat7, NULL);
	pthread_join(cat8, NULL);
	pthread_join(cat9, NULL);
	*/

	/**-----WAITING FOR THREADS TO FINISH-----**/
	pthread_join(dog1, NULL);
	return 0;

}

void theWateringBowl(){
	//TODO make conditional statements and locks to ensure the kitchen is agreeable

	// Critical section starts
	pthread_mutex_lock(&mutex);
	usleep(5);

	// Critical section ends
	pthread_mutex_unlock(&mutex);

	pthread_exit(NULL);
}
