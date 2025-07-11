/* Write a C program to generate following series using function:
  
  sum= 1+x/1! + x^2/2! + x^3/3! +.........+ x^n/n!     */
  
  #include <stdio.h>
  int power(int,int);
  int fact(int);
  void main(){
  	int i,x,n;
  	float sum=0,p,f;
  	printf("Enter the value of n:");
  	scanf("%d",&n);
  	printf("Enter the value of x:");
  	scanf("%d",&x);
  	for(i=0;i<=n;i++){
  		p=power(x,i);
  		f=fact(i);
  		sum=sum+p/f;
		  }
  		printf("Sum = %.2f",sum);
}
	int power(int x,int i){
		if(i==0)
		return 1;
		else
		return(x*power(x,i-1));	//C doesn't support power() instead it only support pow(,) math function. here power function is user defined function which has been called by main function.
	}
	 int fact(int i){
	 	if(i==0)
	 	return 1;
	 	else
	 	return(i*fact(i-1));
	 	
	 }
  
  