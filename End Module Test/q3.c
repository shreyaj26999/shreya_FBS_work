/*Create a program to manage a to-do list.Implement a structure to store task details(task id,description and status).
Write a menu-driven program to add,update and display tasks.Use function for each operation.
*/

#include <stdio.h>
#include <string.h>

struct Task {
    int id;
    char description[100];
    char status[20];   // e.g., Pending / Completed
};

void addTask(struct Task tasks[], int *count);
void updateTask(struct Task tasks[], int count);
void displayTasks(struct Task tasks[], int count);

int main() {
	int MAX_TASKS = 50;
    struct Task tasks[MAX_TASKS];
    int count = 0;
    int choice;

    do {
        printf("\n--- TO-DO LIST MENU ---\n");
        printf("1. Add Task\n");
        printf("2. Update Task Status\n");
        printf("3. Display Tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(tasks, &count);
                break;
            case 2:
                updateTask(tasks, count);
                break;
            case 3:
                displayTasks(tasks, count);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
}

void addTask(struct Task tasks[], int *count) {
	int MAX_TASKS = 50;
    if (*count >= MAX_TASKS) {
        printf("Task list is full!\n");
        return;
    }

    printf("Enter Task ID: ");
    scanf("%d", &tasks[*count].id);

    printf("Enter Description: ");
    getchar(); 
    fgets(tasks[*count].description, sizeof(tasks[*count].description), stdin);
    tasks[*count].description[strcspn(tasks[*count].description, "\n")] = '\0';

    strcpy(tasks[*count].status, "Pending");

    (*count)++;
    printf("Task added successfully!\n");
}

void updateTask(struct Task tasks[], int count) {
    int id, found = 0;

    printf("Enter Task ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (tasks[i].id == id) {
            printf("Enter new status (Pending/Completed): ");
            scanf("%s", tasks[i].status);
            printf("Task updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Task not found!\n");
    }
}

void displayTasks(struct Task tasks[], int count) {
    if (count == 0) {
        printf("No tasks available.\n");
        return;
    }

    printf("\n--- TASK LIST ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", tasks[i].id);
        printf("Description: %s\n", tasks[i].description);
        printf("Status: %s\n\n", tasks[i].status);
    }
}
