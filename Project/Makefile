# Compiler
CXX = g++

# Project name
TARGET = MyOpenGLApp

# Source files
SRC = src/main.cpp

# Include directories
INCLUDES = -I/mnt/c/RMIT_STUFF/projects/Libraries/glew/include \
           -I/mnt/c/RMIT_STUFF/projects/Libraries/glfw/include

# Library directories
LIBDIRS = -L/mnt/c/RMIT_STUFF/projects/Libraries/glew/lib \
          -L/mnt/c/RMIT_STUFF/projects/Libraries/glfw/lib

# Libraries to link
LIBS = -lGLEW -lglfw -lGL

# Compiler flags
CXXFLAGS = -Wall -g

# Build target
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRC) $(LIBDIRS) $(LIBS) -o $(TARGET)

# Clean target
clean:
	rm -f $(TARGET)
