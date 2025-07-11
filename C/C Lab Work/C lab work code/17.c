//  Menu driven program 
#include <stdio.h>
void main(){
	int x,i,n;
	int sum=0, rev=0;
	int rem,num; 	// for palindrome we need rev=0,num,rem		// for case 2 rev for case 3.Things to be noted: inside case only statement is used and can initialize or declare.
	again:
	printf("\n 1.To check given number is odd or even.");
	printf("\n 2.To find sum of first n natural number ");
	printf("\n 3. To check given number is palindrome or not.");
	printf("\n 4. To Exit all this program.");
	printf("\n \tPlease enter your choice:");
	scanf("%d",&x);
	switch(x){
		case 1:
			printf("\nEnter a positve number <0:");
			scanf("%d",&n);
			if(n%2==0)
			printf("Given number %d is even.\n",n);
			else
			printf("Given number %d is odd.\n",n);
			goto again;
			break;
	    case 2:
			printf("\nEnter the natural number upto which you need sum(As it start form 1):");
	    	scanf("%d",&n);
	    	for(i=1;i<=n;i++){
	    		sum=sum+i;
			}
			printf("The total sum of natural number from 1 to %d is %d.\n",n,sum);
			goto again; 
			break;
		case 3:
			printf("\nEnter a number:");
			scanf("%d",&n);
			num=n;
			while(n>0)
			{
				rem=n%10;
				rev=rev*10+rem;
				n=n/10;
			}
			if(num==rev)
			printf("%d is palindrome.\n",num);
			else
			printf("%d isn't palindrome.\n",num);
		    goto again;
		    break;
		case 4:
			printf("\nThank you!");
			break;
		default:
			printf("\nInvalid choice.\n");
		goto again;
		
	}
	
}