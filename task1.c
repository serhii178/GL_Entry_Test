#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
    int n, k, steps =0;
    if(argc!=3){
        printf("You should enter two arguments\n");
        return -1;
    }
    else {
        n = atoi(argv[1]);
        k = atoi(argv[2]);

        if(!n||(!k && k!=0)) {
            printf("Both n and k should be numbers\n");
            return -1;
        }
        else if(n<1||k<0) {
            printf("Arguments should be n>=1 and k>=0\n");
            return -1;
        }

        while (n>0) {
            steps++;
            n-=1+k;
        }
        printf("%d\n",steps);
    }

    return 0;
}