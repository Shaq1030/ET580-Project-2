CXX = g++
CXXFLAGS = -g -Wall -std=c++11

TARGET = dynamic_array
SRCS = Driver_Phase1.cpp Container.cpp Files.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)