#ifndef PARTICLE_H
#define PARTICLE_H
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <vector>

class particle {
public:
	glm::vec3 position;
	glm::vec3 vel;
	glm::vec3 acc;
	glm::vec4 color;
	//light

	particle(double x,double y,double z,glm::vec4 Color)
	{
		position = glm::vec3(x, y, z);
		vel = glm::vec3(0, 0, 0);
		acc = glm::vec3(0, 0, 0);
		color = Color;
	}
	void update()
	{
		vel += acc;
		position += vel;
		acc *= 0;
	}
	void applyForce(double force)
	{
		acc += force;
	}
};
#endif
