/**
 * @file bill_entities.h
 * @author Prince
 * @brief Bill entities structure definition
 * @version 0.1
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 */

#ifndef __BILL_ENTITIES_H__
#define __BILL_ENTITIES_H__


#include "math.h"

typedef struct entity_item{
char item[100];
	float price;
	int qty;
}items;

typedef struct entity_orders{
	char customer[100];
	char date[30];
	int numOfitems;
    items itm[50];
}orders;

#endif //#ifndef BILL_ENTITIES
