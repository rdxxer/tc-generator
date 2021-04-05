#This Makefile is only compatible with Windows!
CXXFLAGS = -Wextra --std=c++17 -O5
CXX = g++
TARGET = runtime.exe
OBJECTS = runtime.o runtime_test.o

runtime.o: runtime/runtime.cpp
	$(CXX) $(CXXFLAGS) -c $^

runtime_test.o: runtime/runtime_test.cpp
	$(CXX) $(CXXFLAGS) -c $^

runtime: runtime.o runtime_test.o
	$(CXX) -o runtime.exe $^

clean:
	del *.o *.exe outfile.txt
	