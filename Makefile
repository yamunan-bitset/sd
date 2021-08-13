CC         = cc
CXX        = c++
CFLAGS     = -g
LINKERLIBS = 
OUT        = sd
PATH       = /usr/bin/
OBJS       = src/die.o src/cstyle.o src/main.o

build: clean $(OBJS)
	$(CXX) $(CFLAGS) $(LINKERLIBS) $(OBJS) -o $(OUT)

clean:
	rm -rf $(OUT) $(OBJS)

install:
	sudo cp $(OUT) $(PATH)
