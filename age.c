#include<stdio.h>
int main(){
    int age_1,age_2,age_3;
    printf("The program compares age\n");
    printf("Enter ages of 3 people");
    scanf("%d%d%d",&age_1,&age_2,&age_3); //multiple input in one line

    if(age_1 <age_2 && age_1<age_3){
        printf(" First person's age is the least");
    }
    else if (age_2 <age_1 && age_2<age_3)
    {
    printf("second person's age is the least");
    }
    else if (age_3 <age_1 && age_3<age_2)
    {
        printf("third person's age is the least");
    }
    else{
        printf("All are equal");
    }
    return 0;
    
}