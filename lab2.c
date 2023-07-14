#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(y==1 || y==3 || y==5 || y==7 || y==8 || y==10 || y==12){
        if (z!=31){
            printf("%i %i %i",x,y,z+1);
        }
        else if (z==31 && y!=12){
            printf("%i %i %i",x,y+1,1);
        }
        else{
            printf("%i %i %i",x+1,1,1);
        }
    }
    else if(y==4 || y==6 || y==9 || y==7 || y==11){
        if (z!=31){
            printf("%i %i %i",x,y,z+1);
        }
        else if(z==30){
            printf("%i %i %i",x,y+1,1);
        }
    }
    else if (y==2){
        if(x%4==0){
           if (z!=28){
            printf("%i %i %i",x,y,z+1);
           }
           else if(z==28){
              printf("%i %i %i",x,y+1,1);
           }
        }
        else{
            if (z!=29){
               printf("%i %i %i",x,y,z+1);
            }
            else if (z==29){
               printf("%i %i %i",x,y+1,1);
            }
        }
    }




    return 0;
}
