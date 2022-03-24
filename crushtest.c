#include <stdio.h>
#include <stdlib.h>


int main()
{
    char firstname[20];
    char lastname[20];
    char crush[20];
    int numberofkids;

    printf("What is your  First name \n");
    scanf("%s", firstname);

    printf("What is your Last name \n");
    scanf("%s", lastname);

    printf("Who will you want to get married to? \n");
    scanf("%s", crush);

    printf("How many kids do you want to have? \n");
    scanf("%d", &numberofkids);

    printf("My names are %s %s, my crush is %s. I hope we get married someday and have %d kids", firstname, lastname, crush, numberofkids);
    return 0;
}