#include <iostream>
#include <gtest/gtest.h>
#include "SymTable.h"
using namespace std;
class SymbolStore : public SymTable_t
{
    public:
   	const char *pcKey;
	const void *pvValue;
	SymbolStore *next;
   	SymbolStore *head;
	SymbolStore() { head = NULL; }
	void SymTable_new ();
	void SymTable_free ();
	int SymTable_getLength ();
	int SymTable_put ( const char *pcKey, const void *pvValue );
	int SymTable_replace ( const char *pcKey, const void *pvValue);
	int SymTable_contains ( const char *pcKey);
	int SymTable_get ( const char *pcKey);
	int SymTable_remove ( const char *pcKey);
	//void SymTable_map (void (*pfApply) (const char *pcKey, const void *pvValue, void *pvExtra), const void *pvExtra);
};
void SymbolStore :: SymTable_new ()
{
	// Create new Node.
	SymbolStore* head = new SymbolStore();
	return;
}
int SymbolStore :: SymTable_put (const char *pcKey, const void *pvValue)
{
	// Create the new Node.
	SymbolStore* newNode = new SymbolStore();
	
	newNode-> pcKey = pcKey;
	newNode-> pvValue = pvValue;
	//Create head if Not created
	if (!head) {
		SymTable_new();
	}
	if (head == NULL) {
		head = newNode;
		return 1;
	}
	SymbolStore* temp = new SymbolStore();
	temp = head;
	while (temp->next != NULL) {

		// Update temp
		temp = temp->next;
	}
	temp->next = newNode;
	return 1;
}
int SymbolStore :: SymTable_getLength ()
{
	int count  = 0;
	SymbolStore* countNode = new SymbolStore();
	countNode = head;
	if (countNode == NULL) {
		std::cout <<"Symbol Table Empty.No Nodes Inserted.";
		return 0;
	}
	while(countNode!= NULL)
	{
		count++;
		countNode = countNode->next;
	}
	return count;
}
void SymbolStore :: SymTable_free ()
{
	SymbolStore* delNode = new SymbolStore();
	delNode = head;
	if (delNode == NULL) {
		std::cout <<"Symbol Table Empty.Nothing to free.";
		return;
	}
	while(delNode!= NULL)
	{
		head = delNode->next;
		delete delNode;
		SymTable_free ();
	}
}
int SymbolStore :: SymTable_contains ( const char *pcKey)
{
	SymbolStore* searchNode = new SymbolStore();
	searchNode = head;
	if (searchNode == NULL) {
		std::cout <<"Symbol Table Empty.";
		return 0;
	}
	else {
		while(searchNode!= NULL)
		{
			if(searchNode->pcKey != pcKey)
			{
				searchNode = searchNode->next;
			}
			else if(searchNode->pcKey == pcKey)
			{
				return 1;
			}
		}
		return 0;
	}
}
int SymbolStore :: SymTable_replace ( const char *pcKey, const void *pvValue)
{
	SymbolStore* replaceNode = new SymbolStore();
	replaceNode = head;
	if (replaceNode == NULL) {
		std::cout <<"Symbol Table Empty.Insert elements before this option";
		return 0;
	}
	else {
		while(replaceNode!= NULL)
		{
			if(replaceNode->pcKey != pcKey)
			{
				replaceNode = replaceNode->next;
			}
			else if(replaceNode->pcKey == pcKey )
			{
				replaceNode->pvValue = pvValue;
				cout << "New value replaced. Success";
				return 1;
			}
		}
		cout << "Key Not Found. So No changes made";
		return 0;
	}
}
int SymbolStore :: SymTable_get ( const char *pcKey )
{
	SymbolStore* getNode = new SymbolStore();
	getNode = head;
	if (getNode == NULL) {
		std::cout <<"Symbol Table Empty.No Nodes ";
		return 0;
	}
	else {
		while ( getNode != NULL)
		{
			if(getNode->pcKey != pcKey)
			{
				getNode = getNode->next;
			}
			else if(getNode->pcKey == pcKey)
			{
				cout << "Value of given Key is:" << getNode->pvValue;
				return 1;
			}
		}
		cout << "Key Not Found";
		return 0;
	}
}
int SymbolStore :: SymTable_remove ( const char *pcKey)
{
	SymbolStore* removeNode = new SymbolStore();
	SymbolStore* temp = new SymbolStore();
	removeNode = head;
	if (removeNode == NULL) {
		std::cout <<"Symbol Table Empty.No Nodes ";
		return 0;
	}
	else {
		while(removeNode!= NULL)
		{
			if(removeNode->pcKey != pcKey)
			{
				removeNode = removeNode->next;
			}
			else if(removeNode->pcKey == pcKey)
			{
				removeNode->pcKey = removeNode->next->pcKey;
				removeNode->pvValue = removeNode->next->pvValue;
				temp = removeNode->next;
				removeNode->next = removeNode->next->next;
				delete temp;
				cout << "Removing Node Success";
				return 1;
			}
		}
		cout << "Key Not Found";
		return 0;
	}
}
/*void SymbolStore :: SymTable_map (void (*pfApply) (const char *pcKey, const void *pvValue, void *pvExtra), const void *pvExtra)
{
	
} */

