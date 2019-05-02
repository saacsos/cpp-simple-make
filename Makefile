main: Student.o main.o
	g++ Student.o main.o -o main

Student.o:
	g++ -c Student.cpp -o Student.o

main.o:
	g++ -c main.cpp -o main.o

clean:
	rm *.o main.exe