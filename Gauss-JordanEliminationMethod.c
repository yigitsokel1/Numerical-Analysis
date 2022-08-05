#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define K 50

int main(){
	
	float a[K][K], c[K], x[K];	
	int n, i, j, k;
	float  l, d; 	
		
	//Get size of matrix and define values
	
	printf("Enter the size of square matrix = ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Matrix[%d][%d] = ",i+1,j+1);
			scanf("%f",&a[i][j]);
		} 
	}
	
	//Get the results of the equations
	
	for(i=0; i<n; i++){
		printf("Enter the result of the %d. equation = ", i+1);
		scanf("%f", &c[i]);
	}

	//Print matrix on the screen

	printf("Matrix\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%f \t",a[i][j]);
		}
		printf("\n");
	}

	
	/*It applies operations that convert the given matrix to the upper triangular matrix. 
	By applying the same operations to the results of the equations, it provides the equality with the equations.
	*/
	
	for(i=0; i<n; i++){					
		d=a[i][i];											
		for(j=0; j<n; j++){									
			a[i][j]	 = a[i][j] / d;
		}
		c[i] = c[i] / d;
		
		for(k=0; k<n; k++){							
			if(k > i){											
				l = a[k][i];								
				for(j=0; j<n;j++){											
					a[k][j]=a[k][j] - (a[i][j]*l);	
					
				}
				c[k]=c[k]- (c[i]*l);
			}
		}
	}	
	
	//Print Triangular Matrix on screen
	
	printf("Triangular Matrix\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%f \t",a[i][j]);
		}
		printf("\n");
	}
	
	//Print equation results
	
	for(i=0; i<n; i++){
		printf("Result of %d.equation = %f \n", i+1, c[i]);
	}

	//Calculating roots backwards
	
	for(i=n-1; i>=0; i--){
			l = 0;
		for(j=i+1; j<n; j++){
			l =	l + a[i][j]*x[j];
		}
		x[i] =	(c[i] - l) / a[i][i];
	}
	
	//Print roots
	
	for(i=0; i<n; i++){
		printf("x%d = %f\n", i+1,x[i]);
	}
}

