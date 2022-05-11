#ifndef SYMTABLE_H
#define SYMTABLE_H
#include <iostream>
#include <gtest/gtest.h>
using namespace std;
class SymTable_t
{
   public:
	virtual void SymTable_new () = 0;
	virtual void SymTable_free () = 0;
	virtual int SymTable_getLength () = 0;
	virtual int SymTable_put (const char *pcKey, const void *pvValue) = 0;
	virtual int SymTable_replace ( const char *pcKey, const void *pvValue) = 0;
	virtual int SymTable_contains ( const char *pcKey) = 0;
	virtual int SymTable_get ( const char *pcKey) = 0;
	virtual int SymTable_remove ( const char *pcKey) = 0;
	//virtual void SymTable_map (void (*pfApply) (const char *pcKey, const void *pvValue, void *pvExtra), const void *pvExtra) = 0;
	const char *pcKey;
	const void *pvValue;
	SymTable_t *next;
	//Consrtuctor
   	SymTable_t()
	{
		pcKey = NULL;
		pvValue = NULL;
		next = NULL;
	}	
};
#endif
