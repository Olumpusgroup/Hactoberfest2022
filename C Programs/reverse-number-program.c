
#include <stdio.h>

int main() {
    int number, remainder1,remainder2,remainder3,remainder4,remainder5,quotient1,quotient2,quotient3,quotient4;
    printf("Enter a 5 digit number:" );
    scanf("%d",&number);
    remainder1 = (number % 10)*10000;
    quotient1 = number/10; 
    
    remainder2 = (quotient1%10*1000);
    quotient2 = quotient1/10;
    
    remainder3 = (quotient2%10)*100;
    quotient3 = quotient2/10;
    
    remainder4 = (quotient3%10)*10;
    quotient4 = quotient3/10;
    
    remainder5 = quotient4%10;
    
    
    printf( "the sum of number is %d\n ", remainder1+remainder2+remainder3+remainder4+remainder5 );

      return 0;
}
