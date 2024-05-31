#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	// iterate through an array
	for(int i=0;i<10;i++){
		fprintf(stdout,"%d\n",arr[i]);
	}
	// exit
	exit(0);

}
