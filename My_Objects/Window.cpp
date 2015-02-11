#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/transform.hpp>
#include "Window.h"
using namespace std;

//Window Beams
Window_Beam wb1;
Window_Beam wb2;
Window_Beam wb3;
Window_Beam wb4;
Window_Beam wb5;
Window_Beam wb6;
Window_Beam wb7;

//Window Glass
Window_Glass wg1;

//Window Coordinate Frame
glm::mat4 window_cf = glm::translate(glm::vec3(0, 0, 0));

Window::~Window()
{
    wb1.~Window_Beam();
    wb2.~Window_Beam();
    wb3.~Window_Beam();
    wb4.~Window_Beam();
    wb5.~Window_Beam();
    wb6.~Window_Beam();
    wb7.~Window_Beam();

    wg1.~Window_Glass();
}

void Window::build()
{
    wb1.build();
    wb2.build();
    wb3.build();
    wb4.build();
    wb5.build();
    wb6.build();
    wb7.build();

    wg1.build();
}

void Window::render() const
{
    //Window Beams
    glPushMatrix();
    glMultMatrixf(glm::value_ptr(window_cf));
    glTranslated(-2.18, 0, 0);
    wb1.render();
    glPopMatrix();

    glPushMatrix();
    glMultMatrixf(glm::value_ptr(window_cf));
    glTranslated(2.18, 0, 0);
    wb2.render();
    glPopMatrix();

    glPushMatrix();
    glRotated(90, 0, 0, 1);
    glMultMatrixf(glm::value_ptr(window_cf));
    glTranslated(1.25, 1, 0);
    wb3.render();
    glPopMatrix();

    glPushMatrix();
    glRotated(90, 0, 0, 1);
    glMultMatrixf(glm::value_ptr(window_cf));
    glTranslated(-1.25, 1, 0);
    wb4.render();
    glPopMatrix();

    glPushMatrix();
    glRotated(90, 0, 0, 1);
    glMultMatrixf(glm::value_ptr(window_cf));
    glTranslated(1.25, -1, 0);
    wb5.render();
    glPopMatrix();

    glPushMatrix();
    glRotated(90, 0, 0, 1);
    glMultMatrixf(glm::value_ptr(window_cf));
    glTranslated(-1.25, -1, 0);
    wb6.render();
    glPopMatrix();

    glPushMatrix();
    glMultMatrixf(glm::value_ptr(window_cf));
    glTranslated(0, 0, 0);
    wb7.render();
    glPopMatrix();

    //Window Glass
    glPushMatrix();
    glMultMatrixf(glm::value_ptr(window_cf));
    glTranslated(0, 0, 0);
    wg1.render();
    glPopMatrix();
}