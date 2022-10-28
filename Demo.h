#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VAO3, VBO3, texture3, VAO4, VBO4, texture4;
	float angle = 0;
	float t = 0;
	float x = 0;
	float y = 0;
	float z = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildPersegipjg();
	void BuildColoredCube2();
	void BuildColoredCube4();
	void BuildColoredPlane();
	void DrawColoredCube();
	void DrawColoredCube2();
	void DrawColoredCube3();
	void DrawColoredCube4();
	void DrawColoredCube5();
	void DrawColoredCube6();
	void DrawColoredPlane();
};

