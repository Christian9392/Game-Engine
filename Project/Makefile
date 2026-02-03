# # Compiler
# CXX = g++

# # Project name
# TARGET = MyOpenGLApp

# # Source files
# SRC = src/main.cpp

# # Include directories
# INCLUDES = -I/mnt/c/RMIT_STUFF/projects/Libraries/glew/include \
#            -I/mnt/c/RMIT_STUFF/projects/Libraries/glfw/include

# # Library directories
# LIBDIRS = -L/mnt/c/RMIT_STUFF/projects/Libraries/glew/lib \
#           -L/mnt/c/RMIT_STUFF/projects/Libraries/glfw/lib

# # Libraries to link
# LIBS = -lGLEW -lglfw -lGL

# # Compiler flags
# CXXFLAGS = -Wall -g

# # Build target
# all: $(TARGET)

# $(TARGET): $(SRC)
# 	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRC) $(LIBDIRS) $(LIBS) -o $(TARGET)

# # Clean target
# clean:
# 	rm -f $(TARGET)

CXX = g++

TARGET = MyOpenGLApp

SRC = src/main.cpp \
      /mnt/c/RMIT_STUFF/projects/Libraries/glad/src/glad.c

INCLUDES = -I/mnt/c/RMIT_STUFF/projects/Libraries/glad/include \
           -I/mnt/c/RMIT_STUFF/projects/Libraries/glew/include \
           -I/mnt/c/RMIT_STUFF/projects/Libraries/glfw/include

LIBDIRS = -L/mnt/c/RMIT_STUFF/projects/Libraries/glew/lib \
          -L/mnt/c/RMIT_STUFF/projects/Libraries/glfw/lib

LIBS = -lglfw -lGL

CXXFLAGS = -Wall -g

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRC) $(LIBDIRS) $(LIBS) -o $(TARGET)

clean:
	rm -f $(TARGET)

