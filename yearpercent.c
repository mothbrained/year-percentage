#include <stdio.h>
#include <time.h>

int main(){
    time_t seconds = time(NULL);
    printf("We are %d%% through %d\n", 
        (int)(((float)(seconds % 31556926) / 31556926) * 100), // percentage
        seconds / 31556926 + 1970); // year
    return 0;
}
