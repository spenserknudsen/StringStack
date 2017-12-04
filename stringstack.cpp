#include "true.h"
#include "stringstack.h"

std::StringStack::string pop()
{
   if(stack != 0)
   {
	stack.pop();
   }
   else
   {
	return;
   }
}

void StringStack::push(string item)
{
   stack.push_back(item);
}

bool StringStack::isEmpty()
{
   if(stack == 0)
   {
	return true;
   }  
   else
   {
	return false;
   }
}
