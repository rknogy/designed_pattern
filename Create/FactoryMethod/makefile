# 获取当前目录的名称
TARNAME := $(notdir $(CURDIR))

# 输出变量值以供调试
$(info Current directory is: $(CURDIR))
$(info Target name will be: $(TARNAME))

# 源文件和头文件的目录
SRC_DIR := .

# 查找所有的源文件（.cpp）和头文件（.h, .hpp）
SRC := $(shell find $(SRC_DIR) -name "*.cpp")
HEADERS := $(shell find $(SRC_DIR) -name "*.h" -o -name "*.hpp")

# 输出变量值以供调试
$(info Source files are: $(SRC))
$(info Header files are: $(HEADERS))

# 目标可执行文件
TARGET := $(TARNAME)

# 编译器
CXX := g++

# 编译选项
CXXFLAGS := -std=c++11

# 默认目标
all: $(TARGET)

# 链接生成可执行文件
$(TARGET): $(SRC) $(HEADERS)
	@echo "Linking $@..."
	$(CXX) $(CXXFLAGS) -o $@ $^

# 测试目标
test: $(TARGET)
	@echo "Running tests..."
	./$(TARGET)

# 清理生成的文件
clean:
	@echo "Cleaning up..."
	rm -f $(TARGET)

.PHONY: all test clean