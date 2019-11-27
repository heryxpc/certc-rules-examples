#include <stdio.h>
#define ABS(x) (((x) < 0) ? -(x) : (x))

int func(int n) {
  /* Validate that n is within the desired range */
  int m = ABS(++n);
  return m;
  /* ... */
}

int main( int argc, const char* argv[] )
{
    int numok = ABS(-5);
    int numnotok = func(-6);
	printf( "\nAbsolute of -5 = %d\n\n",  numok);
    printf( "\nAbsolute of ++(-6) = %d\n\n",  numnotok);
}
