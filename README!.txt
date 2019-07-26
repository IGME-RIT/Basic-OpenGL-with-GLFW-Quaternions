Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the Quaternions Tutorial!
Prerequesites: Transform, SRT

There is a common problem that can happen with
glm::rotate and hierarchy rotation, 
this problem is called "gimbal lock"
Please watch this video:
	https://www.youtube.com/watch?v=zc8b2Jo7mno
	
This problem can be fixed very easily with quaternions.
With quaternions, each axis of rotation is independent of
each other

In Transform.h, we have a vec3 for eulerRotation, each
member of the vec3 is for a different axis: x, y, z.

In Entity.cpp, in Entity::Update(), we add to each angle
to make the triangle spin in each direction every frame.

In Transform.cpp, we make a quaternion (glm::quat) from
our angles, with one simple command:
	rotation = glm::quat(eulerRotation);
rotation is a glm::quat,

After that, we make our rotation matrix from the quaternion:
	rotMatrix = glm::mat4_cast(rotation);
rotMatrix is a glm::mat4 matrix

Once we have the rotation matrix, we apply it to the world
matrix, just like before