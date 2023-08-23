/***********************************************************************************************************************
 * @file    main.c
 *
 * @brief   brief description
 * 
 * detailed description
 *  
 * @par
 * @author 	ghowell
 **********************************************************************************************************************/

/*------------------------------------------- INCLUDES ---------------------------------------------------------------*/

#include "main.h"

/*------------------------------------------- EXTERN VARIABLES -------------------------------------------------------*/
/*------------------------------------------- PRIVATE MACROS AND DEFINES ---------------------------------------------*/
/*------------------------------------------- PRIVATE TYPEDEFS -------------------------------------------------------*/
/*------------------------------------------- STATIC VARIABLES -------------------------------------------------------*/
/*------------------------------------------- GLOBAL VARIABLES -------------------------------------------------------*/
/*------------------------------------------- STATIC FUNCTION PROTOTYPES ---------------------------------------------*/
/*------------------------------------------- STATIC FUNCTIONS -------------------------------------------------------*/
/*------------------------------------------- GLOBAL FUNCTIONS -------------------------------------------------------*/

int main(void)
{
    /*
     * Pointers Basics
     */
    pointers_init_value();
    pointers_init_value_mem_alloc();
    pointers_init_array();
    pointers_init_array_mem_alloc();

    /*
     * Pointer Structures
     */

    pointers_structs_init_struct_val();
    pointers_structs_init_struct_array();
    pointers_structs_init_struct_within_struct();
    pointers_structs_init_struct_within_struct_pointer();

    return 0;
}