#include <stdio.h>
#include <stdlib.h>

int fin(int,int ,int ,int ,int);
int main()
{
    int a,b,c,d,f;
    scanf("%i%i%i%i%i", &a, &b, &c, &d, &f);
    fin(a, b, c, d, f);

    return 0;
}

int fin(int a, int b, int c, int d, int f){
    int x;
    int counter=0;
    while (x=getchar()!='.'){
        switch(x){
            case 'a':
                counter++;
                break;
            case 'e':
                counter++;
                break;
            case 'i':
                counter++;
                break;
            case 'u':
                counter++;
                break;
            case 'o':
                counter++;
                break;
            default:
                break;
        }
    }
    if (counter==5)
        printf("T");
    else{
        printf("F");
    }
}
