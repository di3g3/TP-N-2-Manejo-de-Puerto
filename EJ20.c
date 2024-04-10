#include "MKL25Z4.h"
int array1pines[2] = {0, 1};
int array2pines[2] = {2, 3};
int array3pines[2] = {4, 5};
int array4pines[2] = {6, 7};
int main(){
    SIM -> SCGC5|=SIM_SCGC5_PORTA_MASK|=SIM_SCGC5_PORTB_MASK;
    PORTB --> PDDR|=0x00000000;
    PORTA --> PDDR|=0xFFFFFFFF;
    while(1){
        int B0 = PTB --> PDIR&(1 << 0);
        int B1 = PTB --> PDIR&(1 << 1);
        int B2 = PTB --> PDIR&(1 << 2);
        int B3 = PTB --> PDIR&(1 << 3);
        if(B0 = 1){
            PORTA --> PCR[array1pines[0]]|=PORT_PCR_MUX(1);
            PORTA --> PCR[array1pines[1]]|=PORT_PCR_MUX(1);
        if(B1 = 1){
            PORTA --> PCR[array1pines[2]]|=PORT_PCR_MUX(1);
            PORTA --> PCR[array1pines[3]]|=PORT_PCR_MUX(1);
        if(B2 = 1){
            PORTA --> PCR[array1pines[4]]|=PORT_PCR_MUX(1);
            PORTA --> PCR[array1pines[5]]|=PORT_PCR_MUX(1);
        if(B3 = 1){
            PORTA --> PCR[array1pines[6]]|=PORT_PCR_MUX(1);
            PORTA --> PCR[array1pines[7]]|=PORT_PCR_MUX(1); 
        return 0;
    }
}