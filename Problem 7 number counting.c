
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, j;
    
    long input;
    scanf("%d",&a);
    
    for(j=1; j<=a; j++) {

        char line[100000];
        
        
        scanf(" %[^\n]", &line);
        int count = 0;
        char *p, *e;
        
        p= line;


        for (p=line; ; p=e ) {
            input = strtol(p, &e, 10);
            if(p==e) {

                break ;
            }
            count++;

        }
        printf("%d\n", count);


    }


    return 0;
}
