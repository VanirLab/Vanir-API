#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class ScanIssue{
	
	public:
	/*Calls for IssueOff or IssueOn*/
	void:setIssue(const std::bool&issue) bool;

    /*Turns the Issue on*/	
	std::bool IssueOn(const std::bool&str) bool;
	/*Turns off the Issues*/
    std::bool IssueOff(const std::bool&str) bool;
	
};