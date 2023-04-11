#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

// V1
void tokenizing(void) {
    printf("*** Start of Tokenizing Words Demo ***\n");

    char  words[BUFFER_SIZE];
    char* nextWord = NULL;
    int   wordsCounter;

    //  The loop gets user input and tokenizes it
    do {
        //  Input is requested from the user
        printf("Type a few words separated by space (q - to quit):\n");

        //  Newline characters are removed from input
        fgets(words, BUFFER_SIZE, stdin);
        words[strlen(words) - 1] = '\0';

        // Check that the input is not a |"q" command
        if (strcmp(words, "q") != 0) {

            // Input is tokenized by using strtok
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            while (nextWord) {
                // Display word counts and the next word
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);


    printf("*** End of Tokenizing Words Demo ***\n\n");
}
