#include<stdio.h>

main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,z;
	    printf("enter value of a=");
	    scanf("%d",&a);
		printf("enter value of b=");
	    scanf("%d",&b);
		printf("enter value of c=");
	    scanf("%d",&c);
		printf("enter value of d=");
    	scanf("%d",&d);
		printf("enter value of e=");
	    scanf("%d",&e);
		printf("enter value of f=");
	    scanf("%d",&f);
		printf("enter value of g=");
	    scanf("%d",&g);
		printf("enter value of h=");
	    scanf("%d",&h);
		printf("enter value of i=");
	    scanf("%d",&i);
		printf("enter value of j=");
	    scanf("%d",&j);
	    printf("enter value of k=");
	    scanf("%d",&k);
		printf("enter value of l=");
	    scanf("%d",&l);
	
	printf("a january");
	printf("\n b february/n");
	printf("\n c march");
	printf("\n d april");
	printf("\n e may");
	printf("\n f june");
	printf("\n g july");
	printf("\n h august ");
	printf("\n i september");
	printf("\n j october");
	printf("\n k november");
	printf("\n l december");
	printf("chose eny namber if above");
	scanf("%d",&z);
	
	switch(z)
	{
		
		case 1 :
		      printf("january of a=%d",&a);
		      break;
		case 2:
		      printf("february of b=%d",&b);
		      break;
	   	case 3:
		      printf("march of c=%d",&c);
		      break;
	   	case 4:
		      printf("april of d=%d",&d);
		      break;
     	case 5:
		      printf("may of e=%d",&e);
		      break;
      	case 6:
		      printf("jun  of f=%d",&f);
		      break;
      	case 7:
		      printf("july of g=%d",&g);
		      break;
      	case 8:
		      printf("august of h=%d",&h);
		      break;
     	case 9:
		      printf("september of i=%d",&i);
		      break;
		case 10:
		      printf("octoner of j=%d",&j);
		      break;
		case 11:
		      printf("november of k=%d",&k);
		      break;
		case 12:
		      printf("december of l=%d",&l);
		      break;
		default:
	       	printf("plz enter valid choice");
		      
	}
	
	
}
