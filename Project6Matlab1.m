%%
% Name: Davis Foster
% Assignment: 1
% Section: 2
%

%Q1(a)
format long
exp(14)
ans =
1.202604284164777e+06
382801 * pi
ans =
     1.202604809386826e+06
%382801*pi is bigger exp(14)

%Q1(b)
2709 / 1024
ans =
 	  2.645507812500000
10583 / 4000
ans =
 	  2.645750000000000
2024 / 765
ans =
  	  2.645751633986928
sqrt(7)
ans =
   	2.645751311064591
%2024/765 is the closest to sqrt(7)

%Q2
syms x y z 
[solx, soly, solz] = solve(3*x + 4*y + 5*z == 2, 2*x - 3*y + 7*z == -1, x - 6*y + z == 3) 
solx =
241/92
 soly =
-21/92
 solz =
 	-91/92
 
%Q2 Matrix

syms x y z
eqns = [ 3*x + 4*y + 5*z == 2, 2*x - 3*y + 7*z == -1, x - 6*y + z == 3]
Solo = solve(eqns)
sol = [Solo.x; Solo.y; Solo.z] 
sol = 
 241/92
 	 -21/92
 -91/92
 
%Q3
syms x y
factor (x^4 - y^4)
ans = (sym) 
[ x - y, x + y, x^2 + y^2]
 
%Q4(a)
syms x
simplify ( 1 / ( 1 + 1 / (1 + (1 / x ))))
ans =
 	(x + 1)/(2*x + 1)
 
%Q4(b)
syms x
simplify (cos(x)^2 - sin(x)^2)
ans = (sym)
	cos(2*x)
 
%Q5(a)
syms x
solve(67*x + 32 == 0, x) 
ans = 
-32/67

format long 
single(ans)
ans =
 -0.477611940298507

%Q5(c)
syms x p q 
solve(x^3 + p*x + q == 0, x)
 ans =
 
 RootOf(z^3 + p*z + q, z)[1]
 	 RootOf(z^3 + p*z + q, z)[2]
 RootOf(z^3 + p*z + q, z)[3]
 
%Q5(d)
syms x
solve(exp(x) == 8*x - 4,x)
ans =
- lambertW(0, -exp(1/2)/8) + 1/2
 
%Q6(a)
syms x
diff(6*x^3 - 5*x^2 + 2*x -3)
 ans =
 	18*x^2 - 10*x + 2

%Q6(b)
syms x
diff((2*x - 1)/(x^2 + 1))
 ans =
 	2/(x^2 + 1) - (2*x*(2*x - 1))/(x^2 + 1)^2
 simplify(ans)
 ans =
 	(2*(- x^2 + x + 1))/(x^2 + 1)^2
 
%Q6(c)
syms x
diff(sin(3*x^2 + 2))
ans =
 	6*x*cos(3*x^2 + 2)

%Q6(d)
syms x
diff(sqrt(1 + x^4))
ans =
 	(2*x^3)/(x^4 + 1)^(1/2)
 
%Q6(e)
syms r x
diff(x^r)
ans =
 	r*x^(r - 1)
 
%Q7(a)
syms x
int(cos(x), 0, pi/2)
 ans =
1
 
%Q7(b)
syms x
int(x*sin(x^2))
ans =
 	-cos(x^2)/2
diff(ans)
ans = 
x*sin(x^2)
 
%Q7(c)
syms x
int(sin(3*x)*sqrt(1 - cos(3*x)))
ans =
(2*(1 - cos(3*x))^(3/2))/9
diff(ans)
ans =
 	sin(3*x)*(1 - cos(3*x))^(1/2)
 
%Q7(d)
syms x
int((x^2)*sqrt(x+4))
ans =
 	-(2*(x + 4)^(3/2)*(168*x - 15*(x + 4)^2 + 112))/105 
diff(ans)
ans =
x^2*sqrt(x+4)
%Q7(e)
syms x
int(exp(-x^2), -inf, inf)
ans =
 	pi^(1/2)
diary off
save assignment1


