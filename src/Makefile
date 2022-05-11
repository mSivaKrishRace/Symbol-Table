output: SymTable_main.o SymTable.o
	g++ SymTable_main.o -o output
SymTable_main.o: SymTable_main.cpp
	g++ -c SymTable_main.cpp 
SymTable.o: SymTable.cpp SymTable.h
	g++ -c SymTable.cpp SymTable.h
clean:
	rm *.o output
