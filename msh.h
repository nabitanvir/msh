#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define MAXINPUT 1024

void initShell();
void prompt(int interactive_flag);