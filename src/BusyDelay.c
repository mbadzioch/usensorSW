/*=======================================================================================*
 * @file    BusyDelay.c
 * @author  Damian Pala
 * @date    26-08-2017
 * @brief   This file contains all implementations for BusyDelay module.
 *======================================================================================*/

/**
 * @addtogroup BusyDelay Description
 * @{
 * @brief Module for... .
 */

/*======================================================================================*/
/*                       ####### PREPROCESSOR DIRECTIVES #######                        */
/*======================================================================================*/
/*-------------------------------- INCLUDE DIRECTIVES ----------------------------------*/
#include "BusyDelay.h"

#include <assert.h>

/*----------------------------- LOCAL OBJECT-LIKE MACROS -------------------------------*/
#define CURRENT_US_DELAY_CLK                    84000000UL

/*---------------------------- LOCAL FUNCTION-LIKE MACROS ------------------------------*/

/*======================================================================================*/
/*                      ####### LOCAL TYPE DECLARATIONS #######                         */
/*======================================================================================*/
/*---------------------------- ALL TYPE DECLARATIONS -----------------------------------*/

/*-------------------------------- OTHER TYPEDEFS --------------------------------------*/

/*------------------------------------- ENUMS ------------------------------------------*/

/*------------------------------- STRUCT AND UNIONS ------------------------------------*/

/*======================================================================================*/
/*                    ####### LOCAL FUNCTIONS PROTOTYPES #######                        */
/*======================================================================================*/

/*======================================================================================*/
/*                         ####### OBJECT DEFINITIONS #######                           */
/*======================================================================================*/
/*--------------------------------- EXPORTED OBJECTS -----------------------------------*/

/*---------------------------------- LOCAL OBJECTS -------------------------------------*/

/*======================================================================================*/
/*                  ####### EXPORTED FUNCTIONS DEFINITIONS #######                      */
/*======================================================================================*/
void BusyDelay_Init(uint32_t coreClock)
{
  assert(CURRENT_US_DELAY_CLK == coreClock);
}

void BusyDelay_Ms(uint16_t numberOfMs)
{
  for (uint16_t i = 0; i < numberOfMs; i++)
  {
    BusyDelay_Us(1000);
  }
}

/*======================================================================================*/
/*                   ####### LOCAL FUNCTIONS DEFINITIONS #######                        */
/*======================================================================================*/

/**
 * @} end of group BusyDelay
 */