#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SIMULATIONS 1000000000  
#define REPORT_INTERVAL 10000000    

int main() {
    int i;
    int count_inside = 0;
    double x, y, pi_estimate;

    srand(time(NULL));

    for (i = 1; i <= NUM_SIMULATIONS; i++) {

        x = (double)rand() / RAND_MAX * 2.0 - 1.0;
        y = (double)rand() / RAND_MAX * 2.0 - 1.0;


        if (x * x + y * y <= 1.0) {
            count_inside++;
        }


        if (i % REPORT_INTERVAL == 0) {
            pi_estimate = 4.0 * count_inside / i;
            printf("진행 상황: %d회 중 %d회 완료\n", NUM_SIMULATIONS, i);
            printf("계산된 원주율 값: %f\n", pi_estimate);
        }
    }


    pi_estimate = 4.0 * count_inside / NUM_SIMULATIONS;
    printf("최종 결과: %d회 중 %d회 완료\n", NUM_SIMULATIONS, NUM_SIMULATIONS);
    printf("계산된 원주율 값: %f\n", pi_estimate);

    return 0;
}