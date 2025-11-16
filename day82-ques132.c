#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light = RED;
    
    printf("Traffic Light Status:\n");

    for (int i = RED; i <= GREEN; i++) {
        light = i;
        printf("Value %d: ", light);
        
        if (light == RED) {
            printf("Stop\n");
        } else if (light == YELLOW) {
            printf("Wait\n");
        } else if (light == GREEN) {
            printf("Go\n");
        }
    }

    return 0;
}