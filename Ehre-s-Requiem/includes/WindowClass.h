#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <STB/stb_image.h>
class WindowClass
{
private:
	GLFWwindow* windowClass;
	int windowWidth;
	int windowHeight;
	const char* windowTitle;
	const char* windowIconPath;
	


public:
	
	WindowClass(int, int, const char*, const char*);
	~WindowClass();
	void WindowCreate();
	GLFWwindow* getWinClass();
	void InicializateGLFW();
	/*void DestroyWindow();
	void ShowWindow();
	void HideWindow();
	void SetWindowPosition(int x, int y);
	void SetWindowSize(int width, int height);
	void SetWindowTitle(const char* title);
	void SetWindowIcon(const char* iconPath);
	void SetWindowBackgroundColor(int r, int g, int b);*/
	
};

