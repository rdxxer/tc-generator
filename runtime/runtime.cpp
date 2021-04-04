#include "runtime.h"

using namespace std;

namespace tcgen {
	TCGenRuntime::TCGenRuntime(string generatorIn) {
		this->generator = generatorIn;
	}
	void TCGenRuntime::run(string outfileIn) {
		ifstream infile(this->generator);
		ofstream outfile(outfileIn);
		if (infile.fail()) {
			cerr << "Cannot read generator code\n";
			return;
		}
		if (outfile.fail()) {
			cerr << "Error occured when open outfile\n";
		}
	}
}
