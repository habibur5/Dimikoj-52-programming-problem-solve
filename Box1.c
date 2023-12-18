#include<stdio.h>

int main() {
    int T, i, N, j, k;

    scanf("%d", &T);

    for(i=1 ; i<= T ; i++) {

        scanf("%d", &N);


        for(j=1; j<=(N); j++) {

            for(k=1 ; k<=N; k++) {
                printf("*");
            }

            printf("\n");

        }
        printf("\n");


    }
    return 0;

}
