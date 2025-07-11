// delete and rename fileno

#include <stdio.h>
void main(){
FILE *fp;
fp=fopen("oldfile.txt","w");
         remove("oldfile.txt");
          rename("oldfile.txt","newfile.txt");
}

