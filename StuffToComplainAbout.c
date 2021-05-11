#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 


void safe_strcpy(char *dest, size_t destlen, const char *src, size_t slen) { 
        if ( destlen ) {
              memset(dest, 0, destlen); 
              destlen--; 
              if ( destlen && slen) { 
                     for (; (destlen) && (slen) && (*src) ; destlen--, slen--, src++, dest++) { 
                           *dest = *src; 
                     } 
              } 
        } 
} 

void NotSafeStrcpy( char *dest, size_t destlen, const char *src, size_t slen ) { 
         strcpy(dest, src); 
}

