#include "msh.h"

void main(int argc, char *argv[]) {
    initShell();
    int interactive_flag = 1;
    FILE *input = stdin;

    if (argc == 2) {
        interactive_flag = 0;
        input = fopen(argv[1], "r");
        if (input == NULL) {
            perror("[ERROR] Can't open batch file, terminating.");
            exit(EXIT_FAILURE);
        }
    }

    if (argc > 2) {
        perror("[ERROR] Usage: msh [batch-file], terminating.");
        exit(EXIT_FAILURE);
    }

    while (1) {
        prompt(interactive_flag);
    }
}

void initShell() {
    printf("^oxo^\n");
    printf("marvin shell");
    printf("use ./msh help for general shell usage and marvin interface cmds");
}

void prompt(int interactive_flag) {
    if (interactive_flag == 1) {
        printf("\nmsh> ");
        fflush(stdout); 
    }
}

