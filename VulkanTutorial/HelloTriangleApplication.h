#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>
#include <iostream>
#include <stdexcept>
#include <functional>



class HelloTriangleApplication
{
public:
	const int WIDTH = 800;
	const int Height = 600;
	void run() {
		initWindow();
		initVulkan();
		mainLoop();
		cleanup();
	}
private:
	VkInstance instance;
	void createInstance();
	void initWindow();
	void initVulkan();
	void mainLoop();
	void cleanup();
	GLFWwindow* window;
};

