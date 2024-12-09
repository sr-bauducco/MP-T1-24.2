# Compilador e flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall
GCOVFLAGS = -fprofile-arcs -ftest-coverage
DEBUGFLAGS = -g
LDFLAGS = -lgcov

# Arquivos
SRCS = testa_velha.cpp velha.cpp
HDRS = velha.hpp
OBJS = velha.o testa_velha.o
EXEC = testa_velha

# Alvo principal
all: $(EXEC)

# Regra para compilar o executável principal
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

# Regra para compilar velha.cpp
velha.o: velha.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c velha.cpp -o velha.o

# Regra para compilar testa_velha.cpp
testa_velha.o: testa_velha.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c testa_velha.cpp -o testa_velha.o

# Alvo para executar o programa
test: $(EXEC)
	./$(EXEC)

# Alvo para análise com cpplint
cpplint: $(SRCS) $(HDRS)
	cpplint --exclude=catch.hpp $(SRCS) $(HDRS)

# Alvo para gerar relatório de cobertura com gcov
gcov: $(SRCS) $(HDRS)
	$(CXX) $(CXXFLAGS) $(GCOVFLAGS) -c velha.cpp -o velha.o
	$(CXX) $(CXXFLAGS) $(GCOVFLAGS) velha.o testa_velha.cpp -o $(EXEC) $(LDFLAGS)
	./$(EXEC)
	gcov *.cpp

# Alvo para depuração com gdb
debug: $(SRCS) $(HDRS)
	$(CXX) $(CXXFLAGS) $(DEBUGFLAGS) -c velha.cpp -o velha.o
	$(CXX) $(CXXFLAGS) $(DEBUGFLAGS) velha.o testa_velha.cpp -o $(EXEC)
	gdb $(EXEC)

# Alvo para análise estática com cppcheck
cppcheck: $(SRCS) $(HDRS)
	cppcheck --enable=warning .

# Alvo para análise de memória com valgrind
valgrind: $(EXEC)
	valgrind --leak-check=yes --log-file=valgrind.rpt ./$(EXEC)

# Alvo para limpeza de arquivos gerados
clean:
	rm -rf *.o *.gc* $(EXEC) *.exe valgrind.rpt
