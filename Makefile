CXX = g++
CXXFLAGS = -g

main: Student.o Teacher.o main.o
	$(CXX) $(CXXFLAGS) Student.o Teacher.o main.o -o main

Student.o:
	$(CXX) $(CXXFLAGS) -c Student.cpp -o Student.o

Teacher.o:
	$(CXX) $(CXXFLAGS) -c Teacher.cpp -o Teacher.o

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm *.o main.exe