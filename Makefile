CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

TARGET = main

SRC = main.cpp \
      input.cpp \
      binary.cpp \
      print_logo_zar_binary.cpp

OBJ= $(SRC:.cpp=.o)


$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


run: $(TARGET)
	./$(TARGET)


clean:
	rm -f $(OBJ) $(TARGET)
