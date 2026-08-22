// Design anagram game using array.
//  Allow a user to enter N words and store it in an array.
//  Generate a random number between 0 to N-1.
//  Based on the random number generated display the word stored at that
// index of an array and allow user to enter its anagram.
//  Check whether the word entered by the user is an anagram of displayed
// number or not and display an appropriate message.
//  Given a word A and word B. B is said to be an anagram of A if and only if the
// characters present in B is same as characters present in A, irrespective of
// their sequence. For ex: “LISTEN” == “SILENT”.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void readWords(int totalWords, char wordArray[][20]);
void annagramOrNot(char randomWord[20], char annagramWord[20]);
void sortWords(char word[20]);

void main()
{
    int N;

    printf("How Many Words you want to store in a Word Array : ");
    scanf("%d", &N);

    char wArray[N][20];
    getchar(); // its helps to read first string because of confusion in gets("It thinks you entered first string blank so thats why")
    readWords(N, wArray);

    // generating random number
    //  Seed the random number generator with current time
    srand((unsigned int)time(NULL));

    // Generate a random number between 0 and 100 (inclusive)
    int randomNumber = rand() % (N - 1);
    printf("Your Word is : %s\n", wArray[randomNumber]);
    char annagramWord[20];
    printf("Enter its Anagram : ");
    scanf("%s", annagramWord);

    annagramOrNot(wArray[randomNumber], annagramWord);
}

void readWords(int totalWords, char wordArray[][20])
{
    for (int i = 0; i < totalWords; i++)
    {
        printf("Enter Word %d : ", i + 1);
        gets(&wordArray[i][0]);
    }
}

void annagramOrNot(char randomWord[20], char annagramWord[20])
{
    // first we have to sort both strings thats why we can find annagram through strcmp.
    sortWords(randomWord);
    sortWords(annagramWord);

    if (strcmp(randomWord, annagramWord) == 0)
    {
        printf("Its an Annagram!");
        return;
    }
    else
    {
        printf("Its not an Annagram!");
        return;
    }
}

void sortWords(char word[])
{
    int length = strlen(word);
    char temp;

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (word[j] > word[j + 1])
            {
                temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }
}