#include <stdio.h>
#include <math.h>
#define k 100

int main(){
	
	int coefficient[k];
	int n, i, j, degree, itr, t; 
	float a, b, c, h, funA, funB, funC, e;
		
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
	
	//Calculates the values given in the closed range 
		
	printf("Set the closed range \n");
	scanf("%f %f",&a,&b);

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

	funB = 0;
	for(i = 0; i <= n; i++){
		h = 1;
		for(j = 0; j <= n - i - 1; j++){
			h = h * b;
		}
		h = h * coefficient[i];
		funB = h + funB;
	}
	printf("f(%f)=%f\n", b, funB);
	
	//Checking that the values are appropriate for the method
	
	if(funA * funB > 0)
		printf("There is no value in this range that makes 0.\n");
	else if(funA * funB == 0){
		if(funA==0)
			printf("f(%f) = 0 ", a);
		else
			printf("f(%f) = 0 ", b);	
	}		
		
	/* It calculates the difference between a and b and checks whether it is greater than the given epsilon value.
	 If it is large, it allows the process to be repeated as the new value of y or z. 
	 To determine the stopping point t here, it proceeds in the form of 2^ iterations and the number of iterations is checked.
	*/
	
	else{
		printf("Enter the Epsilon's value = ");
	    scanf("%f", &e);
	    itr = 0;
    	t = 1;
	 	while(fabs((a-b)/t) >= e){
		  	c = (a+b)/2;
    		funC = 0;    
        	for(i = 0; i <= n ; i++){
         		h = 1;
          		for(j = 0; j <= n - i - 1; j++){
        			h = h * c ;
				} 
				h = h*coefficient[i];
				funC = h + funC;
			}
			printf("f(%f) = %f\n", c, funC);
			
			if(funC*funA < 0)
				b = c;
			else		
				a = c;
			t = t * 2;
			itr = itr + 1;
		}
	 	printf("Root = %f \n", c);				
		printf("Count of iteration = %d", itr);
	}		
	
	return 0;
}
	

