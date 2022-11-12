#include <cs50.h>
#include <string.h>
#include <stdio.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name="jeff";
    people[0].number="999";

    people[1].name="john";
    people[1].number="995";

    for (int i =0; i<2; i++)
    {
        if (strcmp(people[i].name, "jeff")==0)
        {
            printf("Found %s\n",people[i].number);
            return 0;
        }
    }
    printf ("NOT FOUND\n");
}