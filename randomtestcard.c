#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#define MAX_TESTS 1300

//This randomly tests smithy

int main() {

	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, 
		sea_hag, tribute, smithy};

	int i, j, choice1, choice2, choice3, seed, state, answerToUniverse, test;
	answerToUniverse = 42;
	struct gameState g;
	srand(time(NULL));
	printf("Running Random Card Test for Gardens\n");
	int players = rand() % 4;
	int creatingGame = initializeGame(players, k, answerToUniverse, &g);
	assert(creatingGame == 0);


	for (i = 0; i < MAX_TESTS; i++) {

		choice1 = rand() % 100 + i;
		choice2 = rand() % 100 + i;
		choice3 = rand() % 100 + i;
		int handPos = rand() % 100 + i;
		int bonus = rand() % 100 + i;


		test = cardEffect(gardens, choice1, choice2, choice3, &g, handPos, &bonus);		//Run gardens card
		assert(test == -1);

	}
	printf("Test Completed succesfully\n");

	return 0;
}
