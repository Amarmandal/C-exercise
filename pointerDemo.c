#include <stdio.h>

int main( )
{
    long int arr[ ] = { 10, 20, 30, 45, 67, 56, 74 } ;
    long int *i, *j ;
    i = &arr[1] ;
    j = &arr[5] ;
    printf ( "%ld %ld\n", j - i, *j - *i ) ;
}

