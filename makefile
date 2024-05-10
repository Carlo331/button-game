all:
	@echo "compiling..."
	@clang++ -std=c++11 -o main main.cpp
	@echo "running..."
	@./main 
