#include <stdio.h>

int main(void) {
	float b;
	int a;
	scanf("%d%f",&a,&b);
  
	
	    if(b>a)
	    {
            if(a%5==0)
            {
	        b=b-a;
            b=b-0.5;
            }
	    }
	    else
	    {
	        b=b;
	    }
	   
	
	 printf("%.2f",b);
	return 0;
}

