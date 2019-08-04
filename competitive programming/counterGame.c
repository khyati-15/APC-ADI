char* counterGame(long n) {
    char    *a="Richard";
    char    *b="Louise";
    int count=0;
    while(n>1)
    {
            count++;
    if(!(n & n-1))
        n=n/2;
    else
    {
        long sq=1;
        while(n)
        {
            sq=sq*2;
            if(sq>n)
            {
                sq/=2;
                   //     printf("%ld",sq);
                break;
            }
        }
        n=n-sq;
    }
    if(n==1)
    break;
    }
    if(count%2==0)
    return  a;
    else
    return  b;
}


int main(){
	long n;
	printf("Enter initial value of n : " );
	scanf("%ld",&n);
	char *result=counterGame(n);
	printf("%s",result);
}