// WAP in C to write some text till user press ctrl+z to a file named test.txt.

#include <stdio.h>
void main(){
	FILE *fp;
	char my[100];
	fp=fopen("test.txt","w");
	printf("Enter text:\n");
	while(fgets(my,sizeof(my),stdin)!=NULL){
		fputs(my,fp);
	}
	fclose(fp);
	printf("Text are stored in text.txt successfully.");
}
/*
#include <stdio.h>

int main() {
    FILE *fp;
    char input[100];

    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter text (press Ctrl+Z on Windows or Ctrl+D on Unix/Linux to finish):\n");

    // Read input until Ctrl+Z (Ctrl+D) is pressed
    while (fgets(input, sizeof(input), stdin) != NULL) {
        // Write the input to the file
        fputs(input, fp);
    }

    fclose(fp);
    printf("Text written to test.txt.\n");

    return 0;
}
*/