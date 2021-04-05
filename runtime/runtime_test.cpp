#include <iostream>
#include "runtime.h"

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	tcgen::TCGenRuntime runtime = tcgen::TCGenRuntime("example.tcgen");
	runtime.run("outfile.out");

	return 0;
}
