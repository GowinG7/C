/*Write a program to read line of text from user and count number of vowels, consonants, 
spaces and digits.*/

#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int spaces=0,vowel=0,digits=0,consonant=0,i;
printf("Enter a text:\n");
fgets(str,sizeof(str),stdin);
strlwr(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='a'&&str[i]<='z')
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
vowel++;
else
consonant++;
}
if(str[i]>='0'&&str[i]<='9')
digits++;
if(str[i]==32)
spaces++;
}
printf("vowels =%d\nconsonant=%d\ndigits=%d\nSpaces=%d",vowel,consonant,digits,spaces);
}
