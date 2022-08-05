#include <stdio.h>
#include <math.h>
#define SIZE 100

int main(){


	int coefficient[SIZE];
	int n,i, j, k, degree, piece; 
	float upperBound, lowerBound, fun, h, sumOdd, sumEven, x, sum;
	float  y[SIZE];
	
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
	
	//Gets required values for Simpson’s Rule
	
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
	
	//Collects even values in one place and odd values in one place
	
	sumEven=0;
	sumOdd=0;
	for(k=1; k<=piece-1; k++){
		if(k % 2 == 0)
			sumEven = y[k] + sumEven;
			
		else
			sumOdd = y[k] + sumOdd;	
	}
	
	//Applying the general formula of Simpson’s Rule
	
	sum = (4 * sumOdd) + (2 * sumEven) + y[0] + y[piece];
	sum = sum * (h / 3);
	
	//Print result on screen
	
	printf("The result of the integral with Simpson’s Rule= %f", sum);
	return 0;
	
}
