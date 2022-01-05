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
struct process *frontInsert(struct process *, int, int, int);
struct process *backInsert(struct process *, int, int, int);
struct process *afterInsert(struct process *, int, int, int);
void set_nth_process_waitingTime(struct process *, int, float);

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

    do
    {
        cout << "*******CPU SCHEDULER OPTIONS********\n";
        cout << "1. None\n";
        cout << "2. First Come, First Served Scheduling\n";
        cout << "3. Shortest-Job-First Scheduling\n";
        cout << "4. Priority Scheduling\n";
        cout << "5. Round-Robin Scheduling\n";
        cout << "6. Show Result\n";
        cout << "7. End Program\n\n";
        cout << "Please select an option to continue";
        cin >> v;

        switch (v)
        {
        case 1:
            cout << "You have %v processes";

            for (temp = processor; temp != NULL; temp = temp->next)
            {
                cin >>
            }

            break;

        case 2:
            cout << "Shortest Job First Scheduling Method selected\n";

        case 3:
            cout << "Pririty Scheduling Method selected\n";

        case 4:
            cout << "Round-Robin Scheduling Method selected\n";

        default:
            cout << "Please select a valid option\n";
            getchR();
            break;
        }
    } while (v != 5);

    return 0;
}

void FirstComeFirstServe(
    struct process *header, int size
    {
        int i = 2;
        set_nth_process_waitingTime(header, 1, 0);

        for (i = 2; i < size; i++)
        {
            set_nth_process_waitingTime(header, a)
        }
    })

    void set_nth_process_waitingTime(
        struct process *header, int position, float value
        {
            int a = 1;
            struct process *temp;
            for (temp = header; temp != NULL; temp = temp->next)
            {
                if (a == position)
                    temp->waitingTime = value;
                i++
            }
        };)

        int isEmpty(struct process *header)
{
    if (header == NULL)
        return 1;
    else
        return 0;
}

struct process *newProcess(int a, int b, int c)
{
    struct process *temp;
    temp = (struct process *)malloc(sizeof(struct process));
    temp->burstTime = a;
    temp->arrivalTime = b;
    temp->priorityTime = c;
    return temp;
}

struct process *frontInsert(struct process *header, int a, int b, int c)
{
    struct process *temp;
    temp = newProcess(a, b, c);
    temp->next = header;
    header = temp;
    return header;
}

struct process *backInsert(struct process *header, int a, int b, int c)
{
    struct process *temp, *headerTemp
                              temp = newProcess(a, b, c);
    if (header == NULL)
    {
        header = temp;
        return header;
    }
    headerTemp = header;

    while (headerTemp->next != NULL)
    {
        headerTemp = headerTemp->next;
        headerTemp->next = temp;
        return header;
    }
}

struct process *afterInsert(struct process *afterNode, int a, int b, int c)
{
    struct process *temp;
    temp = newProcess(a, b, c);
    temp->next = afterNode->next;
    afterNode->next = temp;
}