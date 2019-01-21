#pragma once

#include "HeadSetConfig.h"
#include "ModelSpecific.h"
#include "ModelFirmware.h"
#include "FirmwareParams.h"
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include <boost/range/iterator_range.hpp>
#include <cassert>
#include <exception>
#include <iostream>
#include <sstream>
#include <string>
#include <list>


ref class ConfiguratorJson
{
public:
	ConfiguratorJson();
	~ConfiguratorJson();
	
	HeadSetConfig^ ReadJson();
	void WriteJson(HeadSetConfig^);
	void parse_config(std::string const&);

private:
	HeadSetConfig^ hsConfig;
	ModelSpecific^ ms;
	ModelFirmware^ mf;
	FirmwareParams^ fp;
};
