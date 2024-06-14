#include <stdio.h>
int main(){
	FILE *file;
	char line[100];
	file = fopen("output.txt","w");
	if(file==NULL){
		printf("Error opening file! \n");
		return 1;
	}
	printf("Enter aline of text: ");
	fgets(line, sizeof(line),stdin);
	fputs(line,file);
	fclose(file);
	printf("Line written to file succesfully.\n");
	return 0;
}
