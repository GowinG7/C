// To delete file

#include <stdio.h>
void main(){
FILE *fp;
remove("destination.txt");
if(fp==0)
    printf("File deleted successfully.");
    else
        perror("Error deleting file.");
}
