/*Write a program to create an array for 10 players. For each player store name, no. of
matches played, runs, wickets takes.
a. Create function to Accept the information of each player.
b. Create function to display the information of all the players
c. Display the information of player who made maximum runs and the one who took
maximum number of wickets.
*/

#include <stdio.h>

struct Player
{
    char name[20];
    int matches;
    int runs;
    int wickets;
};

/* Function to accept player information */
void acceptPlayers(struct Player p[])
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter details of Player %d\n", i + 1);

        printf("Name            : ");
        scanf("%s", p[i].name);

        printf("Matches Played  : ");
        scanf("%d", &p[i].matches);

        printf("Runs Scored     : ");
        scanf("%d", &p[i].runs);

        printf("Wickets Taken   : ");
        scanf("%d", &p[i].wickets);
    }
}

/* Function to display all player information */
void displayPlayers(struct Player p[])
{
    int i;

    printf("\nPlayer Information:\n");
    printf("-------------------------------------------------\n");
    printf("Name\tMatches\tRuns\tWickets\n");
    printf("-------------------------------------------------\n");

    for (i = 0; i < 10; i++)
    {
        printf("%s\t%d\t%d\t%d\n",
               p[i].name,
               p[i].matches,
               p[i].runs,
               p[i].wickets);
    }
}

/* Function to display player with max runs and wickets */
void displayMax(struct Player p[])
{
    int i;
    int maxRunsIndex = 0;
    int maxWicketsIndex = 0;

    for (i = 1; i < 10; i++)
    {
        if (p[i].runs > p[maxRunsIndex].runs)
            maxRunsIndex = i;

        if (p[i].wickets > p[maxWicketsIndex].wickets)
            maxWicketsIndex = i;
    }

    printf("\nPlayer with Maximum Runs:\n");
    printf("Name : %s\nRuns : %d\n",
           p[maxRunsIndex].name,
           p[maxRunsIndex].runs);

    printf("\nPlayer with Maximum Wickets:\n");
    printf("Name    : %s\nWickets : %d\n",
           p[maxWicketsIndex].name,
           p[maxWicketsIndex].wickets);
}

int main()
{
    struct Player players[10];

    acceptPlayers(players);
    displayPlayers(players);
    displayMax(players);

    return 0;
}
