#include "HeadSetConfig.h"


// This is the Head Set Base Settings

HeadSetConfig::HeadSetConfig()
{
	newTemplateVersion = "";
	newUpdateTime = "";
	newReportId = "";

}

HeadSetConfig::~HeadSetConfig()
{

}
System::String^ HeadSetConfig::getTemplateVersion()
{
	return newTemplateVersion;
}
System::String^ HeadSetConfig::getUpdateTime()
{
	return newUpdateTime;
}
System::String^ HeadSetConfig::getReportId()
{
	return newReportId;
}
void HeadSetConfig::setTemplateVersion(System::String^ templateVersion)
{
	newTemplateVersion = templateVersion;
}
void HeadSetConfig::setUpdateTime(System::String^ time)
{
	newUpdateTime = time;
}
void HeadSetConfig::setReportId(System::String^ reportId)
{
	newReportId = reportId;
}