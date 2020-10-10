lab2.exe: prog.o lab2.o
	g++ prog.o  lab2.o -o lab2.exe
prog.o: prog.cpp
	g++ -c prog.cpp
lab2.o: lab2.h lab2.cpp
	g++ -c lab2.cpp lab2.h
clean:
	rm -f *.out *.o lab2.exe