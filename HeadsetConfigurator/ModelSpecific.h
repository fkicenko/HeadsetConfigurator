#pragma once
#include <string>
#include <array>
#include <list>
#include <vector>

using namespace std;

ref class ModelSpecific
{
public:
	
	ModelSpecific();
	
	System::String^ getModelSeries();
	void setModelSeries(System::String^);
	/*System::String^ getVolumeSetting();
	void setVolumeSetting(System::String^);
	System::String^ getMicrophoneSetting();
	void setMicrophoneSetting(System::String^);
	System::String^ getSidetoneSetting();
	void setSidetoneSetting(System::String^);
	System::String^ getEqualizerSetting();
	void setEqualizerSetting(System::String^);
	System::String^ getAudioBandwidthSetting();
	void setAudioBandwidthSetting(System::String^);
	System::String^ getBluetoothSetting();
	void setBluetoothSetting(System::String^);
	System::String^ getDectSetting();
	void setDectSetting(System::String^);*/

	System::String^ ModelSpecific::getImageDir(System::String^);
	// A list of ModeFirmware Classes holding all the configs per Major Model
	System::Collections::Generic::List<Object^>^ ModelFirmware;
	// Array to hold the Models
	System::Collections::Generic::List<Object^>^ modelList;
	//cli::array < String^, 1 > ^modelList;
	
	~ModelSpecific();

private:
	// newModelSeries is each Model (520, 530 and 560)
	System::String^ newModelSeries;
	//System::String^ volumeSetting;
	//System::String^ microphoneSetting;
	//System::String^ sidetoneSetting;
	//System::String^ equalizerSetting;
	//// 560's
	//System::String^ audiobandwidthSetting;
	//System::String^ bluetoothSetting;
	//System::String^ dectSetting;
};