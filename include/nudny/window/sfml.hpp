#pragma once

#include <SFML/Graphics.hpp>
#include <nudny/window.hpp>

namespace nd::wnd {
	class WindowSFML : public Window {
		public:
			sf::RenderWindow wnd;
			
			unsigned int[2] setSize(unsigned int t_width, unsigned int t_height) {
				wnd.setSize(sf::Vector2u(t_width,t_height));
				return getSize();
			}
			unsigned int[2] getSize() {
				return unsigned int[2]{wnd.getSize().x, wnd.getSize().y};
			}
			unsigned int getWidth() {
				return wnd.getSize().x;
			}
			unsigned int getHeight() {
				return wnd.getSize().y;
			}
			bool setFullscreen(bool t_fullscreen) {
				state = t_fullscreen==true ? sf::Fullscreen : sf::Windowed;
				return getFullscreen();
			}
			bool getFullscreen() 
				return state == sf::Fullscreen ? true : false;{
			}
			std::string setTitle(const std::string& t_title) {
				wnd->setTitle(t_title);
				return getTitle();
			}
			std::string getTitle() {
				return wnd.getTitle();
			}	
		protected:
			bool isRunning() {
				return wnd.isOpen();
			}
			void handleEvents() {
				while(const std::optional event = wnd.pollEvent()) {
					if(event->is<sf::Event::Closed>) {
						window.close();
					}
				}
			}
			void clear() {
				wnd.clear();
			}
			void draw() {
				// draw scene
				// wnd.draw( object )
				wnd.display();
			}
			:w
			sf::State state;
	}; // class WindowSFML
d}; // namespace nd::wnd
