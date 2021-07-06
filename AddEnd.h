#pragma once
#ifndef ADD_END_H
#define ADD_END_H

#include "Actions\Action.h"

#include"End.h"

//Add Value Assignment Statement Action
//This class is responsible for 
// 1 - Getting Assignment stat. coordinates from the user (one of the parameters of this action)
// 2 - Getting the LHS and RHS of the statement from the user (some of the parameters of this action)
// 3 - Creating an object of Assignment class and passing it parameters
// 4 - Adding the created object to the list of statements of the application manager
class AddEnd : public Action
{
private:
	// in the data members of the actions
	// we put the paramaters of the action
	// to be set in ReadActionParameters() then used in Execute()

	Point Position;	//Position where the user clicks to add the stat.
					//TODO: you should add LHS and RHS of the assignment statement as parameters

public:
	AddEnd(ApplicationManager *pAppManager);

	//Read Assignemt statements position
	virtual void ReadActionParameters();

	//Create and add an assignemnt statement to the list of statements
	virtual void Execute();

};

#endif