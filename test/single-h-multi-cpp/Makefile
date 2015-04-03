CXX = g++
CXXFLAGS = -g

test: main.o play.o shoot.o
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $^

play.o: play.cpp
	$(CXX) $(CXXFLAGS) -c play.cpp

shoot.o: shoot.cpp
	$(CXX) $(CXXFLAGS) -c $^
