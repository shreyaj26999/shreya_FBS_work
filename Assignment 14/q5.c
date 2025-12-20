/*Movie Database: Create a program that uses structures to manage a movie
database with details like title, director, release year, and genre. Allow users
to add, search for, and update movie records.*/

#include <stdio.h>
#include <string.h>

// Structure to represent a movie
struct Movie {
    char title[50];
    char director[50];
    int releaseYear;
    char genre[30];
};

int main() {
    struct Movie movies[100];
    int count = 0;
    int choice;
    char searchTitle[50];
    int found;

    do {
        printf("\n--- Movie Database Menu ---\n");
        printf("1. Add Movie\n");
        printf("2. Search Movie\n");
        printf("3. Update Movie\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            // Add movie
            case 1:
                printf("\nEnter movie title: ");
                scanf(" %[^\n]", movies[count].title);

                printf("Enter director name: ");
                scanf(" %[^\n]", movies[count].director);

                printf("Enter release year: ");
                scanf("%d", &movies[count].releaseYear);

                printf("Enter genre: ");
                scanf(" %[^\n]", movies[count].genre);

                count++;
                printf("Movie added successfully!\n");
                break;

            // Search movie
            case 2:
                found = 0;
                printf("\nEnter movie title to search: ");
                scanf(" %[^\n]", searchTitle);

                for (int i = 0; i < count; i++) {
                    if (strcmp(movies[i].title, searchTitle) == 0) {
                        printf("\nTitle: %s", movies[i].title);
                        printf("\nDirector: %s", movies[i].director);
                        printf("\nRelease Year: %d", movies[i].releaseYear);
                        printf("\nGenre: %s\n", movies[i].genre);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Movie not found!\n");
                }
                break;

            // Update movie
            case 3:
                found = 0;
                printf("\nEnter movie title to update: ");
                scanf(" %[^\n]", searchTitle);

                for (int i = 0; i < count; i++) {
                    if (strcmp(movies[i].title, searchTitle) == 0) {
                        printf("Enter new director: ");
                        scanf(" %[^\n]", movies[i].director);

                        printf("Enter new release year: ");
                        scanf("%d", &movies[i].releaseYear);

                        printf("Enter new genre: ");
                        scanf(" %[^\n]", movies[i].genre);

                        printf("Movie updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Movie not found!\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
