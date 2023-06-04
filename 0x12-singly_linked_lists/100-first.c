#include<stdio.h>

/**
 * myStartupFun - myStartupFunt
*/

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - implementation for myStartupFun
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
