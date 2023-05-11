/*!
	@file
	@author		Albert Semenov
	@date		08/2010
*/

#include "Precompiled.h"
#include "VerticalSelectorControl.h"

namespace tools
{

	void VerticalSelectorControl::OnInitialise(Control* _parent, MyGUI::Widget* _place, std::string_view)
	{
		SelectorControl::OnInitialise(_parent, _place, "VerticalSelectorControl.layout");
		setPropertyColour("ColourSelector");
	}

}
