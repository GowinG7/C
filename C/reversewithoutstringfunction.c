//WAP to print the reverse of the given program without using string function.

#include <stdio.h>
void main(){
	int i,length;
	char a[30];
	printf("Enter the string:");
	fgets(a,sizeof(a),stdin);
	printf("The input string is:%s\n",a);
	for(length=0;a[length]!='\0';length++);
	for(i=length-1;i>=0;i--){
		printf("%c",a[i]);
	}
}