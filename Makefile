SOURCE_DIR = src
BUILD_DIR = build
TEST_DIR = test
CXX = clang++
CXXFLAGS = -g -Wall -Wextra -Wpedantic -std=c++20
INCLUDED_DIR = -I$(SOURCE_DIR)
TEST_LIBS = -lgtest -lgtest_main -lpthread

all: $(BUILD_DIR)/test

$(BUILD_DIR)/test: $(BUILD_DIR)/sub_array.o $(BUILD_DIR)/test.o
	$(CXX) $(CXXFLAGS) $(INCLUDED_DIR) $(BUILD_DIR)/sub_array.o $(BUILD_DIR)/test.o -o $(BUILD_DIR)/test $(TEST_LIBS)

$(BUILD_DIR)/sub_array.o: $(SOURCE_DIR)/sub_array.cpp
	$(CXX) -c $(CXXFLAGS) $(INCLUDED_DIR) $(SOURCE_DIR)/sub_array.cpp -o $(BUILD_DIR)/sub_array.o

$(BUILD_DIR)/test.o: $(TEST_DIR)/test.cpp
	$(CXX) -c $(CXXFLAGS) $(INCLUDED_DIR) $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o

test: $(BUILD_DIR)/test
	./$(BUILD_DIR)/test

clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/test

.PHONY: all test clean