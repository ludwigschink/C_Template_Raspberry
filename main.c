/**	@mainpage 		Raspberry C Template
 *	@Board Version:	RPI 3B+
 *	@image 			html default.png*/
 
/**		Raspberry C Template
 * 	@file		main.cpp
 * 	@version	0.1
 * 	@author		Ludwig Schink
 * 	@date		28.02.2021
 * 	@brief		Entry point for program.*/

#include <stdio.h>

#include "MyTemplate_RPI_Header.h"

/**		int main(int argc, char *argv[])
 * 	@brief	Entry point for executable!
 * 	@param	argc: number of passed arguments.
 *	@param	argv: char vector of argument
 * 	@return Error code at return*/
int main(int argc, char *argv[])
{
MyTemplate_RPI_Header_Init();

printf("Setting OUTPUT A to 1\n");
MyTemplate_RPI_Header_SetOutput(Outputs_A,Out_States_High);
printf("Setting OUTPUT B to 1\n");
MyTemplate_RPI_Header_SetOutput(Outputs_B,Out_States_High);
printf("Reading Input A:%i\n", MyTemplate_RPI_Header_GetInput(Inputs_A));
printf("Reading Input B:%i\n", MyTemplate_RPI_Header_GetInput(Inputs_B));
return 0;
}
