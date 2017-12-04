#include "TRUESTACK_H"

class StringStack: public TrueStack
{
   vector<string> stack;

   public:
	std::string pop();
	void push(string item);
	bool isEmpty();
}
