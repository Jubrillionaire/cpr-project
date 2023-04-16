#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"


void tokenizing(void) {
// V1
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


    // V2
    printf("*** Start of Tokenizing Phrases Demo ***\n");

    char   phrases[BUFFER_SIZE];
    char* nextPhrase = NULL;
    int    phrasesCounter;
    do {
        printf("Type a few phrases separated by comma (q to quit):\n");

       //Input is read from the userand stored in the phrases buffer
        fgets(phrases, BUFFER_SIZE, stdin);

        // Remove the newline character from the input
        phrases[strlen(phrases) - 1] = '\0';

        // Check if the user has entered 'q' to quit the program
        if ((strcmp(phrases, "q") != 0)) {

        // Tokenize the input string, separating it by commas
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;

            // Start a while loop to process each token (phrase) in the input
            while (nextPhrase) {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);

                // Get the next token (phrase) from the input
                nextPhrase = strtok(NULL, ",");

            }
        }
    }
            // Continue looping until the user enters 'q'
            while (strcmp(phrases, "q") != 0);

            printf("*** End of Tokenizing Phrases Demo **** **\n\n");


            // V3
            printf("*** Start of Tokenizing Sentences Demo ***\n");
            char sentences[BUFFER_SIZE];
            char* nextSentence = NULL;
            int  sentencesCounter;
#
            // Loop until user enters "q"
            do {

                // Prompt user for sentences
                printf("Type a few sentences separated by dot (q to quit):\n");

                //Read the input from user
                fgets(sentences, BUFFER_SIZE, stdin);
                sentences[strlen(sentences) - 1] = '\0';

                if ((strcmp(sentences, "q") != 0)) {
                    //Tokenize the first sentence
                    nextSentence = strtok(sentences, ".");
                    sentencesCounter = 1;
              
                        //Loop through all the sentences
                        while (nextSentence) {

                            //Print the current sentence and it's number
                            printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                            nextSentence = strtok(NULL, ".");

                        }
                    }
                }
                while (strcmp(sentences, "q") != 0);
                //Print closing message
                printf("*** End of Tokenizing Sentences Demo ***\ **\n\n");
            

        }
  



