#include <stdio.h>
#include <math.h>
#define k 100

int main(){

	
	int coefficient[k];
	int n, i, j, degree, itr; 
	float a, b, h, funA, funB, derA, derB, e, t;
	
	//Getting the information to write the equation

	printf("Enter the largest power degree of the equation = ");
	scanf("%d", &n);
	
	degree = n;
	for(i = 0; i <= n; i++){
		printf("Enter the coefficient of the %d.degree variable = ", degree);
		scanf("%d", &coefficient[i]);
		degree--;
	}
	
	//Print equation on screen
		
	degree = n;
	for(i = 0; i <= n - 1; i++){
		printf("%dx^%d + ",coefficient[i],degree);
		degree--;
	}
	
	printf("%dx^%d\n",coefficient[n],0);
	
	
	/*Calculates function and derivative for initial value */
		
	printf("Enter the initial value\n");
	scanf("%f",&a);

	funA = 0;
	for(i = 0; i <= n; i++){
		h = 1;
		for(j = 0; j <= n - i - 1; j++){
			h = h * a;
		}
		h = h * coefficient[i];
		funA = h + funA;
	}
	printf("f(%f)=%f\n", a, funA);

	derA = 0;
	for(i = 0; i <= n-1; i++){
		h = 1;
		for(j = 0; j <= n - i - 2; j++){
			h = h * a;
		}
		h = h * coefficient[i];
		derA = h + derA;
	}
	printf("f'(%f)=%f\n", a, derA);
	
	printf("Enter the value of epsilon = ");
	scanf("%f", &e);
	        
	/*A new value is obtained over a and derivative and function calculations are made over that value.
	It goes into the loop. It means that the value diverges after the number of iterations exceeds a certain number.
	*/
		
		
	itr = 0;
    t = funA / derA;
    b = a - t;
	while(fabs(t) >= e){
    	funB = 0;
    	for(i = 0; i <= n; i++){
       		h = 1;
       		for(j = 0; j <= n - i - 1; j++){
       			h = h * b;
			} 
	    	h = h * coefficient[i];
	    	funB = h + funB;
	 	}
		derB = 0;
		for(i = 0; i <= n - 1; i++){
			h = 1;
			for(j = 0; j <= n -i - 2; j++){
				h = h * b;
			}
			h = h*coefficient[i]*(n - i);
			derB = h + derB;
		}
				
		printf("f(%f) = %f\n", b, funB);
		
		t = funB / derB;
		a = b - t;
		b = a;
		itr = itr + 1;
		if(itr > 10){
			printf("Given value diverges.\n");
			return 0;
		}
	}
		 					
		
	printf("Root = %f \n", b);				
	printf("Count of iteration = %d", itr);
					
	return 0;
}
	

