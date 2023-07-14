#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numberofdays(int, int, int);
int main()
{
    int sallery, exsit, first;
    scanf("%i%i%i", &sallery, &exsit ,&first);
    int result = numberofdays(sallery, exsit, first);
    printf("%i", result);
    return 0;
}
int numberofdays(int price, int existing, int start){
    int pacc = price - existing;
    int count = 0, count2=0, count3=1, main_count=0;
    int res=0, res2=0, number=start;
    while (count != -1){
        while (count2<7){
            res2 += number;
            number+=1;
            count2++;
            main_count++;
            if (res2>=pacc){
                count=-1;
                break;
            }
        }
        number=0;
        number = count3 + start;
        count2=0;
        count3++;
        //res+=res2;
        if (res2>=pacc){
            count=-1;
            break;
        }
    }
    return count3;
}
