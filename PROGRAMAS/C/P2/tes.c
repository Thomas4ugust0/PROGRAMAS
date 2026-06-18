#include <stdio.h>

int main() {
    int k, j, maior = 0;

    scanf("%d", &k);
    char str[k+1];

    for (j = 0; j < k; j++){
        scanf("%s", str);

        int i = 0;
        while (str[i] != '\0') {
            i++;
        }

        if (i > maior) {
            maior = i;
        }else{
            maior=maior;
        }
    }

    printf("%d\n", maior);

    return 0;
}
