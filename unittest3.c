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
int check;
struct gameState g;
printf("----------Testing Whose Turn----------\n");
for(i = 0; i < 5; i++){
	g.whoseTurn = i;
	check = whoseTurn(&g);
	assert(check == i);
}
printf("Success\n");
	return 0;
}
