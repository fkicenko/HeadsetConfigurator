#pragma once
ref class FirmwareParams
{
public:
	FirmwareParams();
	~FirmwareParams();

	System::String^ getModelSeries();
	System::String^ getName();
	System::String^ getAccess();
	System::String^ getUsageId();
	System::String^ getValue();

	void setModelSeries(System::String^);
	void setName(System::String^);
	void setAccess(System::String^);
	void setUsageId(System::String^);
	void setValue(System::String^);

private:
	System::String^ newModelSeries;
	System::String^ newName;
	System::String^ newAccess;
	System::String^ newUsageId;
	System::String^ newValue;
};

