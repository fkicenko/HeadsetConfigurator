#pragma once


ref class HeadSetConfig
{
public:
	HeadSetConfig();
	~HeadSetConfig();
	// A list of ModelSpecific Classes holding all the configs per Major Model
	System::Collections::Generic::List<Object^>^ ModelSpecificList;
	System::String^ getTemplateVersion();
	System::String^ getUpdateTime();
	System::String^ getReportId();
	void setTemplateVersion(System::String^);
	void setUpdateTime(System::String^);
	void setReportId(System::String^);

private:
	System::String^ newTemplateVersion;
	System::String^ newUpdateTime;
	System::String^ newReportId;
};

