.SUFFIXES:

.PHONY: main
main: main.exe
	./main.exe

main.exe: main.cpp
	g++ -g -o main.exe main.cpp

.PHONY: clean
clean:
	rm -f main.exe
