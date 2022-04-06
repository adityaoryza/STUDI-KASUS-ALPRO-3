#include <iostream>
#include <fstream>
#include "../library/output.h"

int main(){
	Output output;
	output.getData();
	output.cetak();
    output.toFile();
	return 0;
}