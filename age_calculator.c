#include <stdio.h>
#include <stdlib.h>


int main()
{
    int currentyear;
    int yearofbirth;
    int age;
    
    
    
    printf("This programs aims at calculating current age of visitors, therefore fill in the details below\n\n");
    
    printf("Enter current year\n");
    scanf(" %d", &currentyear);
    
    printf("Enter year of birth \n");
    scanf(" %d", &yearofbirth);
    
    age = currentyear-yearofbirth;
    
    printf("Your current age = %d \n", age);
    
    if(age <= 30){
    	printf("you are still a baby, so dont make troubles \n");
    	}else{
    	printf("You are now and adult, think and act responsibly \n");
    	}
    
   
    return 0;
}