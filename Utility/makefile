CC = gcc
CFLAGS = -O
OUTPUTDIR = ../Implementation/

all: utility.a

OBJS = utility.o

utility.a: $(OBJS)
	ar ru $(OUTPUTDIR)utility.a $(OBJS)
	ranlib $(OUTPUTDIR)utility.a 

clean:
	rm -f core *.o $(OUTPUTDIR)utility.a

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c $*.c
