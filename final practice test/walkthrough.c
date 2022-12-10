///**********************
//* AUTHOR: Tarik Ozturk
//* Date: 2022/12/04
//* *********************/

#include <stdio.h>

#define NAME_LENGTH 10

struct Team {	   
	char name[NAME_LENGTH + 1];
	int power;
	int offensive[3];
	int defensive[3];
};

struct Team findWinner(struct Team* team1, struct Team* team2) {
	struct Team result;

	for (int i = 0; i < 3; i++) {
		team1->power += team1->offensive[i] + team1->defensive[i];
		team2->power += team2->offensive[i] + team2->defensive[i];
	}

	if (team1->power > team2->power) {
	    result = *team1;
	}
    else {
		result = *team2;
	}

	return result;
}

int main(void) {
	struct Team team1 = { {'F', 'i', 'r', 's', 't', '\0'} , 0, {77, 58, 85}, {75, 80, 61} };
	struct Team team2 = { "Second" , 0, {70, 72, 74}, {81, 77, 65} };
	struct Team winner = findWinner(&team1, &team2);
	
	printf("The winner team is %s", winner.name);
	return 0;
}
