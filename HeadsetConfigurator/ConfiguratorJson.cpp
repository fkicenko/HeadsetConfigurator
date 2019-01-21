#include "ConfiguratorJson.h"
#include <msclr\marshal_cppstd.h>
//#include "cpprest/containerstream.h"
//#include "cpprest/filestream.h"
//#include "cpprest/http_client.h"
//#include "cpprest/json.h"
//#include "cpprest/producerconsumerstream.h"

using namespace System;
using namespace msclr::interop;
//using namespace web;
//using namespace web::http;
//using namespace web::http::client;
//using namespace web::json;
boost::property_tree::ptree pt;

ConfiguratorJson::ConfiguratorJson()
{
	hsConfig = gcnew HeadSetConfig();
	ms = gcnew ModelSpecific();
	hsConfig->ModelSpecificList = gcnew System::Collections::Generic::List<Object^>();
	mf = gcnew ModelFirmware();
	fp = gcnew FirmwareParams();
}
ConfiguratorJson::~ConfiguratorJson()
{

}
// Load the JSON configuration file if it exists
HeadSetConfig^ ConfiguratorJson::ReadJson()
{
	try
	{
		// Get the current directory and .json default config.
		String^ path = System::IO::Directory::GetCurrentDirectory()+ L"\\headset.json";
		Console::WriteLine("Reading File '{0}' ", path);
		parse_config("C:\\Users\\frank.kicenko\\Source\\Repos\\HeadsetConfigurator\\HeadsetConfigurator\\headset.json");
		return hsConfig;
	}
	catch (std::exception const& e)
	{
		return hsConfig;
	}
}
void ConfiguratorJson::parse_config(std::string const& fname)
{

	std::ifstream file(fname);
	boost::property_tree::read_json(file, pt);
	String^ f4;
	
	for (auto& v : pt.get_child("headsetConfig"))
	{
		auto& node = v.second;
		// Get the template configuration
		hsConfig->setTemplateVersion(gcnew String((node.get("configTemplateVersion", "").c_str())));
		hsConfig->setUpdateTime(gcnew String((node.get("updatedTime", "").c_str())));
		hsConfig->setReportId(gcnew String((node.get("reportId", "").c_str())));
		// Get the model specific settings
		for (auto &param : node.get_child("modelSpecificSettings")) // An Array
		{
			String^ f = gcnew String(param.first.c_str());
			// *** ANCHOR POINT FOR LOOPING THROUGH THE MODELS ***
			for (const auto& itr : param.second) 
			{
				// Get Model Series
				String^ f1 = gcnew String(itr.first.c_str());
				if (f1->CompareTo("modelSeries") == 0)
				{
					String^ model = gcnew String(itr.second.get_value("").c_str());
					ms->setModelSeries(model);
					mf->setModelSeries(model);
					fp->setModelSeries(model);
				}
				// Get the models
				else if (f1->CompareTo("models") == 0)
				{
					auto& node1 = itr.second;
					// Cycle through the models and add to model list
					for (const auto& mdl : node1.get_child(""))
					{
						// Get all the models for this series
						f4 = gcnew String(mdl.second.get_value("").c_str());
						ms->modelList->Add(f4);
					}
				}
				// Get the Model Firmware
				else if (f1->CompareTo("modelFirmware") == 0)
				{
					auto& node2 = itr.second;
					for (const auto& md2 : node2.get_child(""))
					{
						for (const auto& md3 : md2.second)
						{
							f4 = gcnew String(md3.first.c_str());
							if (f4->CompareTo("firmwareName") == 0)
								mf->setFirmwareName(gcnew String(md3.second.get_value("").c_str()));
							else if (f4->CompareTo("latest") == 0)
								mf->setLatest(gcnew String(md3.second.get_value("").c_str()));
							else if(f4->CompareTo("firmwareParams") == 0)
							{
								// Get the Firmware Parameters for this Model
								auto& node3 = md3.second;
								for (const auto& md4 : node3.get_child(""))
								{
									for (const auto& md5 : md4.second)
									{
										// Add the Firmware Parameters to the FirmwareParams Class
										f4 = gcnew String(md5.first.c_str());
										if (f4->CompareTo("name") == 0)
											fp->setName(gcnew String(md5.second.get_value("").c_str()));
										else if(f4->CompareTo("access") == 0)
											fp->setAccess(gcnew String(md5.second.get_value("").c_str()));
										else if (f4->CompareTo("usageId") == 0)
											fp->setUsageId(gcnew String(md5.second.get_value("").c_str()));
										else if (f4->CompareTo("value") == 0)
										{
											fp->setValue(gcnew String(md5.second.get_value("").c_str()));
										}
									}
									mf->FirmwareParamsList->Add(fp);
									fp = gcnew FirmwareParams();
								}
							}
						}
					}
					ms->ModelFirmware->Add(mf);
					mf = gcnew ModelFirmware();
				}
			}
			hsConfig->ModelSpecificList->Add(ms);
			ms = gcnew ModelSpecific();
		}

	}
	
}
// Write the JSON configuration to file
// Here we need to update 'pt' so we can write to file
// Iterate through 'pt' to set the data to the new configuration and write to file
void ConfiguratorJson::WriteJson(HeadSetConfig^ hsConfig)
{
	String^ f4;
	// Get the current directory.
	String^ path = System::IO::Directory::GetCurrentDirectory();
	// Set the new .json file name
	string filename = "default1.json";
	// Get the current Time and Date
	DateTime cpCurrentDateTime = DateTime::Now;
	String^ strTemp = cpCurrentDateTime.ToShortDateString();
	strTemp = String::Concat(strTemp, " ");
	strTemp = String::Concat(strTemp, cpCurrentDateTime.ToLongTimeString());
	
	// Compare the data
	for (auto& v : pt.get_child("headsetConfig"))
	{
		auto& node = v.second;
		// Update the template configuration version
		std::string standardString = marshal_as<std::string>(hsConfig->getTemplateVersion());
		node.put("configTemplateVersion", standardString); 
		String^ tmp = gcnew String((node.get("configTemplateVersion", "").c_str()));
		// Update the Timestamp
		hsConfig->setUpdateTime(strTemp);
		standardString = marshal_as<std::string>(hsConfig->getUpdateTime());
		node.put("updatedTime", standardString);
		// Update the ReportId
		hsConfig->setReportId(gcnew String((node.get("reportId", "").c_str())));
		standardString = marshal_as<std::string>(hsConfig->getReportId());
		node.put("reportId", standardString);
		int modelIndex = 0;
		ModelSpecific^ m;
		// Set the model specific settings
		for (auto &param : node.get_child("modelSpecificSettings")) // An Array
		{
			Console::WriteLine("-> Reading Model Specific: '{0}' ", gcnew String(param.first.c_str()));
			String^ f = gcnew String(param.first.c_str());
			// *** ANCHOR POINT FOR LOOPING THROUGH THE MODELS ***
			// Loop through our hsConfig Class
			for (const auto& itr : param.second)
			{
				
				// Set Model Series
				String^ f1 = gcnew String(itr.first.c_str());
				if (f1->CompareTo("modelSeries") == 0)
				{
					m = safe_cast<ModelSpecific^>(hsConfig->ModelSpecificList[modelIndex++]);
					standardString = marshal_as<std::string>(m->getModelSeries());
					node.put(".", standardString);
					Console::WriteLine("--> Reading Model: '{0}' ", gcnew String(itr.second.get_value("").c_str()));
				}
				// Set the models
				else if (f1->CompareTo("models") == 0)
				{
					int modelsIndex = 0;
					auto& node1 = itr.second;
					for (const auto& mdl : node1.get_child(""))
					{
						String^ tmpModel = gcnew String(mdl.second.get_value("").c_str());
						Console::WriteLine("--> Getting Models: '{0}' ", tmpModel);
						// Set all the models for this series
						String^ s = safe_cast<String^>(m->modelList[modelsIndex++]);
						standardString = marshal_as<std::string>(s);
						//node.add_child("key", standardString);
					}
				}
				// Set the Model Firmware
				else if (f1->CompareTo("modelFirmware") == 0)
				{
					auto& node2 = itr.second;
					for (const auto& md2 : node2.get_child(""))
					{
						for each(ModelFirmware^ mfl in m->ModelFirmware)
						{
							for (const auto& md3 : md2.second)
							{
								f4 = gcnew String(md3.first.c_str());
								Console::WriteLine("----> Reading Firmware: '{0}' ", f4);
								if (f4->CompareTo("firmwareName") == 0)
								{
									standardString = marshal_as<std::string>(mfl->getFirmwareName());
									String^ s4 = gcnew String(standardString.c_str());
									Console::WriteLine("-----> Writing Firmware Name: '{0}' ", s4);
									node.put("firmwareName", standardString);
								}
								else if (f4->CompareTo("latest") == 0)
								{
									standardString = marshal_as<std::string>(mfl->getLatest());
									String^ s4 = gcnew String(standardString.c_str());
									Console::WriteLine("-----> Writing Firmware Latest: '{0}' ", s4);
									node.put("latest", standardString);
								}
								else if (f4->CompareTo("firmwareParams") == 0)
								{
									// Set the Firmware Parameters for this Model
									int i = 0;
									auto& node3 = md3.second;
									for (const auto& md4 : node3.get_child(""))
									{
										String^ tmp = gcnew String(md4.first.c_str());
										if (tmp->Empty)
										{
											tmp = "Array";

										}
										FirmwareParams^ fpl = safe_cast<FirmwareParams^>(mfl->FirmwareParamsList[i++]);
										Console::WriteLine("-----> Looping into FirmwareParams: '{0}' ", tmp);
											
										for (const auto& md5 : md4.second)
										{
											f4 = gcnew String(md5.first.c_str());
											Console::WriteLine("-------> Writing ModelFirmware: '{0}' ", f4);
											if (f4->CompareTo("name") == 0)
											{
												standardString = marshal_as<std::string>(fpl->getName());
												String^ s4 = gcnew String(standardString.c_str());
												Console::WriteLine("-------> Writing Firmware Params Value: '{0}' ", s4);
												node.put("name", "888888");
											}
											else if (f4->CompareTo("access") == 0)
											{
												standardString = marshal_as<std::string>(fpl->getAccess());
												String^ s4 = gcnew String(standardString.c_str());
												Console::WriteLine("-------> Writing Firmware Params Value: '{0}' ", s4);
												node.put("access", standardString);
											}
											else if (f4->CompareTo("usageId") == 0)
											{
												standardString = marshal_as<std::string>(fpl->getUsageId());
												String^ s4 = gcnew String(standardString.c_str());
												Console::WriteLine("-------> Writing Firmware Params Value: '{0}' ", s4);
												node.put("usageId", standardString);
											}
											else if (f4->CompareTo("value") == 0)
											{
												standardString = marshal_as<std::string>(fpl->getValue());
												String^ s4 = gcnew String(standardString.c_str());
												Console::WriteLine("-------> Writing Firmware Params Value: '{0}' ", s4);
												node.put("value", standardString);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	write_json(filename, pt);
}
void CreateAndDisplayJSONObject()
{
	// Create a JSON object.
	/*json::value obj;
	obj[L"Title"] = json::value::string(U("Mobile"));
	obj[L"Subtitle"] = json::value::string(U("Mobile Developer"));
	obj[L"Description"] = json::value::string(U("Mobile feature articles"));
	obj[L"MainPage"] = json::value::string(U("mobile"));
	obj[L"Items"] = json::value::null();
	obj[L"Id"] = json::value::string(U("2"));*/

	// Write the current JSON value to a stream with the native platform character width
	/*utility::stringstream_t stream;
	obj.serialize(stream);*/

	// Display the string stream
	//std::wcout << stream.str();
}
