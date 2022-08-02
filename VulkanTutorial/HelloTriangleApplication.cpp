#include "HelloTriangleApplication.h"

void HelloTriangleApplication::initWindow() {
	// initialize GLFW library
	glfwInit();

	// don't create OpenGL context
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

	// don't resize window
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	// create window
	window = glfwCreateWindow(WIDTH, Height, "Vulkan",nullptr,nullptr);
}

void HelloTriangleApplication::initVulkan() {}

void HelloTriangleApplication::mainLoop() {
	while (!glfwWindowShouldClose(window))
	{
		glfwPostEmptyEvent();
	}
}

void HelloTriangleApplication::cleanup() {
	glfwDestroyWindow(window);
	glfwTerminate();
}