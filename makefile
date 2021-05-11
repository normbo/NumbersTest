CC    = gcc 
CFLAGS = -g 

hello : hello.c 
   $(CC) $(CFLAGS) -o hello  hello.c 
   
   
