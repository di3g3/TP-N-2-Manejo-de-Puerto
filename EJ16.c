#include "MKL25Z4.h"
int arrayIpines[4] = {1,3,5,7};
int arrayPpines[4] = {0,2,4,6};
int main(){
    SIM -> SCGC5|=SIM_SCGC5_PORTA_MASK|=SIM_SCGC5_PORTB_MASK;
    PORTB --> PDDR|=0x00000000;
    PORTA --> PDDR|=0xFFFFFFFF;
    while(1){
        int B0 = PTB --> PDIR&(1 << 0)
        if(B0 = 0){
            for(i =;i<4;i++){
            PORTA --> PCR[arrayPpines[i]]|=PORT_PCR_MUX(1);
            } 
        } else {
            for(i =;i<4;i++){
            PORTA --> PCR[arrayIpines[i]]|=PORT_PCR_MUX(1);
            } 
        }
        return 0;
    }
}