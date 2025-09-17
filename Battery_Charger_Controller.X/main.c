/*
 * File:   main.c
 * Author: ricar
 *
 * Created on September 12, 2025, 3:42 PM
 */


#include "xc.h"

int main(void) {
    ANSAbits.ANSA0 = 0;
    LATAbits.LATA0 = 1;
    TRISAbits.TRISA0 = 0;
    return 0;
}
