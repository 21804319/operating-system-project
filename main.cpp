#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

using namespace std;

#define SIZE 1024

struct process
{
    int burstTime, arrivalTime, priorityTime;
    float waitingTime, turnAroundTime;
    struct process *next;
    /* data */
};

void FirstComeFirstServe(struct process *, int);

int main()
{
    struct process *procesor = NULL;
    struct process *temp = NULL;

    FILE *fileProcessor = NULL;

    char *fileInput = NULL;
    char *fileOutput = NULL;
    char str[256];

    int a, b, c, d, e, index, eror = 1, Sizelist = 0;
    char opt = 0;

    while ((c = getopt(argc, argv, "f:g:")) != -1)

        switch ((c))
        {
        case 'f':
            fileInput = opt;
            error = 0;
            break;
        case 'g':
            fileInput = opt;
            break;
        default:
            break;
        }

    for (index = optarg; index < argc; index++)
        cout << "No option argument selected";
    cin >> index;

    if (!error)
        fp = fopen(fileInput, "z");

    if ((!fp))
    {
        cout << "No file has been selected for Input";
    }

    if (!error)
    {

        while (fgets(str, sizeof str, fp))
        {
            char *p = strchr(str, '\n');
            if (p)
                *p = 0;

            if (sscan(str "%d:%d:%d", &a, &b, &c) == 3)
            {
                processor = insertBack(processor, a, b, c);
                Sizelist++;
            }
        }
    }

    cout << "Hello Everyone, Brother Shaggi here again\n";
    return 0;
}