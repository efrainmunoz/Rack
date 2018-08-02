#pragma once
#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "common.hpp"
#include "widgets.hpp"


#ifdef ARCH_MAC
	#define WINDOW_MOD_KEY_NAME "Cmd"
#else
	#define WINDOW_MOD_KEY_NAME "Ctrl"
#endif


namespace rack {


extern GLFWwindow *gWindow;
extern NVGcontext *gVg;
extern NVGcontext *gFramebufferVg;
/** The default font to use for GUI elements */
extern std::shared_ptr<Font> gGuiFont;
/** The scaling ratio */
extern float gPixelRatio;
/* The ratio between the framebuffer size and the window size reported by the OS.
This is not equal to gPixelRatio in general.
*/
extern float gWindowRatio;
extern bool gAllowCursorLock;
extern int gGuiFrame;
extern math::Vec gMousePos;


void windowInit();
void windowDestroy();
void windowRun();
void windowClose();
void windowCursorLock();
void windowCursorUnlock();
bool windowIsModPressed();
bool windowIsShiftPressed();
math::Vec windowGetWindowSize();
void windowSetWindowSize(math::Vec size);
math::Vec windowGetWindowPos();
void windowSetWindowPos(math::Vec pos);
bool windowIsMaximized();
void windowSetTheme(NVGcolor bg, NVGcolor fg);
void windowSetFullScreen(bool fullScreen);
bool windowGetFullScreen();


} // namespace rack
