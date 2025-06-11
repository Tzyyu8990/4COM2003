#include <stdio.h>
#include <unistd.h> // For sleep() function on UNIX systems

int main() {
    int sensor_value;
    int threshold = 50;
    int device_on;

    for (int i = 0; i < 5; i++) { // Simulate 5 monitoring cycles
        printf("Enter sensor value (0-100): ");
        scanf("%d", &sensor_value);

        if (sensor_value > threshold) {
            device_on = 1;
            printf("Sensor value %d > %d: Device is ON.\n", sensor_value, threshold);
        } else {
            device_on = 0;
            printf("Sensor value %d <= %d: Device is OFF.\n", sensor_value, threshold);
        }

        sleep(1); // Delay to simulate real-time monitoring
    }

    return 0;
}