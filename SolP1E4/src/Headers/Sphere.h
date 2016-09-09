/*
 * Sphere.h
 *
 *  Created on: 06/09/2016
 *      Author: rey
 */

#ifndef SPHERE_H_
#define SPHERE_H_

#include <vector>
#include <math.h>

#include "definition.h"

class Sphere {
public:
	Sphere(float ratio, int slices, int stacks);
	void init();
	void load();
	void render();
	virtual ~Sphere();
private:
	std::vector<VertexColor> vertex;
	std::vector<GLuint> index;
	float ratio;
	int slices;
	int stacks;

	GLuint VAO, VBO, EBO;
};

#endif /* SPHERE_H_ */
