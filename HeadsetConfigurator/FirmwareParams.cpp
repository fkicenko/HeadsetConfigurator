#include "FirmwareParams.h"
using namespace System;

FirmwareParams::FirmwareParams()
{
	newModelSeries = "";
	newName = "";
	newAccess = "";
	newUsageId = "";
	newValue = "";
}


FirmwareParams::~FirmwareParams()
{
}

String^ FirmwareParams::getModelSeries()
{
	return newModelSeries;
}
String^ FirmwareParams::getName()
{
	return newName;
}
String^ FirmwareParams::getAccess()
{
	return newAccess;
}
String^ FirmwareParams::getUsageId()
{
	return newUsageId;
}
String^ FirmwareParams::getValue()
{
	return newValue;
}
void FirmwareParams::setModelSeries(String^ modelSeries)
{
	newModelSeries = modelSeries;
}
void FirmwareParams::setName(String^ name)
{
	newName = name;
}
void FirmwareParams::setAccess(String^ access)
{
	newAccess = access;
}
void FirmwareParams::setUsageId(String^ usageId)
{
	newUsageId = usageId;
}
void FirmwareParams::setValue(String^ value)
{
	newValue = value;
}