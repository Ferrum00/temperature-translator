#include "incl.h"
#include "add.h"

int main() {
	setlocale (LC_ALL, "RUSSIAN");
	while(true){
		run();
        if (*pRestart == true){
        	continue;
        }
        else if(*pRestart == false){
        	break;
        }
	}while(*pRestart);
    return 0;
}
