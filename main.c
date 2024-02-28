#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Input age:\n");
    scanf("%d", &age);
    if(age >= 18){
        printf("You are old enough to vote.");
    }
    else{
        printf("You are a minor and cannot vote.\n");
    }
    return 0;
}

