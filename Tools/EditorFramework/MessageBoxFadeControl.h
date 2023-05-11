/*!
	@file
	@author		Albert Semenov
	@date		08/2010
*/

#ifndef _05ab6d18_ce9a_43df_93dc_98653055410f_
#define _05ab6d18_ce9a_43df_93dc_98653055410f_

#include "Control.h"

namespace tools
{

	class MYGUI_EXPORT_DLL MessageBoxFadeControl :
		public Control
	{
	public:
		MessageBoxFadeControl();
		~MessageBoxFadeControl() override;

	protected:
		void OnInitialise(Control* _parent, MyGUI::Widget* _place, std::string_view _layoutName) override;

	private:
		void notifyFrameStart(float _time);

	private:
		float mMaxAlpha;
	};

}

#endif
