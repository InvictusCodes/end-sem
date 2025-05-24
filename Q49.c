#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Cricket 
{
    char name[30];
    char country[30];
    float avg;
    int best;
} crick[100], temp;

int main()
 {
    int i, j, n;

    clrscr();

    printf("Enter number of players: ");
    scanf("%d", &n);
    fflush(stdin);  

    for(i = 0; i < n; i++) {
        printf("\nEnter information of Player %d:\n", i + 1);

        printf("Enter player name: ");
        gets(crick[i].name);

        printf("Enter player team: ");
        gets(crick[i].country);

        printf("Enter the Best Batting Score of player: ");
        scanf("%d", &crick[i].best);
        fflush(stdin);

        printf("Batting Average: ");
        scanf("%f", &crick[i].avg);
        fflush(stdin);
    }

    // Sort ascending by average//
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(crick[i].avg > crick[j].avg) {
                temp = crick[i];
                crick[i] = crick[j];
                crick[j] = temp;
            }
        }
    }

    printf("\nDetails of Players sorted by Batting Average (Ascending Order):\n");
    printf("Player Name\tTeam\tBest Score\tAverage\n");

    for(i = 0; i < n; i++) {
        printf("%s\t%s\t\t%d\t\t%.2f\n", 
               crick[i].name, crick[i].country, crick[i].best, crick[i].avg);
    }

    getch();
    return 0;
}
