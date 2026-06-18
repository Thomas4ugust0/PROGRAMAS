#include <stdio.h>


int main(){
    char  str[] = "20comer100dogabriel";
int a,b;


sscanf(str, "%dcomer%ddogabriel", &a, &b);

printf("%d %d", a, b);

    return 0;
}

