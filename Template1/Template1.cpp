#include "stdafx.h"
#include <Windows.h>
#include "include\GL\GL.H"
#include "include\GL\GLU.H"
#include "include\GL\glut.h"
#include <cmath>
#include <stdio.h>
#include "SOIL2\SOIL2.h"
#include "GLFW\glfw3.h"

GLuint      texture[10];                         // Storage For Textures

int LoadGLTextures()                                    // Load Bitmaps And Convert To Textures
{
	/* load an image file directly as a new OpenGL texture */
	glGenTextures(3, texture);
	texture[0] = SOIL_load_OGL_texture
	(
		"C:/Users/Ryzen/Desktop/P£/II stopieñ/II semestr/MMwGK/laboratorium/template/projekt/126p_L_side.bmp",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);



	if (texture[0] == 0) {
		printf("ERROR");
		return false;
	}


	glBindTexture(GL_TEXTURE_2D, texture[0]);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);


	texture[1] = SOIL_load_OGL_texture
	(
		"C:/Users/Ryzen/Desktop/P£/II stopieñ/II semestr/MMwGK/laboratorium/template/projekt/126p_front.bmp",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);


	if (texture[1] == 0) {
		printf("ERROR");
		return false;
	}


	glBindTexture(GL_TEXTURE_2D, texture[1]);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);

	texture[2] = SOIL_load_OGL_texture
	(
		"C:/Users/Ryzen/Desktop/P£/II stopieñ/II semestr/MMwGK/laboratorium/template/projekt/126p_hood.bmp",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);


	if (texture[2] == 0) {
		printf("ERROR");
		return false;
	}

	glBindTexture(GL_TEXTURE_2D, texture[2]);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);

	texture[3] = SOIL_load_OGL_texture
	(
		"C:/Users/Ryzen/Desktop/P£/II stopieñ/II semestr/MMwGK/laboratorium/template/projekt/126p_windscreen.bmp",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);


	if (texture[3] == 0) {
		printf("ERROR");
		return false;
	}

	glBindTexture(GL_TEXTURE_2D, texture[3]);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);

	texture[4] = SOIL_load_OGL_texture
	(
		"C:/Users/Ryzen/Desktop/P£/II stopieñ/II semestr/MMwGK/laboratorium/template/projekt/126p_rear_window.bmp",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);


	if (texture[4] == 0) {
		printf("ERROR");
		return false;
	}

	glBindTexture(GL_TEXTURE_2D, texture[4]);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);

	texture[5] = SOIL_load_OGL_texture
	(
		"C:/Users/Ryzen/Desktop/P£/II stopieñ/II semestr/MMwGK/laboratorium/template/projekt/126p_back.bmp",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);


	if (texture[5] == 0) {
		printf("ERROR");
		return false;
	}

	glBindTexture(GL_TEXTURE_2D, texture[5]);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);

	texture[6] = SOIL_load_OGL_texture
	(
		"C:/Users/Ryzen/Desktop/P£/II stopieñ/II semestr/MMwGK/laboratorium/template/projekt/126p_tyre.bmp",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);


	if (texture[6] == 0) {
		printf("ERROR");
		return false;
	}

	glBindTexture(GL_TEXTURE_2D, texture[6]);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);

	texture[7] = SOIL_load_OGL_texture
	(
		"C:/Users/Ryzen/Desktop/P£/II stopieñ/II semestr/MMwGK/laboratorium/template/projekt/126p_hubcap.bmp",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);


	if (texture[7] == 0) {
		printf("ERROR");
		return false;
	}

	glBindTexture(GL_TEXTURE_2D, texture[7]);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);

	texture[8] = SOIL_load_OGL_texture
	(
		"C:/Users/Ryzen/Desktop/P£/II stopieñ/II semestr/MMwGK/laboratorium/template/projekt/parking.bmp",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);


	if (texture[8] == 0) {
		printf("ERROR");
		return false;
	}

	glBindTexture(GL_TEXTURE_2D, texture[8]);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);

	texture[9] = SOIL_load_OGL_texture
		(
			"C:/Users/Ryzen/Desktop/P£/II stopieñ/II semestr/MMwGK/laboratorium/template/projekt/126p_R_side.bmp",
			SOIL_LOAD_AUTO,
			SOIL_CREATE_NEW_ID,
			SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
		);


	if (texture[9] == 0) {
		printf("ERROR");
		return false;
	}

	glBindTexture(GL_TEXTURE_2D, texture[9]);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);

	return true;
}

#define M_PI 3.1415926535897932384626433832795

double rotate_x = 0;
double rotate_y = 0;
double zoom = 1;
float carRot = 0.0;
float carAlpha = 0.0;


void timer(int a) {
	carAlpha += 0.01;
	carRot += -0.57;
	glutPostRedisplay();
}

void drawHubcap() {
	for (float alpha = 0; alpha < 2 * M_PI; alpha += 0.1f) {
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture[7]);
		glBegin(GL_TRIANGLES);
		glColor3f(1.0f, 1.0f, 1.0f);
		glTexCoord2f(0.5f, 0.5f); glVertex3f(0.0f, 0.0f, 3.1f);
		glTexCoord2f(0.5f, 1.0f); glVertex3f(cos(alpha), sin(alpha), 3.1f);
		glTexCoord2f(0.6f, 0.95f); glVertex3f(cos(alpha + 0.1), sin(alpha + 0.1), 3.1f);
		glEnd();
		glDisable(GL_TEXTURE_2D);
	}
}

void drawTyre() {
	for (float alpha = 0; alpha < 2 * M_PI; alpha += 0.1f) {
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture[6]);
		glBegin(GL_POLYGON);
		glColor3f(0.0f, 1.0f, 0.0f);
		glTexCoord2f(0.0f, 0.0f); glVertex3f(cos(alpha + 0.1f), sin(alpha + 0.1f), 3.1f);
		glTexCoord2f(0.0f, 1.0f); glVertex3f(cos(alpha), sin(alpha), 3.1f);
		glTexCoord2f(1.0f, 1.0f); glVertex3f(cos(alpha), sin(alpha), 2.6f);
		glTexCoord2f(1.0f, 0.0f); glVertex3f(cos(alpha + 0.1f), sin(alpha + 0.1f), 2.6f);
		glEnd();
		glDisable(GL_TEXTURE_2D);
	}
}

void drawWheelBack() {
	for (float alpha = 0; alpha < 2 * M_PI; alpha += 0.1f) {
		glBegin(GL_TRIANGLES);
		glColor3f(0.5f, 0.5f, 0.5f);
		glVertex3f(0.0f, 0.0f, 3.1f);
		glVertex3f(cos(alpha), sin(alpha), 3.1f);
		glVertex3f(cos(alpha + 0.1), sin(alpha + 0.1), 3.1f);
		glEnd();
	}
}

void DrawWheel() {
	glPushMatrix();
	drawHubcap();
	drawTyre();
	glTranslated(0.0f, 0.0f, -0.5f);
	drawWheelBack();
	glPopMatrix();
}

void DrawLSide(float Z) {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[0]);
	glBegin(GL_POLYGON);
	glTexCoord2f(1.0/17.0, 0.0f); glVertex3f(-7.0f, -4.0f, Z);
	glTexCoord2f(16.5/17.0, 0.0f); glVertex3f(8.5f, -4.0f, Z);
	glTexCoord2f(16.5 / 17.0, 3.5/7.0); glVertex3f(8.5f, -0.5f, Z);
	glTexCoord2f(13.0/17.0, 4.0/7.0); glVertex3f(5.0f, 0.0f, Z);
	glTexCoord2f(10.5/17.0, 1.0f); glVertex3f(2.5f, 3.0f, Z);
	glTexCoord2f(3.5/17.0, 1.0f); glVertex3f(-5.0f, 3.0f, Z);
	glTexCoord2f(0.0f, 3.0/7.0); glVertex3f(-8.0f, -1.0f, Z);
	glEnd();
	glDisable(GL_TEXTURE_2D);
}

void DrawRSide(float Z) {
	glRotated(180, 0.0f, 1.0f, 0.0f);
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[0]);
	glBegin(GL_POLYGON);
	glTexCoord2f(1.0 / 17.0, 0.0f); glVertex3f(7.0f, -4.0f, Z);
	glTexCoord2f(16.5 / 17.0, 0.0f); glVertex3f(-8.5f, -4.0f, Z);
	glTexCoord2f(16.5 / 17.0, 3.5 / 7.0); glVertex3f(-8.5f, -0.5f, Z);
	glTexCoord2f(13.0 / 17.0, 4.0 / 7.0); glVertex3f(-5.0f, 0.0f, Z);
	glTexCoord2f(10.5 / 17.0, 1.0f); glVertex3f(-2.5f, 3.0f, Z);
	glTexCoord2f(3.5 / 17.0, 1.0f); glVertex3f(5.0f, 3.0f, Z);
	glTexCoord2f(0.0f, 3.0 / 7.0); glVertex3f(8.0f, -1.0f, Z);
	glEnd();
	glDisable(GL_TEXTURE_2D);
	glRotated(-180, 0.0f, 1.0f, 0.0f);
}

void DrawLattern() {
	glTranslated(0.0, 0.0, 10.0);
	GLUquadric* quad;
	quad = gluNewQuadric();
	gluQuadricNormals(quad, GLU_SMOOTH);
	glColor3f(0.0f, 0.0f, 0.0f);
	glRotated(-90, 1.0, 0.0, 0.0);
	glTranslated(0.0, -20.0, -5.0);
	gluCylinder(quad, 1.0f, 0.5f, 20.0f, 50, 50);
	glRotated(90, 1.0, 0.0, 0.0);

	glTranslated(0.0, 20.0, 0.0);
	glDisable(GL_LIGHTING);
	GLUquadricObj* sphere;
	sphere = gluNewQuadric();
	gluQuadricDrawStyle(sphere, GLU_FILL);
	gluQuadricNormals(sphere, GLU_SMOOTH);

	glColor3f(0.96f, 1.0f, 0.0f);
	gluSphere(sphere, 2.0f, 50, 50);
	glEnable(GL_LIGHTING);
}


		void display(void) {
			
			glClearColor(16.0 / 255.0, 39.0 / 255.0, 105.0 / 255.0, 1.0);
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			glLoadIdentity();
						
			glTranslatef(0.0f, -10.0f, -80.0f);

			glRotatef(rotate_x, 1.0f, 0.0f, 0.0f);
			glRotatef(rotate_y, 0.0f, 1.0f, 0.0f);
			glScalef(zoom, zoom, zoom);

			GLfloat light_ambient[] = { 0.35, 0.35, 0.35, 1.0 }; //sk³adowe œwiat³a otaczaj¹cego
			GLfloat light_diffuse[] = { 255/255, 255/255, 0.0, 1.0 }; //sk³adowe œwiat³a rozproszonego
			GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 }; // sk³adowe œwiat³a odbitego
			GLfloat light_position[] = { 0.0, 20.0, 10.0, 1.0 }; // jeœli 0.0 kierunek, jeœli 1.0 po³o¿enie
			//GLfloat light_spot_direction[] = { 0.0, 0.0, -1.0 }; -- wartoœci domyœlne
			GLfloat light_spot_cutoff = 180;


			glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
			glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
			glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
			glLightfv(GL_LIGHT0, GL_POSITION, light_position);
			//glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, light_spot_direction);
			glLightf(GL_LIGHT0, GL_SPOT_CUTOFF, light_spot_cutoff);

			glPushMatrix();
			DrawLattern();
			glPopMatrix();
	

			glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
			
			// Road
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture[8]);
			
			glBegin(GL_POLYGON);
			glNormal3f(0.0f, 1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-80.0f, -4.5f, 80.0f);
			glTexCoord2f(2.5f, 0.0f); glVertex3f(80.0f, -4.5f, 80.0f);
			glTexCoord2f(2.5f, 2.5f); glVertex3f(80.0f, -4.5f, -80.0f);
			glTexCoord2f(0.0f, 2.5f); glVertex3f(-80.0f, -4.5f, -80.0f);
			glEnd();
			glDisable(GL_TEXTURE_2D);

			// Car movement
			glScalef(20.0f, 20.0f, 20.0f);
			glTranslatef(cos(carAlpha), 0.0f, sin(carAlpha));
			glScalef(0.05f, 0.05f, 0.05f);
			glRotatef(carRot, 0.0f, 1.0f, 0.0f);
			glRotatef(-90.0f, 0.0f, 1.0f, 0.0f);
			
			// Sides
			glNormal3f(-cos(carAlpha), 0.0, -sin(carAlpha));
			DrawLSide(3.0f);
			glNormal3f(-cos(carAlpha), 0.0f, -sin(carAlpha));
			DrawRSide(3.0f);
			glRotated(90.0f, 0.0f, 1.0f, 0.0f);

			// Front
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture[1]);
			glBegin(GL_POLYGON);
			glNormal3f(0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.0f, -4.0f, 8.5f);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(3.0f, -4.0f, 8.5f);
			glTexCoord2f(1.0f, 0.9f); glVertex3f(3.0f, -0.5f, 8.5f);
			glTexCoord2f(0.0f, 0.9f); glVertex3f(-3.0f, -0.5f, 8.5f);
			glEnd();
			glDisable(GL_TEXTURE_2D);

			glEnable(GL_NORMALIZE);
			// Bonnet
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture[2]);
			glBegin(GL_POLYGON);
			glNormal3f(0.0f, 21.0f, 3.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.0f, -0.5f, 8.5f);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(3.0f, -0.5f, 8.5f);
			glTexCoord2f(1.0f, 1.0f); glVertex3f(3.0f, 0.0f, 5.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3f(-3.0f, 0.0f, 5.0f);
			glEnd();
			glDisable(GL_TEXTURE_2D);

			// Windscreen
			
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture[3]);
			glBegin(GL_POLYGON);
			glNormal3f(0.0f, 15.0f, 18.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.0f, 0.0f, 5.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(3.0f, 0.0f, 5.0f);
			glTexCoord2f(0.9f, 1.0f); glVertex3f(3.0f, 3.0f, 2.5f);
			glTexCoord2f(0.1f, 1.0f); glVertex3f(-3.0f, 3.0f, 2.5f);
			glEnd();
			glDisable(GL_TEXTURE_2D);

			// Roof
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture[2]);
			glBegin(GL_POLYGON);
			glNormal3f(0.0f, 1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-3.0f, 3.0f, 2.5f);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(3.0f, 3.0f, 2.5f);
			glTexCoord2f(1.0f, 1.0f); glVertex3f(3.0f, 3.0f, -5.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3f(-3.0f, 3.0f, -5.0f);
			glEnd();
			glDisable(GL_TEXTURE_2D);

			// Rear window
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture[4]);
			glBegin(GL_POLYGON);
			glNormal3f(0.0f, 18.0f, -24.0f);
			glTexCoord2f(0.9f, 1.0f); glVertex3f(-3.0f, 3.0f, -5.0f);
			glTexCoord2f(0.1f, 1.0f); glVertex3f(3.0f, 3.0f, -5.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(3.0f, -1.0f, -8.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(-3.0f, -1.0f, -8.0f);
			glEnd();
			glDisable(GL_TEXTURE_2D);

			// Back
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture[5]);
			glBegin(GL_POLYGON);
			glNormal3f(0.0f, -6.0f, -18.0f);
			glTexCoord2f(1.0f, 1.0f); glVertex3f(-3.0f, -1.0f, -8.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3f(3.0f, -1.0f, -8.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(3.0f, -4.0f, -7.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(-3.0f, -4.0f, -7.0f);
			glEnd();
			glDisable(GL_TEXTURE_2D);

			// Chassis
			glBegin(GL_POLYGON);
			glNormal3f(0.0f, -1.0f, 0.0f);
			glVertex3f(-3.0f, -4.0f, -7.0f);
			glVertex3f(3.0f, -4.0f, -7.0f);
			glVertex3f(3.0f, -4.0f, 8.5f);
			glVertex3f(-3.0f, -4.0f, 8.5f);
			glEnd();

			glRotated(-90.0f, 0.0f, 1.0f, 0.0f);
			// Wheels
			glScalef(1.3f, 1.3f, 1.3f);
			glPushMatrix();
			glTranslated(5.0f, -2.5f, -0.7f);	
			glNormal3f(0.0f, 0.0f, 1.0f);
			DrawWheel();
			
			glTranslated(-8.5f, 0.0f, 0.0f);
			DrawWheel();
			glPopMatrix();

			glRotated(180.0f, 0.0f, 1.0f, 0.0f);
			glPushMatrix();
			glTranslated(3.5f, -2.5f, -0.7f);
			glNormal3f(0.0f, 0.0f, 1.0f);
			DrawWheel();
			glTranslated(-8.5f, 0.0f, 0.0f);
			DrawWheel();
			glPopMatrix();
			

			glFlush();//start processing buffered OpenGL routines
			glutSwapBuffers(); //double buffering effect
			glutTimerFunc(0.1, timer, 5); //Timer set to 0.1 ms
		}

		void specialKeys(int key, int x, int y) {
			//Right -> by right arrow
			if (key == GLUT_KEY_RIGHT)
				rotate_y += 5;

			//Left -> by left arrow
			else if (key == GLUT_KEY_LEFT)
				rotate_y -= 5;

			//Up -> by up arrow
			else if (key == GLUT_KEY_UP)
				rotate_x += 5;

			//Down -> by down arrow
			else if (key == GLUT_KEY_DOWN)
				rotate_x -= 5;

			//Zoom in -> by page up key
			else if (key == GLUT_KEY_PAGE_UP)
				zoom += 0.1;

			//Zoom out -> by page down key
			else if (key == GLUT_KEY_PAGE_DOWN)
				zoom -= 0.1;

			glutPostRedisplay();

		}

		void MyInit(GLvoid) {
			glShadeModel(GL_SMOOTH); //Enable Smooth Shading
			glClearColor(0.0, 0.0, 0.0, 0.0);//select clearing (background) color
											 /* initialize viewing values */
			glClearDepth(1.0f); // Depth Buffer Setup

			glEnable(GL_LIGHTING);
			glEnable(GL_LIGHT0);
			glEnable(GL_DEPTH_TEST); // Enables Depth Testing
			glViewport(0, 0, 400, 400);//window origin and size
			glMatrixMode(GL_PROJECTION);
			glLoadIdentity();//=1
			gluPerspective(54.0f, 1.0f, 10.0f, 200.0f);

			glMatrixMode(GL_MODELVIEW);
			
			glLoadIdentity();
			glEnable(GL_TEXTURE_2D);
			LoadGLTextures();		
		}

		

		int main(int argc, char** argv) { 
			glutInit(&argc, argv);
			glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);//single buffer, RGBA, depth

			int window_width = 800;
			int window_height = 800;
			glutInitWindowSize(window_width, window_height);//initial window size

			glutInitWindowPosition(100, 100);
			glutCreateWindow("Projekt");//create widnow, title bar
			MyInit();
			glutDisplayFunc(display);
			glutSpecialFunc(specialKeys);
			glutMainLoop();//enter main loop and process events
			return 0;
		}
	