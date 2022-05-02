#include"lib.h"
float* funzione(float valori[], int d){
    float* maggiore=0;
    for(int i=0; i<d; i++){
        if(maggiore<valori[i]){
           maggiore=valori[i];
        }
    } return maggiore;
}
