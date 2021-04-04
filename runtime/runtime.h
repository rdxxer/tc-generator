#ifndef TCGEN_RUNTIME_H_INCLUDED
#define TCGEN_RUNTIME_H_INCLUDED
#include <fstream>
#include <iostream>

using namespace std;

namespace tcgen {
	class TCGenRuntime {
		string generator;
	public:
		TCGenRuntime(string);
        void run(string);
	};
}

#endif // TCGEN_RUNTIME_H_INCLUDED
