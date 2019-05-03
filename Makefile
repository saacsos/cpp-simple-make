main: Student.o Teacher.o main.o
	g++ Student.o Teacher.o main.o -o main

Student.o:
	g++ -c Student.cpp -o Student.o

Teacher.o:
	g++ -c Teacher.cpp -o Teacher.o

main.o:
	g++ -c main.cpp -o main.o

clean:
	rm *.o main.exe