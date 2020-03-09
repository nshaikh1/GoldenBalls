#include "Computer_Player.h"
#include "Decision.h"

void Computer_Player :: set_name(){
	_name = "Computer";
}

int Computer_Player :: split_or_steal()
{
	return Decision::steal;
}

string Computer_Player :: get_name(){
	return _name;
}