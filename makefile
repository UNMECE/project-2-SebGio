main: main.o student.o artStudent.o physicsStudent.o
	g++ -o main main.o student.o artStudent.o physicsStudent.o -std=c++11
main.o: main.cpp
	g++ -c main.cpp -std=c++11
student.o: student.cpp
	g++ -c student.cpp -std=c++11
artStudent.o: artStudent.cpp
	g++ -c artStudent.cpp -std=c++11
physicsStudent.o: physicsStudent.cpp
	g++ -c physicsStudent.cpp -std=c++11
