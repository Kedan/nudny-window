# pragma once

#include <string>

namespace nd::wnd {
	class Window {
		public:
			virtual unsigned int[2] setSizeNd(int, int) = 0;
			virtual unsigned int[2] getSize() = 0;
			virtual unsigned int getWidth() = 0;
			virtual unsigned int getHeight() = 0;

			virtual bool setFullscreen(bool) = 0;
			virtual bool getFullscreen() = 0;

			virtual std::string setTitle(const std::string&) = 0;
			virtual std::string getString() = 0;

			virtual bool run() {
				init();
				return loop();
			}
		protected:
			virtual bool isRunning() = 0;
			virtual void init();
			virtual bool loop() {
				while(isRunning()) {
					handleEvents();
					clear();
					draw();
					update();
				}
				return isRunning();
			};
			virtual void handleEvents() = 0;
			virtual void clear() = 0;
			virtual void draw() = 0;
			virtual void update() = 0;

	}; // class window
}; //namespace
