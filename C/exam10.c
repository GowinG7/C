/*Create a structure named BOOK with members ISBN, Title, author and price. 
     Use this structure to read records of 3 books and
    display the record of book having highest and lowest price.*/
    
 #include <stdio.h>
 void main(){
 struct Book{
 	int ISBN;
 	float price;
 	char title[20];
 	char author[20];
 };
 struct Book bk[3];
 int i;
 float highest,lowest;
 for(i=0;i<3;i++){
 	printf("Enter the ISBN, Title, author and price of the book:\n");
 scanf("%d %s %s %f",&bk[i].ISBN,bk[i].title,bk[i].author,&bk[i].price);
}
lowest=bk[0].price;
highest=bk[0].price;
for(i=1;i<3;i++){
	if(lowest>bk[i].price)
	lowest=bk[i].price;
	if(highest<bk[i].price)
	highest=bk[i].price;
}
printf("\nhighest price is %f.",highest);
printf("\nlowest price is %f.",lowest);
printf("\n The book details i.e.\tISBN,\ttitle,\tauthor,\tprice with the highest price is:");
for(i=0;i<3;i++){
	if(bk[i].price==highest)
	printf("%d %s %s %f",bk[i].ISBN,bk[i].title,bk[i].author,bk[i].price);
}
printf("\n The book details i.e.\tISBN,\ttitle,\tauthor,\tprice with the lowest price is:");
for(i=0;i<3;i++){
	if(bk[i].price==lowest)
	printf("%d %s %s %f",bk[i].ISBN,bk[i].title,bk[i].author,bk[i].price);
}
}
