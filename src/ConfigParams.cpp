#include "ConfigParams.h"
#include "GeneralParams.h"
#include "ConfigTags.h"

using namespace std;
using namespace core;
namespace cppkin
{
	ConfigParams& ConfigParams::Instance()
	{
		static ConfigParams instance;
		return instance;
	}

	void ConfigParams::Load(const GeneralParams& configParams)
	{
		m_hostAddress = StringConverter::Convert(configParams.GetValue(HOST_ADDRESS));
		m_port = configParams.GetValue(PORT);
	}
}
