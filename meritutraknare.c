#include <stdio.h>

int main() {
    char betyg[] = "FEDCBA";
    int input[6];
    float expo[] = {0, 10, 12.5, 15, 17.5, 20};
    float ans;
    
    for(int i = 0; i < 6; i++)
    {
        printf("How many %c's do you have?\n", betyg[i]);
        scanf("%d", &input[i]);
        ans += input[i] * expo[i];
        
    }
    
    if(ans < 300)
    {
        printf("Practice more because you \"only\" have %.1f points", ans);
    }
    else
    {
        printf("NICE you just entered a good with %.1f points!", ans);
    }
    
    printf("\n\nPress any key to exit\n");
    scanf("%d", &input[0]);
    return 0;

}
