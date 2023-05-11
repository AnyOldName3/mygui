/*!
	@file
	@author		Albert Semenov
	@date		08/2010
*/

#include "Precompiled.h"
#include "HorizontalSelectorControl.h"

namespace tools
{

	void HorizontalSelectorControl::OnInitialise(Control* _parent, MyGUI::Widget* _place, std::string_view)
	{
		SelectorControl::OnInitialise(_parent, _place, "HorizontalSelectorControl.layout");
		setPropertyColour("ColourSelector");
	}

}
