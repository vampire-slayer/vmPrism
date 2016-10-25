CFLAGS 		:= -Wall -std=c++0x
DIR 		:= vmPrism
OBJ_DIR 	:= $(DIR)/obj
EXECUTABLE	:= $(DIR)/vmPrism
CPP_FILES 	:= $(wildcard $(DIR)/*.cpp)
OBJ_FILES 	:= $(addprefix $(OBJ_DIR)/,$(notdir $(CPP_FILES:.cpp=.obj)))

all: directories $(EXECUTABLE)

directories: $(OBJ_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(EXECUTABLE): $(OBJ_FILES)
	g++ $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.obj: $(DIR)/%.cpp
	g++ $(CFLAGS) -c -o $@ $<

clean:
	rm -r -f $(OBJ_DIR) $(EXECUTABLE)
