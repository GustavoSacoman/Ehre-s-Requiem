#include "../../../includes/WindowClass.h"
#include <Windows.h>
WindowClass::WindowClass(int windowWidth, int windowHeight, const char* windowTitle, const char* windowIconPath) :
	windowWidth(windowWidth), windowHeight(windowHeight),
	windowTitle(windowTitle), windowIconPath(windowIconPath),windowClass(nullptr)
{
}

WindowClass::~WindowClass()
{
	if (windowClass) {
		glfwDestroyWindow(windowClass);
	}
	glfwTerminate();
}

void WindowClass::WindowCreate()
{
	
	

	windowClass = glfwCreateWindow(windowWidth, windowHeight, windowTitle, NULL, NULL);
	
	if (!windowClass)
	{
		MessageBox(NULL, L"Press Ok to finish this aplication",
			L"Error creating a window", MB_ICONERROR | MB_OK);
		glfwTerminate();
		return;
	}
	glfwMakeContextCurrent(windowClass);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		MessageBox(NULL, L"Failed to initialize GLAD\nPress Ok to continue",
					L"Error: Glad",MB_ICONERROR | MB_OK);
		return;
	}
}

GLFWwindow* WindowClass::getWinClass()
{
    return windowClass;
}

void WindowClass::InicializateGLFW()
{
	if (!glfwInit())
	{
		MessageBox(NULL, L"Failed to initialize GLFW\n Press OK to continue", L"Error: glwfInit", MB_OK);
		return;
	}


	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GLFW_TRUE);
}

