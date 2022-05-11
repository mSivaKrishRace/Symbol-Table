#include <iostream>
#include <gtest/gtest.h>
#include "SymTable_t.h"
#include "SymTable_t_derived.cpp"
using namespace std;
class Contains_Test : public testing : TestWithParam<std::tuple<char*>>
{
	public:
		char *Key;
		SymbolStore t_node;
};
TEST_P(Contains_Test, ContainsElement) {
	//Arrange
	std::tuple<char*> tuple = GetParam();
	char* key = std::get<0>(tuple);
	//Assert
	ASSERT_EQ(t_node.SymTable_contains(key), 1);
}
INSTANTIATE_TEST_CASE_P(UnitTestContains, Contains_Test, testing ::Values(
    std::make_tuple<"90">,
    std::make_tuple<"91">,
    std::make_tuple<"92">,
    std::make_tuple<"93">,
    std::make_tuple<"94">));
class Put_Test : public testing : TestWithParam<std::tuple<char*>>
{
	public:
		char *Key;
		SymbolStore t_node;
};
TEST_P(Put_Test, PutElement) {
	//Arrange
	std::tuple<char*> tuple = GetParam();
	char* key = std::get<0>(tuple);
	char* Value  = std::get<1>(tuple);
	//Assert
	ASSERT_EQ(t_node.SymTable_put(key,&Value),1) ;
}
INSTANTIATE_TEST_CASE_P(UnitTestPut, Put_Test, testing ::Values(
    std::make_tuple<"90", "Kumar">,
    std::make_tuple<"91", "Raja">,
    std::make_tuple<"92", "Amaravathi">,
    std::make_tuple<"93", "Siva">,
    std::make_tuple<"94", "Krishna">));
class Get_Test : public testing : TestWithParam<std::tuple<char*>>
{
	public:
		char *Key;
		SymbolStore t_node;
};
TEST_P(Get_Test, GetElement) {
	//Arrange
	std::tuple<char*> tuple = GetParam();
	char* key = std::get<0>(tuple);
	//Assert
	ASSERT_EQ(t_node.SymTable_get(key),1) ;
}
INSTANTIATE_TEST_CASE_P(UnitTestGet, Get_Test, testing ::Values(
    std::make_tuple<"90">,
    std::make_tuple<"91">,
    std::make_tuple<"102">,
    std::make_tuple<"Siva">,
    std::make_tuple<"Krishna">));
class Remove_Test : public testing : TestWithParam<std::tuple<char*>>
{
	public:
		char *Key;
		SymbolStore t_node;
};
TEST_P(Remove_Test, GetElement) {
	//Arrange
	std::tuple<char*> tuple = GetParam();
	char* key = std::get<0>(tuple);
	//Assert
	ASSERT_EQ(t_node.SymTable_remove(key),1) ;
}
INSTANTIATE_TEST_CASE_P(UnitTestRemove, Remove_Test, testing ::Values(
    std::make_tuple<"Kumar">,
    std::make_tuple<"91">,
    std::make_tuple<"102">,
    std::make_tuple<"93">,
    std::make_tuple<"Krishna">));
class Replace_Test : public testing : TestWithParam<std::tuple<char*>>
{
	public:
		char *Key;
		SymbolStore t_node;
};
TEST_P(Replace_Test, GetElement) {
	//Arrange
	std::tuple<char*> tuple = GetParam();
	char* key = std::get<0>(tuple);
	char* Value  = std::get<1>(tuple);
	//Assert
	ASSERT_EQ(t_node.SymTable_remove(key, &Value),1) ;
}
INSTANTIATE_TEST_CASE_P(UnitTestReplace, Replace_Test, testing ::Values(
    std::make_tuple<"90", "Krishna">,
    std::make_tuple<"91", "Siva">,
    std::make_tuple<"102", "Amaravathi">,
    std::make_tuple<"93", "Raja">,
    std::make_tuple<"108", "Kumar">));
int main(int argc, char **argv) {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
