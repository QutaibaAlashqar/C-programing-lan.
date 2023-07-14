#include <stdio.h>
#include <stdlib.h>

int main()
{
    int how_mach, count=0, code, qunt;
    double tot=0.0;
    scanf("%i", &how_mach);
    while (count<how_mach){
        scanf("%i%i", &code, &qunt);
        switch (code){
            case 1:
                tot+=((qunt*25.0)*(40.0/100));
                break;
            case 2:
                tot+=(qunt*17.0);
                break;
            case 3:
                tot+=((qunt*35.0)*(40.0/100));
                break;
            case 4:
                tot+=(qunt*53.0);
                break;
            case 5:
                tot+=(qunt*78.0);
                break;
            case 6:
                tot+=((qunt*45.0)*(40.0/100));
                break;
            case 7:
                tot+=((qunt*97.0)*(40.0/100));
                break;
            case 8:
                tot+=(qunt*87.0);
                break;
            case 9:
                tot+=(qunt*33.0);
                break;
            case 10:
                tot+=((qunt*24.0)*(40.0/100));
                break;
            default:
                printf("invalid code number");
                break;
        }
        count++;
    }
    if (tot < 200){
        float z= (98.0/100);
        double total=tot*(z);
        printf("%.2f", total);
    }
    else if (tot >= 200 && tot < 500){
        float z= (85.0/100);
        double total=tot*(z);
        printf("%.2f", total);
    }
    else if (tot >= 500){
        float z= (75.0/100);
        double total=tot*(z);
        printf("%.2f", total);
    }



    return 0;
}
