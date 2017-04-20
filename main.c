#include "wifiscan.h"
#include <stdio.h>
#include <unistd.h>		// sleep function is defined there
#include <stdlib.h>

int main(void){
	while(1){
		system(CMD);
		// open "scan.txt" file to read data, and visualize it
		read_data();
		sleep(5);
	}
}
