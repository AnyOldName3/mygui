/*!
	@file
	@author		Albert Semenov
	@date		11/2009
*/

#ifndef POINTER_MANAGER_H_
#define POINTER_MANAGER_H_

#include <map>
#include <string>
#include <string_view>
#include <SDL.h>

namespace input
{

	class PointerManager
	{
	public:
		PointerManager();
		virtual ~PointerManager();

		void createPointerManager();
		void destroyPointerManager();

		void setPointerVisible(bool _value);
		void setPointerName(std::string_view _name);

		void loadPointerResources();

	private:
		void notifyChangeMousePointer(std::string_view _name);
		void updateSDLPointer(SDL_SystemCursor _newCursor);
		bool isMouseInClient();
		void setPointer(std::string_view _name);

	private:
		typedef std::map<std::string, SDL_SystemCursor, std::less<>> MapPointer;
		MapPointer mMapPointer;
		bool mManagerPointer;
		SDL_Cursor* mCursor;
	};

} // namespace input

#endif // POINTER_MANAGER_H_
