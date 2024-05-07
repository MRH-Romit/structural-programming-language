// Redwan Hossain Romit - 0112230544
// Shariar Jaman Alvi - 011222353


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    int runs;
    int wickets;
    int rating;
} Cricketer;

Cricketer team1[11], team2[11];

void loadPlayers(char* team_file_reader, Cricketer team[]) {
    FILE* file = fopen(team_file_reader, "r");
    if (file == NULL) {
        printf("File could not be opened.\n");
        exit(1);
    }
    for (int i = 0; i < 11; i++) {
        fscanf(file, "%s %d %d %d", team[i].name, &team[i].age, &team[i].runs, &team[i].wickets);
        int runRating = (team[i].runs < 20) ? 4 : 
                        (team[i].runs >= 20 && team[i].runs <= 50) ? 12 :
                        (team[i].runs > 50 && team[i].runs <= 75) ? 20 : 24;
        team[i].rating = runRating + (team[i].wickets * 8);
    }
    fclose(file);
}

int login(char* username, char* password) {
    FILE* file = fopen("LogIn.txt", "r");
    char usr[50], pwd[50];
    while (fscanf(file, "%s %s", usr, pwd) != EOF) {
        if (strcmp(username, usr) == 0 && strcmp(password, pwd) == 0) {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}

void displayTeamInfo(Cricketer team[]) {
    for (int i = 0; i < 11; i++) {
        printf("Name: %s, Age: %d, Runs: %d, Wickets: %d, Rating: %d\n",
               team[i].name, team[i].age, team[i].runs, team[i].wickets, team[i].rating);
    }
}

void updateRun(Cricketer team[]) {
    char name[50];
    printf("Enter player's name to update runs: ");
    scanf("%s", name);
    for (int i = 0; i < 11; i++) {
        if (strcmp(team[i].name, name) == 0) {
            printf("Enter new runs: ");
            scanf("%d", &team[i].runs);
            int runRating = (team[i].runs < 20) ? 4 :
                            (team[i].runs >= 20 && team[i].runs <= 50) ? 12 :
                            (team[i].runs > 50 && team[i].runs <= 75) ? 20 : 24;
            team[i].rating = runRating + (team[i].wickets * 8);
            return ;
        }
    }
    printf("Player not found.\n");
}

void displayMostRatedPlayer(Cricketer team[]) {
    int maxIndex = 0;
    for (int i = 1; i < 11; i++) {
        if (team[i].rating > team[maxIndex].rating) {
            maxIndex = i;
        }
    }
    printf("Most Rated Player: %s, Rating: %d\n", team[maxIndex].name, team[maxIndex].rating);
}

void displayYoungestPlayer(Cricketer team[]) {
    int minIndex = 0;
    for (int i = 1; i < 11; i++) {
        if (team[i].age < team[minIndex].age) {
            minIndex = i;
        }
    }
    printf("Youngest Player: %s, Age: %d\n", team[minIndex].name, team[minIndex].age);
}


void displayTopScorer(Cricketer team1[], Cricketer team2[]) {
    int maxIndex1_team1 = 0, maxIndex2_team2 = 0;
    
    for (int i = 1; i < 11; i++) {
        if (team1[i].runs > team1[maxIndex1_team1].runs) {
            maxIndex1_team1 = i;
        }
    }
    
    for (int i = 1; i < 11; i++) {
        if (team2[i].runs > team2[maxIndex2_team2].runs) {
            maxIndex2_team2 = i;
        }
    }

    
    if (team1[maxIndex1_team1].runs > team2[maxIndex2_team2].runs) {
        printf("Top Scorer: %s\nRuns: %d\nWickets: %d\nTeam: Team 1\n", 
               team1[maxIndex1_team1].name, team1[maxIndex1_team1].runs, team1[maxIndex1_team1].wickets);
    } else {
        printf("Top Scorer: %s\nRuns: %d\nWickets: %d\nTeam: Team 2\n", 
               team2[maxIndex2_team2].name, team2[maxIndex2_team2].runs, team2[maxIndex2_team2].wickets);
    }
}

 

int main() {
    char username[50], password[50], input;
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (!login(username, password)) {
        printf("Invalid information.\n");
        return 0;
    }
    loadPlayers("Team1.txt", team1);
    loadPlayers("Team2.txt", team2);
 
    do {
        printf("Enter option (1-7) or 'q' to quit:\n");
        printf("1. Display team1 info\n");
        printf("2. Display team2 info\n");
        printf("3. Update runs on which team\n");
        printf("4. Display youngest player, enter 'a' from team1 info or 'b' for team2\n");
        printf("5. Display most rated player in team1\n");
        printf("6. Display most rated player in team2\n"); 
        printf("7. Man of the match from both team\n");
        printf("q. Quit\n\n");
        scanf(" %c", &input);
        switch (input) {
            case '1':
                displayTeamInfo(team1);
                break;
            case '2':
                displayTeamInfo(team2);
                break;
            case '3':
                printf("Choose team (a for team1, b for team2): ");
                char teamChoice;
                scanf(" %c", &teamChoice);
                if (teamChoice == 'a') {
                    updateRun(team1);
                } else if (teamChoice == 'b') {
                    updateRun(team2);
                }
                break;
            case '4':
                printf("Choose team (a for team1, b for team2): ");
                scanf(" %c", &teamChoice);
                if (teamChoice == 'a') {
                    displayYoungestPlayer(team1);
                } else if (teamChoice == 'b') {
                    displayYoungestPlayer(team2);
                }
                break;
            case '5':
                displayMostRatedPlayer(team1);
                break;
            case '6':
                displayMostRatedPlayer(team2);
                break;
            case '7':
                displayTopScorer(team1, team2);
                break;
            
            case 'q':
                continue;
            case 'Q':
                printf("Thank you\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }
    } while (input != 'q' && input != 'Q');

    return 0;
}
