#include <iostream>

#include <anc-audio-sdk.hpp>
#include <anc-audio-sdk-nc.hpp>
#include <anc-audio-sdk-nc-stats.hpp>


int dllFunction() {
	std::cout << "Hello World" << std::endl;
	ancAudioGlobalInit(nullptr);
	ancAudioSetModel(nullptr, nullptr);
	ancAudioNcCreateSession(AncAudioSamplingRate(0),
                          AncAudioSamplingRate(0),
                          AncAudioFrameDuration(10),
						  nullptr);
	ancAudioNcCleanAmbientNoiseInt16(nullptr, nullptr, 0, nullptr, 0);
	ancAudioNcCloseSession(nullptr);
	ancAudioRemoveModel(nullptr);
	ancAudioGlobalDestroy();
	return 0;
}
