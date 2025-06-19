#include <stdint.h>
#define LAMP_PORT (*(volatile uint8_t *)0xF0)
void delay() {
 volatile uint8_t counter = 255;
 while (counter != 0) {
 counter--;
 }
}
int main() {
 while (1) {

 LAMP_PORT = 0x01; 
 delay(); 
 LAMP_PORT = 0x00; 
 delay(); 
 }
 return 0; 
}