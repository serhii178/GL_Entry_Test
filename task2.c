#include <stdlib.h>
#include <stdio.h>


int main(int argc, char** argv){
    int n, d, cables_length =0;
    if(argc!=3){
        printf("You should enter two arguments\n");
        return -1;
    }
    else {
        n = atoi(argv[1]);
        d = atoi(argv[2]);

        if((!n && n!=0)||(!d && d!=0)) {
            printf("Both n and d should be numbers\n");
            return -1;
        }
        else if(n<0||d<0) {
            printf("Arguments should be n>=0 and d>=0\n");
            return -1;
        }
//Here we have arithmetic progression and need to find it's sum
//a1=d, so S=d*n*(n+1)/2

        cables_length=d*n*(n+1)>>1;  //bit shift == /2

        printf("%d\n",cables_length);
    }

    return 0;
}

