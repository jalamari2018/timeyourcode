#include <time.h>
#include <sys/time.h>
#ifdef __cplusplus
extern "C" {
#endif

// my struct
typedef struct __stopwatch_t{
    struct timeval begin;
    struct timeval end;
}stopwatch;


// my functions declarations
void stopwatch_start(stopwatch *sw);

void stopwatch_stop (stopwatch *sw);

double get_interval_by_sec(stopwatch *sw);

int get_interval_by_usec(stopwatch *sw);

#ifdef __cplusplus
}
#endif
