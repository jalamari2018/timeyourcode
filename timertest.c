#include <stdio.h>
#include <stdlib.h> 
#include "timer.h" 

int main(int argc , int **argv){
     stopwatch sw; 
     stopwatch_start(&sw);

// your code starts here 



// your code ends here
     stopwatch_stop(&sw); 

     
    long tus = get_interval_by_usec(&sw); 
    double ts = get_interval_by_sec(&sw); 
    printf("your code took %ld us to finish \n", tus);
    printf("your code  took %lf seconds to finish\n", ts); 

    return 0; 
}