#include <stdio.h>
#include <math.h>
#define k 100

int main(){


	int coefficient[k];
	int n, i, j, degree; 
	float a, h, funA, forwardFun, backFun, forwardDer, backDer, centralDer, x;
	
	//Getting the information to write the equation	

	printf("Enter the largest power degree of the equation =  ");
	scanf("%d", &n);
	
	degree = n;
	for(i = 0; i <= n; i++){
		printf("Enter the coefficient of the %d.degree variable = ", degree);
		scanf("%d", &coefficient[i]);
		degree--;
	}
	
	//Print equation on the screen
	
	degree = n;
	for(i = 0; i <= n - 1; i++){
		printf("%dx^%d + ",coefficient[i],degree);
		degree--;
	}
	
	printf("%dx^%d\n",coefficient[n],0);
	
	//The derivative of the equation wants its value
	
	printf("Enter the value you want to derive : ");
	scanf("%f", &a);
	
	//Ask for the difference to calculate the back difference and forward difference
	
	printf("Enter the difference between values(h) = ");
	scanf("%f", &h);
	
	//Calculating the value of the equation for the given

	funA = 0;
	for(i = 0; i <= n; i++){
		x = 1;
		for(j = 0; j <= n - i - 1; j++){
			x = x * a;
		}
		x = x * coefficient[i];
		funA = x + funA;
	}
	
	//Calculates the values given value
	
	forwardFun = 0;
	for(i = 0; i <= n; i++){
		x = 1;
		for(j = 0; j <= n - i - 1; j++){
			x = x * (a + h);
		}
		x = x * coefficient[i];
		forwardFun = x + forwardFun;
	}
	
	//Calculates the value of the equation by subtracting h from the given value
	
	backFun = 0;
	for(i = 0; i <= n; i++){
		x = 1;
		for(j = 0; j <= n - i - 1; j++){
			x = x * (a - h);
		}
		x = x * coefficient[i];
		backFun = x + backFun;
	}
	
	//Calculating variants of derivatives using calculated values.

	backDer = (funA - backFun) / h;
	forwardDer = (forwardFun - funA) / h;
	centralDer = (forwardFun - backFun) / (2*h);
	
	//Calculated derivatives are printed on the screen
	
	printf("Numeric derivative with back differences = %f\n", backDer);
	printf("Numeric derivative with forward differences = %f\n", forwardDer);
	printf("Numerical derivative with central differences = %f\n", centralDer);
	
	return 0;
}
	

