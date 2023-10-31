#include "incl.h"
#include "math.h"

using namespace std;

bool restart = false;
bool *pRestart = &restart;

char input;
char *pInput = &input;

void run(){
	cout << "\nEnter your degree in Celsius: \n";
	cin >> *pGradus;
	cout << "\nEnter translation option [1 Fahrenheit] [2 Kelvin]:   \n";
	cin >> *pA;
	cout << "answer:  " << check(pA) << endl;
    cout <<"\nDo you want to restart the calculator? [y/n]:   ";
    cin >> pInput;


    if(*pInput == 'y'){
        *pRestart = true;
    }else if(*pInput == 'n'){
        *pRestart = false;
    }
}
