# pragma once

namespace nd::wnd {
	class Window {
		public:
			virtual unsigned int[2] setSize(int, int) = 0;
			virtual unsigned int[2] getSize() = 0;
			virtual unsigned int getWidth() = 0;
			virtual unsigned int getHeight() = 0;

			virtual bool setFullscreen(bool) = 0;
			virtual bool getFullscreen() = 0;

			virtual std::string setTitle(std::string) = 0;
			virtual std::string getString() = 0;

			virtual bool run() = 0;

	}; // class window
}; //namespace
