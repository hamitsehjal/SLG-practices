/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/10/30
* *********************/
#define _CRT_SECURE_NO_WARNINGS
#define NUMPLAYERS 3
#define MAXNAMELEN 30
#define NUMPOWER 5
#define MAXTEAMNAMELEN 15
#define MAXTEAMNUM 5
#define MINTEAMNUM 2

#include <stdio.h>


// 1. part
// create PlayerInfo structure that holds; 
//		player's fullname in char array with MAXNAMELEN size
// create TeamInfo structure that holds;
//		teamname -> char array with MAXTEAMNAMELEN size
//		players array type PlayerInfo (the one you created above)

// declare 'teams' array type TeamInfo and store;
//		teams' name, and each players name
// display part is already written. Do not change it.

// NOTE: use --> scanf(" %[^\n]"	to store string
//		The format specifier "%[^\n]" tells to the compiler that read the characters until "\n" is not found.
// NOTE: when declaring variables' name, check display part and name them accordingly



// 2. part
// add PowerInfo structure to the players
// every power has int type -> offense, defense, shooting  power
// int type totalPower 

// display the team and player info


int main(void) {
	int numTeam;

	printf("Please enter the teams information\n\n");

	do {
		printf("Enter the number of teams: ");
		scanf("%d", &numTeam);
	} while (numTeam > MAXTEAMNUM || numTeam < MINTEAMNUM);


	// Implement your code here


	// do not change the below code
	// replace this in the part 2
	for (int i = 0; i < numTeam; i++) {
		printf("\n%d. team's name: %s\n", i + 1, teams[i].teamName);
		printf("===========================\n");
		printf("%d. team's players:\n", i + 1);
		for (int j = 0; j < NUMPLAYERS; j++)
			printf("%d. player's name: %s \n", j + 1, teams[i].players[j].fullName);
		printf("===========================\n\n");
	}
	// do not change the this part


	return 0;
}


/*
REPLACE THE CODE WITH THE OLDER VERSION IN THE PART-2

for (int i = 0; i < numTeam; i++) {
	printf("\n%d. team's name: %s\n", i + 1, teams[i].teamName);
	printf("===========================\n");
	printf("%d. team's players:\n", i + 1);
	for (int j = 0; j < NUMPLAYERS; j++) {
		printf("%d. player's name: %s \n", j + 1, teams[i].players[j].fullName);
		printf("%d. player's offensive power: %d, defensive power: %d, shooting power: %d\n", j + 1, 
			teams[i].players[j].powers.offense, teams[i].players[j].powers.defense, teams[i].players[j].powers.shooting);
	}
	printf("%d. team's total power: %d\n", i + 1, teams[i].totalPower);
	printf("===========================\n\n");
}
*/
