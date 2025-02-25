#include <stdio.h>
#include <time.h>

int main(){
    ///// CUSTOMIZE 
    const int progressbar_size = 50; // how many hashtags should the progress bar have in total?
    ///// CUSTOMIZE END

    const time_t seconds = time(NULL);
    const float percentage = (float)(seconds % 31556926) / 31556926;

    printf("We are %d%% of the way through %d\n[\x1B[32m", (int)(percentage * 100), seconds / 31556926 + 1970);
    for (size_t i = 0; i < (int)(percentage * progressbar_size); i++){
        printf("#");
    }
    printf("\x1B[31m"); // red
    for (size_t i = 0; i < progressbar_size - (int)(percentage * progressbar_size); i++){
        printf("-");
    }
    printf("\033[0m]\n"); // none
    
    return 0;
}