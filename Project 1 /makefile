CXX := g++
CXXFLAGS := -std=c++17 -Wall -g

SRCS := Driver_Phase1.cpp Container.cpp Files.cpp
OBJS := $(SRCS:.cpp=.o)
TARGET := dynamic_array.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	cmd /C del /Q $(OBJS) $(TARGET)