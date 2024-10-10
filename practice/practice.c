# include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 9
bool hello(int a){
    if (a==1){
        return true;
    }
    return false;
}
bool vote(char name);
typedef struct
{
    char name;
    int votes;
}
can;

can candidates[MAX];
int candidate_count;

int main(int argc, char argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    //setting candidate_count to no of arguments - 1
    candidate_count = argc - 1;

    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %d\n", MAX);
        return 2;
    }
    //getting all the names given in the arguments into the candidates variable
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }
    int voter_count;
    printf("Number of Voters: ");
    scanf("%d", &voter_count);
    for (int i = 0; i < voter_count; i++)
    {
        char name; 
        printf("Vote: ");
        scanf("%c", &name);
        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

     return 0;
}

bool vote(char name)
{
    for(int i = 0; i<candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name))
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}
