CFLAGS=-W -Wall -ansi -pedantic

all: build/pari
 
build/pari: build/SomeKeyHash.o build/HashMap.o build/main.o
	g++ -o build/pari  build/SomeKeyHash.o build/HashMap.o build/main.o 
	echo "pari finished building"

build/HashMap.o: src/HashMap.h src/HashMap.cpp src/HashNode.h src/SomeKeyHash.h
	g++ -c -o build/HashMap.o src/HashMap.cpp $(GFLAG)
	echo "HashMap.o finished building"
	
build/SomeKeyHash.o : src/SomeKeyHash.h src/SomeKeyHash.cpp
	g++ -c -o build/SomeKeyHash.o src/SomeKeyHash.cpp $(GFLAG)
	echo "SomeKeyHash.o finished building"
	
build/main.o: src/main.cpp src/HashMap.h
	g++ -c -o build/main.o src/main.cpp $(GFLAG)
	echo "main.o finished building"

install: 
	mkdir site
	cp data/*.txt site/
	cp build/pari site/


clean:
	rm -rf *.o
	rm -rf site/*
	
mrproper: clean
	rm -rf build site
