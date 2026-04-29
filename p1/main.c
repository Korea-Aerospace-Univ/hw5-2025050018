#include <stdio.h>

int main() {
    int N;
    int i, j, k;
    int found = 0;  

    scanf("%d", &N);

    for(i = 1; i * 900 <= N; i++) {
        for(j = 2; j * 750 <= N; j+=2) { 
            for(k = 1; k * 200 <= N; k++) {

                if(900*i + 750*j + 200*k == N) {

                    if(k < i || k < j) {
                        printf("%d %d %d\n", i, j, k);
                        found = 1;
                    }
                }
            }
        }
    }

    if(found == 0) {
        printf("none\n");
    }

    return 0;
}
