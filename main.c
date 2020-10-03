#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("tell me the pass word.\n");
    scanf("%d",&number);
    switch(number){
    case 123456:{
        printf("Correct password.\n");
        break;
    }
    default:
        printf("invalid.\n");
    return 0;
}
}
