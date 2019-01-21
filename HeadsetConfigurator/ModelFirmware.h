#pragma once
#include "FirmwareParams.h"
#include <array>


ref class ModelFirmware
{
public:
	ModelFirmware();
	~ModelFirmware();

	System::String^ getModelSeries();
	System::String^ getFirmwareName();
	System::String^ getLatest();
	/*System::String^ getName();
	System::String^ getAccess();
	System::String^ getUsageId();
	System::String^ getValue();*/

	void setModelSeries(System::String^);
	void setFirmwareName(System::String^);
	void setLatest(System::String^);
	/*void setFirmwareParams(System::String^);
	void setName(System::String^);
	void setAccess(System::String^);
	void setUsageId(System::String^);
	void setValue(System::String^);*/
	// A list of ModeFirmware Classes holding all the configs per Major Model
	System::Collections::Generic::List<Object^>^ FirmwareParamsList;

private:

	System::String^ newModelSeries;
	System::String^ newFirmwareName;
	System::String^ newLatest;
	/*System::String^ newFirmwareParams;
	System::String^ newParamName;
	System::String^ newName;
	System::String^ newAccess;
	System::String^ newUsageId;
	System::String^ newValue;*/
	
};

