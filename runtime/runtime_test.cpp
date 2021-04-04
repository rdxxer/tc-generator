#include <iostream>
#include "runtime.h"

using namespace std;
using namespace tcgen;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	TCGenRuntime runtime = TCGenRuntime("example.tcgen");
	runtime.run("outfile.txt");

	return 0;
}
