EXEC = rng
LIB  = librng.a
LIB_HEADER = main_rng.h

MAIN = main.c
SRC = lcg.c


.PHONY: build run lib


build:
	gcc $(MAIN) $(SRC) -o $(EXEC)
	mv $(EXEC) ../bin

run:
	@cd .. && ./bin/$(EXEC)

lib:
	gcc -c $(SRC)
	ar rcs ../$(LIB) *.o
	mv $(LIB_HEADER) ../

	rm -rf *.o
