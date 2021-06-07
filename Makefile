CC         = gcc
CFLAGS     = -g
LINKERLIBS = 
OUT        = sd
PATH       = /usr/bin/
OBJS       = src/die.o src/main.o

build: clean $(OBJS)
	$(CC) $(CFLAGS) $(LINKERLIBS) $(OBJS) -o $(OUT)

clean:
	rm -rf $(OUT) $(OBJS)

install:
	sudo cp $(OUT) $(PATH)
