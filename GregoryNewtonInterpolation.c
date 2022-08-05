#include <stdio.h>
#include <math.h>
#define K 50


int main()
{
	int n, i, j, degree;
	float x0, h, x, sum, fact, var, summary;
	float a[K], forDif[K][K], value[K];
	
	printf("Enter how many x values = ");
	scanf("%d", &n);
	
	printf("Enter the initial value(x0) = ");
	scanf("%f", &value[0]);
	
	printf("Enter the difference between values(h) = ");
	scanf("%f", &h);
	
	for(i = 0; i<n; i++){
		value[i] = value[0] + i*h;
	}
	
	for(i = 0; i<n; i++){
		printf("f(%f) = ", value[i]);
		scanf("%f", &a[i]);
		
	}
	
	for(i=0; i<n; i++){
			forDif[i][0] = a[i];
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			forDif[j+1][i+1] =forDif[j+1][i]-forDif[j][i];
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(j > i){
				forDif[i][j] = 0;
			}
		}
	}
	
	i=0;
	j=0;
	while(i < n){
		if(forDif[i][j] == 0)
			i++;
		else
			j++;
	}
	degree = j;
	
	printf("Enter the desired value(x) = ");
	scanf("%f", &x);
	
	
	summary = 0;
	for(i=0;i<degree;i++){
		if(i==0)
			fact = 1;
		else{
			fact = 1;
			for(j=1; j<=i; j++)
				fact = j * fact;
		}
		sum = forDif[i][i]/ fact;
		
		var=1;
		if(i>0){
			for(j=0; j<i;j++)
				var = var * (x - value[j])/h;	
		}
		
		summary = var * sum + summary;	
	}
			
	printf("f(%f) = %f", x, summary);
	return 0;
	
}
