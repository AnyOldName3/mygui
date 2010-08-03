/*!
	@file
	@author		Albert Semenov
	@date		08/2010
*/
#include "precompiled.h"
#include "DemoKeeper.h"
#include "Base/Main.h"

namespace demo
{

	DemoKeeper::DemoKeeper()
	{
	}

	void DemoKeeper::setupResources()
	{
		base::BaseManager::setupResources();
		addResourceLocation(getRootMedia() + "/Tools/SkinEditor");
		addResourceLocation(getRootMedia() + "/Common/Wallpapers");
	}

	void DemoKeeper::createScene()
	{
		MyGUI::LayoutManager::getInstance().loadLayout("Wallpaper0.layout");
	}

	void DemoKeeper::destroyScene()
	{
	}

} // namespace demo

MYGUI_APP(demo::DemoKeeper)
