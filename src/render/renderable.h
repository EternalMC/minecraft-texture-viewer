#ifndef RENDERABLE_H
#define RENDERABLE_H

#include <memory>

#include "glad.h"
#include "material.h"
#include <glm\glm.hpp>

struct vertex {
	glm::vec3 position;
	glm::vec3 normal;
	glm::vec3 tangent;
	glm::vec2 uv;

	vertex(glm::vec3 position, glm::vec3 normal, glm::vec3 tangent, glm::vec2 uv);
};

/*!
 * \brief Something that can be rendered
 *
 * While I normally don't like OOP renderers, this is easy to write
 */
class renderable {
public:
	void render();

	void set_vertex_data(std::vector<vertex> vertices, std::vector<int> indices);
private:
	int num_indices;

	GLuint vao = -1;
};

#endif