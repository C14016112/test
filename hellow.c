#include <stdio.h>
#include <math.h> // cos 
int main()
{
    printf ( "hellow world!\n" );
   
    printf( "%d\n" ,2+3 ) ; // %d print an integer 
    printf( "%5.5f\n" , 1.2+3.4) ; // %f printf a float
    printf( "%.16f\n", cos(2.0*M_PI/3.0)) ; // print a cos function 
    system("pause") ;
     return 123 ;
    
}
