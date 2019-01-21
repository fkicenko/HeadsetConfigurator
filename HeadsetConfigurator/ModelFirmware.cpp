#include "ModelFirmware.h"

using namespace System;


ModelFirmware::ModelFirmware()
{
	// Defaults
	newModelSeries = "";
	newFirmwareName = "";
	newLatest = "";
	FirmwareParamsList = gcnew System::Collections::Generic::List<Object^>();
}

ModelFirmware::~ModelFirmware()
{

}

String^ ModelFirmware::getModelSeries()
{
	return newModelSeries;
}
String^ ModelFirmware::getFirmwareName()
{
	return newFirmwareName;
}
String^ ModelFirmware::getLatest()
{
	return newLatest;
}

void ModelFirmware::setModelSeries(String^ modelSeries)
{
	newModelSeries = modelSeries;
}
void ModelFirmware::setFirmwareName(String^ firmwareName)
{
	newFirmwareName = firmwareName;
}
void ModelFirmware::setLatest(String^ latest)
{
	newLatest = latest;
}
