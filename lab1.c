#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y,z,count=0;
    scanf("%d%d%d",&x,&y,&z);
    while (count<3){
        if ((x>y) && (x>z)&& (count==0)){
            printf("%d ",x);
        }
        else if ((y>x) && (y>z) && (count==0)){
            printf("%d ",y);
        }
        else if ((z>x) && (z>y)&& (count==0)){
            printf("%d ",z);
        }
        else if ((x>y) && (x<z) && (count==1)){
            printf("%d ",x);
        }
        else if ((y>x) && (y<z) && (count==1)){
            printf("%d ",y);
        }
        else if ((z>x) && (z<y) && (count==1)){
            printf("%d ",z);
        }
         else if ((x<y)&&(x<z) && (count==2)){
            printf("%d ",x);
        }
         else if ((y<x)&&(y<z) && (count==2)){
            printf("%d ",y);
        }
         else if ((z<x)&&(z<y) && (count==2)){
            printf("%d ",z);
        }

        count++;
    }






    return 0;
}
