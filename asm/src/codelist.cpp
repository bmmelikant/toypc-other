/*
 * codelist.cpp
 *
 *  Created on: Apr 11, 2017
 *      Author: Ben Melikant
 */

#include <asm.h>

#include <iostream>
#include <fstream>
#include <list>

using namespace std;

// add an instruction to the instruction list
void CodeOutputList::add_instruction (Instruction *p) {
	// add the instruction to the list
	this->code_data.push_back (*p);
}

// add a symbol to the table
void CodeOutputList::add_symbol (string sym, int addr) {
	// add the symbol to the list
	this->symtable.insert (pair<string, int>(sym, addr));
}
