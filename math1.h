#ifndef MATH_H
#define MATH_H
/*power function*/
int pow(int x , int y){
	 if(y<0)      
        return 1 / pow (x,-y)
      else if(y==0)
        return 1;
      else if(y==1)
        return x;
      else
        return x*MyPow(x,y-1)
}
/*sine function*/
double float sin(float x){
	int i, j;
	double sin;
	for(i=0,j=0;i<20;i=i+2,j++)
	{
		sin+=pow(-1,j)*pow(x,i+1)/f(i+1);
	}
	return sin;
}
/*cosine function*/
double float cos(x){
	int i, j;
	double cos;
	for(i=2,j=1;i<20;i=i+2,j++)
	{
		cos+=pow(-1,j)*pow(x,i)/f(i);
	}
	return cos;
}
/*tangent function*/
double float tan(float x){
	double a;
	if(cos(a)!=0){
		a = sin(a)/cos(a) ;
	}
	else{
		printf("tan(%f) is not defined", &x)
	}
	return a;
}
/*cot function*/
double float cot(float x){
	float a;
	if(sin(a)!=0){
		a = cos(a)/sin(a) ;
	}
	else{
		printf("cot(%f) is not defined", &x)
	}
	return a;
}
/*sec function*/
double float sec(float x){
	double a;
	if(cos(a)!=0){
		a = 1/cos(a) ;
	}
	else{
		printf("sec(%f) is not defined", &x)
	}
	return a;
}
/*cosec function*/
double float cosec(float x){
	double a;
	if(sin(a)!=0){
		a = 1/sin(a) ;
	}
	else{
		printf("cosec(%f) is not defined", &x)
	}
	return a;
}
/*exponential function*/
float exp(float x, int y)
{
    float temp;
    if( y == 0)
       return 1;
    temp = power(x, y/2);       
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}
/*logarithmic function*/
#define ALMOSTZERO 0.0000000000000000001
double ln(double x)
{
    double sum = 0.0;
    double xmlxpl = (x - 1) / (x + 1);
    double denom = 1.0;
    double frac = xmlxpl;
    double term = frac / denom;

    while (term > ALMOSTZERO)
    {
        sum += term;
        //generate next term
        denom += 2.0;
        frac = frac * xmlxpl * xmlxpl;
        term = frac / denom;
    }
    return 2.0 * sum;
}
/*log10 function*/
#define LN10 2.3025850929940456840179914546844
double log(double x){
	double a;
	a = (LN10)*ln(x);
}
/*squareroot function*/
double squrt(double x){
	float i,j;
	j=0.0001;
	for(i=0;i<x;i=i+j)
	{
		if((i*i)>x)
		{
			i=i-j;
			break;
		}
	}
}
/*floor function
* floor gives nearest integer less than 
* or equal to the number entered */
int floor(float x){
	int j;
	j=x%1;
	return j;
}
/* Idexp function
* returne value of x*2^exp */
#define EXP 2.71828
#define SB 6.58087765047
double Idexp(x){
	return x*SB;
}
/*celi function
* celi gives nearest integer greater than 
* or equal to the number entered */
int floor(float x){
	int j;
	j=x%1;
	return j+1;
}
/*fmod function 
* fmod function returns the value of 
* remainder when x is divided by y */
double fmod(double x, double y){
	int j;
	j=x%y;
	return j;
}
#endif
