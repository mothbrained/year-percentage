#include <stdio.h>
#include <time.h>

int main(){
    ///// CUSTOMIZE 
    int progressbar_size = 50; // how many hashtags should the progress bar have in total?
    ///// CUSTOMIZE END

    time_t seconds = time(NULL);
    int year = seconds / 31556926 + 1970;
    float percentage = (float)(seconds % 31556926) / 31556926;

    printf("We are %d%% of the way through %d\n[", (int)(percentage * 100), year);

    for (size_t i = 0; i < (int)(percentage * progressbar_size); i++){
        printf("\x1B[32m#");
    }
    printf("\x1B[31m");
    for (size_t i = 0; i < progressbar_size - (int)(percentage * progressbar_size); i++){
        printf("-");
    }
    
    printf("\033[0m]\n");
    
    return 0;
}