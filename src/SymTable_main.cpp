#include <iostream>
#include <gtest/gtest.h>
#include "SymTable.h"
#include "SymTable.cpp"
using namespace std;

int main()
{
	SymbolStore S_Table;
	int option, result;
	char *pcKey;
	void *pvValue;	
	cout << "\n 1. Create New_SymbolTable \t 2. Free_SymbolTable \t 3. Get_Length \n 4. Add New_SymbolTable Node \t 5. Replace Value \t 6. Search \n 7. Get Value \t 8. Remove Node \t 9. Symbol Map \t 10. Exit" << std::endl;
	do{
		cout << " \n Enter Option:";
		cin >> option;
		switch(option)
		{
			case 1: //1. Create New_SymbolTable
				S_Table.SymTable_new();
				break;
			case 2: //2. Free_SymbolTable
				S_Table.SymTable_free();
				break;
			case 3: //3. Get_Length 
				result = S_Table.SymTable_getLength();
				cout << "Length is :" << result;
				break;
			case 4: //4. Add New_SymbolTable Node 
				cout << "Enter the Key";
				cin >> *pcKey;
				//cout << "Enter the Value";
				//cin >> pvValue;
				pvValue = &pcKey;
				result = S_Table.SymTable_put (pcKey, pvValue);
				break;
			case 5: //5. Replace Value
				cout << "Enter the Key";
				cin >> *pcKey;
				//cout << "Enter the New Value to replace";
				//cin >> *pvValue;
				pvValue = &pcKey;
				S_Table.SymTable_replace(pcKey, pvValue);
				break;
			case 6: //6. Search Node
				cin >> *pcKey;
				result  = S_Table.SymTable_contains(pcKey);
				if(result)
				{
					cout << "Element found";
				}
				else{
					cout << "Element NOT found";
				}
				break;
			case 7: //7. Get Value 
				cout << "Enter the Key";
				cin >> *pcKey;
				S_Table.SymTable_get (pcKey);
				break;
			case 8: //8. Remove Node 
				cout << "Enter the Key";
				cin >> *pcKey;
				S_Table.SymTable_remove (pcKey);
				break;
			case 9: //9. Symbol Map
				//S_Table.SymTable_map ((*pfApply) (*pcKey, *pvValue, *pvExtra), *pvExtra);
				break;
			case 10: exit(0);
			default:cout<< "Wrong Choice. Try Again ";				
		}
	}while ( option < 10);
	return 0;
}
