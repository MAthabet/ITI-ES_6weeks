#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define Numbre_of_Candidates 4
#define Max_String_Char 50

struct candidate
{
    char candidateName[Max_String_Char];
    uint64_t voteCount;
};

struct candidate candidates[Numbre_of_Candidates + 1] = //add one for spoiled votes
{
    {.candidateName = "Spoiled Votes", .voteCount = 0},
    {.candidateName = "Ahmed", .voteCount = 0},
    {.candidateName = "omar", .voteCount = 0},
    {.candidateName = "hasn", .voteCount = 0},
    {.candidateName = "zaki", .voteCount = 0}
};

uint16_t userInput; //???

void showStartMessage();
void showCandidatesList();
void voteCast();
void showVoteCount();
void sort(uint64_t arr[Numbre_of_Candidates]);
const char* findCandidateWithVotes(uint64_t Votes);
void showLeadingCandidate();

int main()
{

    while(1)
    {
        showStartMessage();
        line: 
        scanf("%d", &userInput);
        switch(userInput)
        {
            case 0:
                printf("Exiting...");
                return 0;
                break;

            case 1:
                voteCast();
                break;
            
            case 2:
                showVoteCount();
                break;
            
            case 3:
                showLeadingCandidate();
                break;

            default: 
                printf("Please enter a valid number between (0-3) : ");
                goto line;
                break;
        }
    }

    return 0;
}

void showStartMessage()
{
    printf("###### Welcome to Election System ######\n\n");
    printf("1- Cast the vote\n");
    printf("2- Find vote count\n");
    printf("3- Find leading candidate\n");
    printf("0- Exit\n\n");
    printf("Please enter your Choice (0-3) : ");
    return;
}

void showCandidatesList()
{   uint8_t i;
    for(i = 1; i <= Numbre_of_Candidates; i++)
    {
        printf("%d. %s\n", i, candidates[i].candidateName);
    }
    printf("0. None of This\n"); //to spoil vote
    return;
}

void voteCast()
{
    uint8_t input;
    printf("### Please choose your Candidate ###\n\n");
    showCandidatesList();
    printf("\nInput your Choice (0-%d) : ", Numbre_of_Candidates);
    scanf("%d", &input);
    while(input < 0 || input > Numbre_of_Candidates)
    {
        printf("Enter a valid candidate number (0-%d) : ", Numbre_of_Candidates);
        scanf("%d", &input);
    }
    candidates[input].voteCount++;
    printf("thanks for voting!!\n\n");
    uint8_t pause = 1;
    while(pause)
    {
        printf("Press 0 to get back to main menu");
        scanf("%d", &pause);
    }
    return;
}

void showVoteCount()
{
    printf("### Voting Statistics ###\n\n");
    uint8_t i;

    for(i = 1; i <= Numbre_of_Candidates; i++)
    {
        printf(" %s - %d\n", candidates[i].candidateName, candidates[i].voteCount);
    }
    printf(" Spoiled votes - %d\n\n", candidates[0].voteCount);
    uint8_t pause = 1;
    while(pause)
    {
        printf("Press 0 to get back to main menu ");
        scanf("%d", &pause);
    }
    return;    
}

void sort(uint64_t arr[Numbre_of_Candidates])
{   uint8_t i, j;
    for(i = 0; i <= Numbre_of_Candidates; i++)
    {
        for(j = i + 1; j <= Numbre_of_Candidates; j++)
        {
            if(arr[i] < arr[j])
            {
                uint64_t temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

const char* findCandidateWithVotes(uint64_t Votes)
{
    for(uint8_t i = 1; i <= Numbre_of_Candidates; i++)
    {
        if (candidates[i].voteCount == Votes)
        return candidates[i].candidateName;
    }
}
void showLeadingCandidate()
{
    uint64_t arr[Numbre_of_Candidates];
    uint8_t i;

    for(i = 0; i <= Numbre_of_Candidates; i++)
    {
        arr[i] = candidates[i].voteCount;
    }
    sort(arr);
    printf("Leading candidate is %s with %d votes\n", findCandidateWithVotes(arr[0]), arr[0]);
    uint8_t pause = 1;
    while(pause)
    {
        printf("Press 0 to get back to main menu ");
        scanf("%d", &pause);
    }
    return;
}

