#include <stdio.h>

int main() {
    int motion_detected = 0; 
    int light_on = 0;

    printf("Enter motion status (0 = no motion, 1 = motion): ");
    scanf("%d", &motion_detected);

    if (motion_detected == 1) {
        light_on = 1;
        printf("Motion detected! Light is ON.\n");
    } else {
        light_on = 0;
        printf("No motion. Light is OFF.\n");
    }

    return 0;
}
