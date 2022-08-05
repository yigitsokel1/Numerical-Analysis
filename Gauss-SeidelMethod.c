#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define K 50

int main(){

	float a[K][K], c[K], x[K], b[K];
	float e , l, eps, initialValue;
	int i, j, n, count;
	
	//Get size of matrix and define values	
	
	printf("Enter the size of square matrix = ");
	scanf("%d", &n);
	
	printf("Enter the coefficients of the matrix on the diagonal with the maximum multiplied by the absolute value.\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Matrix[%d][%d] = ",i+1,j+1);
			scanf("%f",&a[i][j]);
		} 
	}
	
	//Get results of equations
	
	for(i=0; i<n; i++){
		printf("Result of %d.equation = ", i+1);
		scanf("%f", &c[i]);
	}
	
	//Print matrix on the screen

	printf("Matrix\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%fx%d \t",a[i][j], j+1);
		}
		printf("\n");
	}
	
	printf("What is the first value for variables = ");
	scanf("%f", &initialValue);
	
	//Retrieves the initial value given for the initial values ??of the variables

	for(i=0; i<n; i++)
		x[i]=initialValue;
		
	//Get value of epsilon	
	
	printf("Enter the value of epsilon = ");
	scanf("%f", &e);
	
	/*First, it takes a high epsilon value and processes it and defines the equations.
	Then it substitutes values ??for the equations one after the other and performs calculations.
	When it is less than or equal to Epsilon, the loop ends and prints it to the screen.
	At the same time, the count number increases by one each time the loop ends. This also keeps the number of iterations
	*/
	
	count = 0;
	eps=1000;			
	while(fabs(eps) >= e){
		for(i=0; i<n; i++){
			b[i]=x[i];	
			l = 0;
			for(j=0; j<n; j++){
				l = a[i][j]*x[j] + l;
				}
			l = l - a[i][i]*x[i];
			x[i] = (c[i] - l)/a[i][i];
			eps = x[i] - b[i];
			}
		count++;
			for(i=0; i<n; i++){
		printf("x%d = %f\n",i+1,x[i]);
		}
	}
		
	//Print last values of the variable on screen
	
	for(i=0; i<n; i++){
		printf("x%d = %f\n",i+1,x[i]);
	}
	
	//Print count of iteration on screen
			
	printf("Count of iteration = %d", count);
	
	return 0;
}
