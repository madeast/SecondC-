/*
 * SillyAppController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: emad6932
 */

#include "SillyAppController.h"
#include <iostream>
using namespace std;

SillyAppController :: SillyAppController()
{
	this->count = 99;
}

void SillyAppController :: setCount(int count)
{
	this->count = count;
}

int SillyAppController :: getCount()
{
	return this->count;
}

void SillyAppController :: start()
{
	cout << "In the Silly Controller's start Method." << endl;
	cout << getCount() << " is the count right now. " << endl;
	cout <<"Type in a new value for count please." << endl;
	int tempCount;
	cin >> tempCount;
	setCount(tempCount);
	cout << getCount() << " is the updated count." << endl;
}


