output : SymTable_main.o
	g++ SymTable_main.o -o output	
SymTable_main.o: SymTable_main.cpp
	g++ -c SymTable_main.cpp SymTable.h
clean:
	rm *.o output
