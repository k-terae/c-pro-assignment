#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	int a;
	if(argc==2)a = atoi(argv[1]);
	else
	while(a<1){
		fprintf(stdout,"input number >>");
		fscanf(stdin,"%d",&a);
	}
	if(a%(3*5*7)==0)fprintf(stdout,"公倍数\n");
	else fprintf(stdout,"公倍数ではない\n");
	return EXIT_SUCCESS;
}
