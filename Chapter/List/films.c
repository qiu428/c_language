#include <stdlib.h>
#include <stdio.h>
#include "List.h"
void showmovies(Item item);
char *s_gets(char *st, int n);
int main(void)
{
    List moives;
    Item temp;
    InitializeList(&moives);
    if (ListIsFull(&moives))
    {
        fprintf(stderr, "No memory available !Bye!\n");
        exit(1);
    }
    puts("Enter first movie title:");
    while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
    {
        puts("Enter your rating <0~10>:");
        scanf("%d", temp.rating);
        while (getchar() != '\n')
            continue;
        if (AddItem(temp, &moives) == false)
        {
            fprintf(stderr, "Problem allocating memory\n");
            break;
        }
        if (ListIsFull(&moives))
        {
            puts("The list is now full.");
            break;
        }
        puts("Enter first movie title:(enter line to stop):");
    }

    if (ListIsFull(&moives))
        printf("No data entered");
    else
    {
        printf("Here is the movie list:\n");
        Traverse(&moives, showmovies);
    }
    printf("You entered %d movies.\n", ListItemCount(&moives));
    EmptyTheList(&moives);
    printf("Bye!\n");

    return 0;
}

void showmovies(Item item)
{
    printf("Movie: %s Rating: %d\n", item.title, item.rating);
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
