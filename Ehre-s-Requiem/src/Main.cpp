#include <Windows.h>
#include "../includes/WindowClass.h"
#include <iostream>
int main()
{
	
	WindowClass* w = new WindowClass(1280, 720, "Teste", "..\\Icon\\image.png");
	w->InicializateGLFW();
	w->WindowCreate();

	GLFWwindow* windowClass{ w->getWinClass() };

	
	do {

		glfwPollEvents();
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(windowClass);

	} while (!glfwWindowShouldClose(windowClass));

	glfwTerminate();
	delete w;
	return 0;
}