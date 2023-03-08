#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000

int main(int argc, char *argv[]) {
    FILE *in_file = stdin;
    FILE *out_file = stdout;
    int rows, cols;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-i") == 0) {
            if (i + 1 < argc) {
                in_file = fopen(argv[i+1], "r");
                if (in_file == NULL) {
                    perror("Unable to open input file");
                    exit(EXIT_FAILURE);
                }
            } else {
                fprintf(stderr, "Missing argument for -i\n");
                exit(EXIT_FAILURE);
            }
        } else if (strcmp(argv[i], "-o") == 0) {
            if (i + 1 < argc) {
                out_file = fopen(argv[i+1], "w");
                if (out_file == NULL) {
                    perror("Unable to open output file");
                    exit(EXIT_FAILURE);
                }
            } else {
                fprintf(stderr, "Missing argument for -o\n");
                exit(EXIT_FAILURE);
            }
        }
    }
    printf("Enter number of rows and columns for multiplication table: ");
    scanf("%d %d", &rows, &cols);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            int result = i * j;
            if (result > MAX_SIZE) {
                fprintf(out_file, "%7s", "X");
            } else {
                fprintf(out_file, "%7d", result);
            }
        }
        fprintf(out_file, "\n");
    }

    if (in_file != stdin) {
        fclose(in_file);
    }
    if (out_file != stdout) {
        fclose(out_file);
    }

    return 0;
}

