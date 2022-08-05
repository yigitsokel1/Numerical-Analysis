#include <stdio.h>
#include <math.h>
#define SIZE 100

int main(){


	int coefficient[SIZE];
	int n,i, j, k, degree, piece; 
	float upperBound, lowerBound, fun, h, sum, x;
	float  y[SIZE];
	
	//Getting the information to write the equation		

	printf("Enter the largest power degree of the equation = ");
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
	
	//Gets required values for Trapezoidal Rule
	
	printf("Enter the upper bound of the equation = ");
	scanf("%f", &upperBound);
	
	printf("Enter the lower bound of the equation = ");
	scanf("%f", &lowerBound);
	
	printf("Specify the number of intervals (must be even) = ");
	scanf("%d", &piece);
	
	// Gets the height of each rectangle
	
	h = (upperBound - lowerBound) / piece;
		
	//Transfers the values to be processed to an array in order
	
	for(k=0; k <= piece; k++){
		y[k] = lowerBound + k * h;
	}
	
	/*It finds the f(x)s by putting them in the function in turn and throws them back into the same array*/	
	
	for(k=0; k<=piece; k++){
		fun = 0;
		for(i = 0; i <= n; i++){
			x = 1;
			for(j = 0; j <= n - i - 1; j++){
				x = x * y[k];
			}
			x = x * coefficient[i];
			fun = x + fun;
		}
		y[k] = fun;
	}
	
	//Summing up all the values in order
	//It takes half for the first and last values
	
	sum=0;
	for(k=0; k<=piece; k++){
		sum = sum + y[k];
	}
	
	sum = sum - (y[0] / 2);
	sum = sum - (y[piece] / 2);
	
	//Multiply the sum by the height of each trapezoid to find the result
	
	sum = sum * h;

	//Print result on screen
	
	printf("The result of the integral with Trapezoidal Rule= %f", sum);
		
}
