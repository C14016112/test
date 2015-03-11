#include<stdio.h>


int main()
{

    char Name[50]="Yu-Hsun Lee"; 
    int i = 0;
    // Name is a fixed char vecter
    // Name[0], Name[1], Name[2], ..., Name[49] 
    // Name[0]=Y
    // Name[1]=u
    // Name[2]=-
    // Name[3]=H
    // ...
    // Name[11]=\0
    printf( "hellow world!\n" );
    printf( "%d\n" ,2+3 ) ; // %d print an integer 
    printf( "%s\n" ,Name ) ;
    printf( "%c\n" ,Name[5] ); // Name[5] = u
    printf( "%s\n" ,Name+3); 
    printf( "%s\n" ,Name-3); 
    printf( "%u\n" ,Name) ; // Name -> 2686720
    printf( "%u\n" ,Name+3) ; // Name+3 -> 2686723
    // %u print unsigned integer  (positive integer) 
    // %d print integer
    for ( i ; i<50 ; i++)
    {
        printf( "%d:%c-%u\n", i, Name[i], Name[i]) ;
        }
        
        
    system("pause") ;
     return 123 ;
    
}
