#pragma once

#define GLEW_STATIC

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtx/euler_angles.hpp>
class Transform
{
	glm::mat4 rotMatrix;
	glm::mat4 worldMatrix;

	//We make our quaternion private
	//Usually we only want our Euler angles accessible, and have quaternions work underneath
	//This is because Euler angles are easier to visualize and understand
	glm::quat rotation;


public:
	glm::vec3 position;
	glm::vec3 scale;
	glm::vec3 eulerRotation;

	Transform();
	~Transform();

	glm::mat4 GetWorldMatrix();
	void CalculateWorldMatrix();
};

