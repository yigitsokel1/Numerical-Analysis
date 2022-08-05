#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define K 50

int main(){
	
	float a[K][K], b[K][K];	
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
		if(a[i][i]==0){
		printf("Cannot be 0 on the diagonal please restart and enter different matrix.");
		return 0;
		}
	}	
	
		
	//Print matrix on the screen
	
	printf("Matrix\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%f \t",a[i][j]);
		}
		printf("\n");
	}	
	
	//Creates a unit matrix to matrix b
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i==j)
				b[i][j]=1;
			else
				b[i][j]=0;
		}
	}
	
	//Print Unit Matrix on screen
	
	printf("Unit Matrix \n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%f \t",b[i][j]);
		}
		printf("\n");
	}
	
	//Operations are applied to convert the given matrix to the unit matrix, the same operations are applied to the unit matrix.

	for(i=0; i<n; i++){					
		d=a[i][i];											
		for(j=0; j<n; j++){								
			a[i][j]	 = a[i][j] / d;
			b[i][j]	 = b[i][j] / d;
		}
		for(k=0; k<n; k++){							
			if(k != i){										
				l = a[k][i];								
				for(j=0; j<n;j++){											
					a[k][j]=a[k][j] - (a[i][j]*l);			
					b[k][j]=b[k][j] - (b[i][j]*l);
				}
			}
		}
	}		

	//As a result of the operations we apply to the unit matrix, we obtain the inverse of the given matrix, and the matrix obtained here is reflected on the screen.

	
	printf("Inverse of the Matrix\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%f \t",b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

