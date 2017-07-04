CC = gcc
CFLAGS = -O
OUTPUTDIR = ../Implementation/

all: libalgorithm.a copy_header

OBJS = utility.o sort.o 

libalgorithm.a: $(OBJS)
	ar ru $(OUTPUTDIR)libalgorithm.a $(OBJS)
	ranlib $(OUTPUTDIR)libalgorithm.a 

clean:
	rm -f core *.o $(OUTPUTDIR)libalgorithm.a

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c $*.c
copy_header:
	cp *.h ../Header/Algorithm