#include "PosValue.h"

template <typename T>
class Wrapper {
private:
	T member;

public:
	void Set(T v) { member = v; }
	T Get() { return member; }
};

int main() {
	Wrapper<PosValue<char>> wrap;
	wrap.Set(PosValue<char>(10, 10, 'a'));
	PosValue<char> pc = wrap.Get();
	pc.OutValue();
}