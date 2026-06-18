#include <stdio.h>

int main() {
    int c;
    int i = 0;

    while ((c = getchar()) != EOF) {
        if (c == 'o') {
            i++;
        }
    }

    printf("%d\n",  i);
    return 0;
}
