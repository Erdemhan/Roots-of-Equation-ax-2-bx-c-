#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// This program finds roots of ax^2+bx+c (only real number roots)

int main (void){
	
	printf("This Program finds roots of ax^2+bx+c (Only real number roots)\n\n");
	
		double a,b,c,delt,deltq,root1,root2;
			
	printf("Please enter the 'a' \n");		scanf("%lf",&a);
	printf("Please enter the 'b' \n");		scanf("%lf",&b);
	printf("Please enter the 'c' \n");		scanf("%lf",&c);

		delt=(b*b-4*a*c);
	
	if(delt<0){
	printf("There is no real number root\n"); 
	}
	else if(delt==0){	
	root1=(-b+sqrt(delt))/(2*a);
	printf("There are double roots: %.10lf\n",root1);
	}
	else{
	root1=(-b+sqrt(delt))/(2*a);
	root2=(-b-sqrt(delt))/(2*a);
	printf("There are two roots: %.10lf , %.10lf\n",root1,root2);
	}
	
	system("PAUSE");
	
	
}
