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
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VAO3, VBO3, EBO3, texture3, VAO4, VBO4, EBO4, texture4, VAO5, VBO5, EBO5, texture5, texture6, texture7, texture8;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
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
	void BuildColoredPlane();
	void BuildColoredPlane2();
	void BuildColoredPlane3();
	void BuildColoredSkin();
	void BuildColoredCloth();
	void Buildyello();
	void Buildwall();
	void DrawColoredCube();
	void DrawColoredCube2();
	void DrawColoredCube3();
	void DrawColoredCube4();
	void DrawColoredCube5();
	void DrawColoredCube6();
	void DrawColoredCube7();
	void DrawColoredCube8();
	void DrawColoredCube9();
	void Drawmid();
	void Drawtop();
	void Drawppn1();
	void Drawkk1();
	void Drawkk2();
	void Drawkk3();
	void Drawkk4();
	void Drawkk21();
	void Drawkk22();
	void Drawkk23();
	void Drawkk24();
	void Drawppn2();
	void Drawbody();
	void Drawhand1();
	void Drawhand2();
	void Drawwheel1();
	void Drawwheel2();
	void Drawpala();
	void Drawbdn();
	void Drawtgn1();
	void Drawtgn2();
	void Drawkkorg();
	void Drawkkorg2();
	void DrawColoredPlane();
	void DrawColoredPlane2();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

