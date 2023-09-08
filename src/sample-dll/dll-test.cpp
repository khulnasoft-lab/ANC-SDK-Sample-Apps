#include <iostream>
#include <anc-audio-sdk.hpp>
#include <anc-audio-sdk-nc.hpp>
#include <anc-audio-sdk-nc-stats.hpp>


int dllFunction();


int main() {
	std::cout << "Hello World" << std::endl;
	ancAudioGlobalInit(nullptr);
	ancAudioGlobalDestroy();
	dllFunction();
	return 0;
}
