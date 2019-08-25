/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int gcd(int i,int j){
    if(j==0)
    return i;
    else 
    return gcd(j,i%j);
}
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
    printf(" GCD is %d",gcd(n1,n2));

    return 0;
}
