CC    = gcc 
CFLAGS = -g 

hello : StuffToComplainAbout.c 
   $(CC) $(CFLAGS) -o hello  StuffToComplainAbout.c 
   
   
