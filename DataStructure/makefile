CC = gcc
CFLAGS = -O
OUTPUTDIR = ../Implementation/

all: libdatastructure.a copy_header

OBJS = node.o sllist.o stack.o queue.o

libdatastructure.a: $(OBJS)
	ar ru $(OUTPUTDIR)libdatastructure.a $(OBJS)
	ranlib $(OUTPUTDIR)libdatastructure.a 

clean:
	rm -f core *.o $(OUTPUTDIR)libdatastructure.a

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c $*.c
copy_header:
	cp *.h ../Header/DataStructure