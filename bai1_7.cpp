#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, S, p;
	printf ( "\n Nhap canh a = " );
    scanf ( "%f", &a);
    
    printf ( "\n Nhap canh b = " );
    scanf ( "%f", &b);
    
    printf ( "\n Nhap canh c = " );
    scanf ( "%f", &c);
    
    p = (a+b+c)/2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
 
    printf ("\np = %f\ndien tich tam giac S = %f", p, S);
    return 0;
}
