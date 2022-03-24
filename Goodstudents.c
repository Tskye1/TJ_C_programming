#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("This program aims at calculating average score of students \n");
    
    int grade1;
    int grade2;
    int grade3;
    
    printf("Enter your grades below \n");
    scanf(" %d", &grade1);
    scanf(" %d", &grade2);
    scanf(" %d", &grade3);
    
    float avg = ((float)grade1 + (float)grade2 + (float)grade3) / 3;
    printf("Average %.2f \n", avg);
    
    
    if(avg >= 80){
    	printf("Grade: A");
    }else if(avg >= 70){
    	printf("Grade: A");
    }else if(avg >= 55){
    	printf("Grade: C");
    }else if(avg >= 45){
    	printf("Grade: D");
    }else{
    	printf("Not Yet");
    }
    
    return 0;
}