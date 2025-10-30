CXX := g++
CXXFLAGS := -std=c++17 -Wall -g

SRCS := Driver_Phase1.cpp Container.cpp Files.cpp Algorithms.cpp
OBJS := $(SRCS:.cpp=.o)
TARGET := dynamic_array.exe

# Phase 3 build variables
PHASE3_SRCS := Driver_Phase3.cpp Container.cpp Files.cpp Algorithms.cpp
PHASE3_OBJS := $(PHASE3_SRCS:.cpp=.o)
PHASE3_TARGET := dynamic_array_phase3.exe

.PHONY: all clean phase3 run run_phase3

all: $(TARGET) $(PHASE3_TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Phase 3 target builds the rotateLeft demo executable
phase3: $(PHASE3_TARGET)

$(PHASE3_TARGET): $(PHASE3_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	cmd /C del /Q $(OBJS) $(TARGET) $(PHASE3_OBJS) $(PHASE3_TARGET)


# Convenience run targets
run: $(TARGET)
	./$(TARGET)

run_phase3: $(PHASE3_TARGET)
	./$(PHASE3_TARGET)