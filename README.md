# Numerical-Analysis

### [Bisection Method](https://byjus.com/maths/bisection-method/#:~:text=The%20bisection%20method%20is%20used,intermediate%20theorem%20for%20continuous%20functions.)
Follow the below procedure to get the solution for the continuous function:

For any continuous function f(x),

Find two points, say a and b such that a < b and f(a)* f(b) < 0
Find the midpoint of a and b, say “t”
t is the root of the given function if f(t) = 0; else follow the next step
Divide the interval [a, b] – If f(t)*f(a) <0, there exist a root between t and a
– else if f(t) *f (b) < 0, there exist a root between t and b
Repeat above three steps until f(t) = 0.
The bisection method is an approximation method to find the roots of the given equation by repeatedly dividing the interval. 
This method will divide the interval until the resulting interval is found, which is extremely small.

### [Gauss-Jordan Elimination Method](https://online.stat.psu.edu/statprogram/reviews/matrix-algebra/gauss-jordan-elimination#:~:text=Gauss-Jordan%20Elimination%20is%20an,rows%20by%20a%20nonzero%20scalar.)
Gauss-Jordan Elimination is an algorithm that can be used to solve systems of linear equations and to find the inverse of any invertible matrix. 
It relies upon three elementary row operations one can use on a matrix:
Swap the positions of two of the rows
Multiply one of the rows by a nonzero scalar.
Add or subtract the scalar multiple of one row to another row.

###### To perform Gauss-Jordan Elimination:
1.Swap the rows so that all rows with all zero entries are on the bottom.

2.Swap the rows so that the row with the largest, leftmost nonzero entry is on top.

3.Multiply the top row by a scalar so that top row's leading entry becomes 1.

4.Add/subtract multiples of the top row to the other rows so that all other entries in the column containing the top row's leading entry are all zero.

5.Repeat steps 2-4 for the next leftmost nonzero entry until all the leading entries are 1.

6.Swap the rows so that the leading entry of each nonzero row is to the right of the leading entry of the row above it.



### [Gauss-Jordan Inverse Method](https://www.geeksforgeeks.org/finding-inverse-of-a-matrix-using-gauss-jordan-method/#:~:text=Gauss-Jordan%20Method%20is%20a,the%20inverse%20of%20a%20matrix.)
Gauss-Jordan Method is a variant of Gaussian elimination in which row reduction operation is performed to find the inverse of a matrix.

##### Steps to find the inverse of a matrix using Gauss-Jordan method:
In order to find the inverse of the matrix following steps need to be followed:  

1.Form the augmented matrix by the identity matrix.

2.Perform the row reduction operation on this augmented matrix to generate a row reduced echelon form of the matrix.

3.The following row operations are performed on augmented matrix when required: 

 -Interchange any two row.
 
 -Multiply each element of row by a non-zero integer.
 
 -Replace a row by the sum of itself and a constant multiple of another row of the matrix.





### [Gauss-Seidel Method](https://en.wikipedia.org/wiki/Gauss–Seidel_method#:~:text=In%20numerical%20linear%20algebra%2C%20the,a%20system%20of%20linear%20equations.)






### [Gregory Newton Interpolation](https://byjus.com/gregory-newton-formula/#:~:text=Gregory%20Newton%27s%20is%20a%20forward,is%20expressed%20by%20%7Bfp%7D.)

Gregory Newton’s is a forward difference formula which is applied to calculate finite difference identity.
Regarding the first value f0 and the power of the forward difference Δ, Gregory Newton’s forward formula gives an interpolated value between the tabulated points.
The interpolated value is expressed by {fp}. By applying the forward difference operator and forward difference table, this method simplifies the calculations involved in the polynomial approximation 
of functions which are called spaced data points.

### [Newton Raphson Method](https://byjus.com/maths/newton-raphson-method/)

The Newton Raphson Method is referred to as one of the most commonly used techniques for finding the roots of given equations.
It can be efficiently generalised to find solutions to a system of equations. Moreover, we can show that when we approach the root,
the method is quadratically convergent. In this article, you will learn how to use the Newton Raphson method to find the roots or solutions of a given equation, 
and the geometric interpretation of this method.





### [Numerical Differentiation](https://en.wikipedia.org/wiki/Numerical_differentiation)







### [Regula-Falsi Method](https://byjus.com/maths/false-position-method/)

In mathematics, an ancient method of solving an equation in one variable is the false position method (method of false position) or regula falsi method.
In simple words, the method is described as the trial and error approach of using “false” or “test” values for the variable and then altering the test value according to the result.
Consider an equation f(x) = 0, which contains only one variable, i.e. x.

To find the real root of the equation f(x) = 0, we consider a sufficiently small interval (a, b) where a < b such that f(a) and f(b) will have opposite signs.
According to the intermediate value theorem, this implies a root lies between a and b.

### [Simpson's Rule](https://byjus.com/maths/simpsons-rule/)

Simpson’s rule is one of the numerical methods which is used to evaluate the definite integral. 
Usually, to find the definite integral, we use the fundamental theorem of calculus, where we have to apply the antiderivative techniques of integration. 
However, sometimes, it isn’t easy to find the antiderivative of an integral, like in Scientific Experiments, where the function has to be determined from the observed readings. 
Therefore, numerical methods are used to approximate the integral in such conditions. 
Other numerical methods used are trapezoidal rule, midpoint rule, left or right approximation using Riemann sums. 

### [Trapezoidal Rule](https://byjus.com/maths/trapezoidal-rule/)

In Calculus, “Trapezoidal Rule” is one of the important integration rules. 
The name trapezoidal is because when the area under the curve is evaluated, then the total area is divided into small trapezoids instead of rectangles. 
This rule is used for approximating the definite integrals where it uses the linear approximations of the functions.

The trapezoidal rule is mostly used in the numerical analysis process. 
To evaluate the definite integrals, we can also use Riemann Sums, where we use small rectangles to evaluate the area under the curve.

### References
-https://online.stat.psu.edu
-https://www.geeksforgeeks.org
-https://byjus.com
-https://en.wikipedia.org
