#include "ModelSpecific.h"


using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Data;
using namespace System::Collections;



ModelSpecific::ModelSpecific()
{
	// Set the default settings for the headphones
	newModelSeries = "";
	ModelFirmware = gcnew System::Collections::Generic::List<Object^>();
	modelList = gcnew System::Collections::Generic::List<Object^>();
	
}

ModelSpecific::~ModelSpecific()
{
}
// Getters and Setters
System::String^ ModelSpecific::getModelSeries()
{
	return newModelSeries;
}
void ModelSpecific::setModelSeries(System::String^ modelSeries)
{
	newModelSeries = modelSeries->ToString();
}

// Need to find our Images so return where they are located in a string
System::String^ ModelSpecific::getImageDir(System::String^ img)
{
	String^ fileName = img;
	System::String^ ImagePath;
	try
	{
		// Get the current directory.
		System::String^ path = System::IO::Directory::GetCurrentDirectory();
		ImagePath = path + L"\\Assets\\" + img;
		FileStream^ fs = gcnew FileStream(ImagePath, FileMode::Open);
		BinaryReader^ br = gcnew BinaryReader(fs);
		
		fs->Close();
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			Console::WriteLine("File '{0}' not found", fileName);
		else
			Console::WriteLine("Exception: ({0})", e);
		return "Bad";
	}
	return ImagePath;
}


