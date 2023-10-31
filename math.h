#include "incl.h"


int gradus, normal1 = 32, normal2 = -273.15;
float FR = 1.8, KL = 273.15, RES, T;
char ap;

float *pT = &T;
float *pKL = &KL;
float *pFR = &FR;
int *pGradus = &gradus;
float *pR = &RES;
char *pA = &ap;

float check(char *sym){
    switch (*sym) {
        case '1':
        	T = FR * *pGradus;
            return RES = normal1 + T;
            break;
        case '2':;
            return RES = KL + *pGradus;
            break;
    }
    return 0;
}

