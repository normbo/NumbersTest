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

int main() { 
            
        char chTemp[900]; 
        char chTemp2[2]; 
        char chTemp3[200]; 
        
        NotSafeStrcpy(chTemp, 0, "Hello", 0); 
        printf("%s ", chTemp); 
        safe_strcpy(chTemp, sizeof(chTemp), "world!", 7 ); 
        printf("%s\n", chTemp);
        NotSafeStrcpy(chTemp2, 0, "Overflow", 0}; 
        printf("%s\n", chTemp2); 
                      
return 0; 
}
