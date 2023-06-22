#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(FILE *source, FILE *destination, int option) {
    char c;

    while ((c = fgetc(source)) != EOF) {
        switch (option) {
            case 1:
                c = toupper(c);
                break;
            case 2:
                c = tolower(c);
                break;
            case 3:
                if (islower(c))
                    c = toupper(c);
                break;
            default:
                break;
        }

        fputc(c, destination);
    }
}

int main(int argc, char *argv[]) {
    FILE *source, *destination;
    int option = 0;

    if (argc < 3) {
        printf("Usage: %s <source_file> <destination_file> [option]\n", argv[0]);
        printf("Options:\n");
        printf(" -u: Change file content to Upper Case\n");
        printf(" -l: Change file content to Lower Case\n");
        printf(" -s: Change file content to Purely Upper Case\n");
        return 1;
    }

    source = fopen(argv[1], "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    destination = fopen(argv[2], "w");
    if (destination == NULL) {
        printf("Error creating destination file.\n");
        fclose(source);
        return 1;
    }

    if (argc > 3) {
        if (argv[3][0] == '-') {
            switch (argv[3][1]) {
                case 'u':
                    option = 1;
                    break;
                case 'l':
                    option = 2;
                    break;
                case 's':
                    option = 3;
                    break;
                default:
                    printf("Invalid option.\n");
                    fclose(source);
                    fclose(destination);
                    return 1;
            }
        } else {
            printf("Invalid option.\n");
            fclose(source);
            fclose(destination);
            return 1;
        }
    }

    copyFile(source, destination, option);

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
