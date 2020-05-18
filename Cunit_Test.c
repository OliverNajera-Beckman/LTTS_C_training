#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "team2.h"

int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }

int maxi(int i1, int i2)
{
    return (i1 > i2) ? i1 : i2;
}

void test_maxi(void)
{
    CU_ASSERT(maxi(0,2) == 2);
}

void test_countsNumberOfDigits(void)
{
    CU_ASSERT(countsNumberOfDigits(111) == 3);
}

int main() {
    // Initialize CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

    // Add suite_maxi to registry
    CU_pSuite suite_maxi = CU_add_suite("maxi_test", init_suite, clean_suite);
    if (NULL == suite_maxi) 
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // add test_maxi to suite_maxi
    if ((NULL == CU_add_test(suite_maxi, "maxi_fun", test_maxi)))
    {
      CU_cleanup_registry();
      return CU_get_error();
    }
    
     // Add suite_test_countsNumberOfDigits to registry
    CU_pSuite suite_countsNumberOfDigits = CU_add_suite("countsNumberOfDigits_test", init_suite, clean_suite);
    if (NULL == suite_countsNumberOfDigits) 
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // add test_countsNumberOfDigits  to suite_countsNumberOfDigits 
    if ((NULL == CU_add_test(suite_countsNumberOfDigits , "countsNumberOfDigits_fun", test_countsNumberOfDigits)))
    {
      CU_cleanup_registry();
      return CU_get_error();
    }
   
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests(); // OUTPUT to the screen
    CU_cleanup_registry();
    return CU_get_error();
}
