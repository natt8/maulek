/* Author: Kathryn Maule
 * Winter 2015
 * Unit Test for function compare.

*/
#include <stdio.h>
#include "dominion.h"
#include "assert.h"
#include "rngs.h"

int main(){


int i, j;

struct gameState g;
int players = 3;
int answerToUniverse = 42;
int turn;
int KingDoms[] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
	sea_hag, tribute, smithy};

printf("----------Testing WhoseTurn Function----------\n");
int creatingGame = initializeGame(players, KingDoms, answerToUniverse, &g);
assert(creatingGame == 0);
turn = whoseTurn(&g);
assert(turn == g.whoseTurn);
printf("Success\n");
	return 0;
}
