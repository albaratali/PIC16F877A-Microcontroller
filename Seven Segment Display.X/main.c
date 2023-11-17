/*
 * File:   main.c
 * Author: faizan
 *
 * Created on November 17, 2023, 7:38 AM
 */

#include  "PIC16F877A.h"
#define _XTAL_FREQ      20000000
static void init_config(void) {
    // write your initialization code here
    TRISC=0x00;
    PORTC=0x00;
   
}

void display()
{
    int i ;
    for(i=0;i<10;i++)
    {
        PORTC=i;
        __delay_ms(1000);
    }
}


void main(void) {
    init_config(); // calling initializing function
    while (1) {
        // write application code here
        display();
    }

}
