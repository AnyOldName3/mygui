/*!
	@file
	@author		Albert Semenov
	@date		09/2010
*/

#ifndef _b8560ae2_b63d_469a_9007_4562b883e6e1_
#define _b8560ae2_b63d_469a_9007_4562b883e6e1_

#include "Control.h"

namespace tools
{

	class SettingsGeneralControl :
		public Control
	{
	public:
		SettingsGeneralControl();
		~SettingsGeneralControl() override;

	protected:
		void OnInitialise(Control* _parent, MyGUI::Widget* _place, std::string_view _layoutName) override;
		void OnCommand(std::string_view _command) override;

	private:
		void loadSettings();
		void saveSettings();

		void notifyNewGridStep(MyGUI::Widget* _sender, MyGUI::Widget* _new = nullptr);
		void notifyNewGridStepAccept(MyGUI::EditBox* _sender);
		void notifyMouseButtonClick(MyGUI::Widget* _sender);

		int getGridStep();
		void setGridStep();
		void setLanguageValue(std::string_view _value);
		std::string getLanguageValue();

	private:
		int mGridStep;

		MyGUI::EditBox* mGridEdit;
		MyGUI::Button* mSaveLastTexture;
		MyGUI::ComboBox* mInterfaceLanguage;
	};

}

#endif
