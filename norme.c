#include <stdio.h>
 
int main()
{
 
#if defined (__STDC__)
 #if defined (__STDC_VERSION__)
  #if __STDC_VERSION__ == 199409L
   printf ("C95\n");
  #elif __STDC_VERSION__ == 199901L
   printf ("C99\n");
  #endif
 #else
   printf ("C90 or C99 in C90 mode\n");
 #endif
#else
   printf ("K&R or non conforming mode\n");
#endif
   return 0;
}
