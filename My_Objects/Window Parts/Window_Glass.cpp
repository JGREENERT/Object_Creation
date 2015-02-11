#include "Window_Glass.h"

Window_Glass::~Window_Glass(){
    glDeleteBuffers(1, &v_buf);
    glDeleteBuffers(1, &i_buf);
    glDeleteBuffers(1, &c_buf);
}

void Window_Glass::build(){
    glGenBuffers (1, &v_buf);
    glGenBuffers (1, &i_buf);
    glGenBuffers (1, &c_buf);

    //Rectangle Top
    vertices.push_back(length);
    vertices.push_back(height);
    vertices.push_back(-width);
    color.push_back(color1+.5);
    color.push_back(color2+.5);
    color.push_back(color3+.5);

    vertices.push_back(-length);
    vertices.push_back(height);
    vertices.push_back(-width);
    color.push_back(color1+.5);
    color.push_back(color2+.5);
    color.push_back(color3+.5);

    vertices.push_back(-length);
    vertices.push_back(height);
    vertices.push_back(width);
    color.push_back(color1+.5);
    color.push_back(color2+.5);
    color.push_back(color3+.5);

    vertices.push_back(length);
    vertices.push_back(height);
    vertices.push_back(width);
    color.push_back(color1+.5);
    color.push_back(color2+.5);
    color.push_back(color3+.5);

    //Rectangle Bottom
    vertices.push_back(length);
    vertices.push_back(-height);
    vertices.push_back(-width);
    color.push_back(color1+.10);
    color.push_back(color2+.10);
    color.push_back(color3+.10);

    vertices.push_back(-length);
    vertices.push_back(-height);
    vertices.push_back(-width);
    color.push_back(color1+.10);
    color.push_back(color2+.10);
    color.push_back(color3+.10);

    vertices.push_back(-length);
    vertices.push_back(-height);
    vertices.push_back(width);
    color.push_back(color1+.10);
    color.push_back(color2+.10);
    color.push_back(color3+.10);

    vertices.push_back(length);
    vertices.push_back(-height);
    vertices.push_back(width);
    color.push_back(color1+.10);
    color.push_back(color2+.10);
    color.push_back(color3+.10);

    //Right Face
    vertices.push_back(length);
    vertices.push_back(-height);
    vertices.push_back(-width);
    color.push_back(color1+.15);
    color.push_back(color2+.15);
    color.push_back(color3+.15);

    vertices.push_back(length);
    vertices.push_back(-height);
    vertices.push_back(width);
    color.push_back(color1+.15);
    color.push_back(color2+.15);
    color.push_back(color3+.15);

    vertices.push_back(length);
    vertices.push_back(height);
    vertices.push_back(width);
    color.push_back(color1+.15);
    color.push_back(color2+.15);
    color.push_back(color3+.15);

    vertices.push_back(length);
    vertices.push_back(height);
    vertices.push_back(-width);
    color.push_back(color1+.15);
    color.push_back(color2+.15);
    color.push_back(color3+.15);

    //Left Face
    vertices.push_back(-length);
    vertices.push_back(-height);
    vertices.push_back(-width);
    color.push_back(color1+.20);
    color.push_back(color2+.20);
    color.push_back(color3+.20);

    vertices.push_back(-length);
    vertices.push_back(-height);
    vertices.push_back(width);
    color.push_back(color1+.20);
    color.push_back(color2+.20);
    color.push_back(color3+.20);

    vertices.push_back(-length);
    vertices.push_back(height);
    vertices.push_back(width);
    color.push_back(color1+.20);
    color.push_back(color2+.20);
    color.push_back(color3+.20);

    vertices.push_back(-length);
    vertices.push_back(height);
    vertices.push_back(-width);
    color.push_back(color1+.20);
    color.push_back(color2+.20);
    color.push_back(color3+.20);

    //Back Face
    vertices.push_back(length);
    vertices.push_back(height);
    vertices.push_back(-width);
    color.push_back(color1+.25);
    color.push_back(color2+.25);
    color.push_back(color3+.25);

    vertices.push_back(length);
    vertices.push_back(-height);
    vertices.push_back(-width);
    color.push_back(color1+.25);
    color.push_back(color2+.25);
    color.push_back(color3+.25);

    vertices.push_back(-length);
    vertices.push_back(-height);
    vertices.push_back(-width);
    color.push_back(color1+.25);
    color.push_back(color2+.25);
    color.push_back(color3+.25);

    vertices.push_back(-length);
    vertices.push_back(height);
    vertices.push_back(-width);
    color.push_back(color1+.25);
    color.push_back(color2+.25);
    color.push_back(color3+.25);

    //Front Face
    vertices.push_back(-length);
    vertices.push_back(-height);
    vertices.push_back(width);
    color.push_back(color1+.30);
    color.push_back(color2+.30);
    color.push_back(color3+.30);

    vertices.push_back(-length);
    vertices.push_back(height);
    vertices.push_back(width);
    color.push_back(color1+.30);
    color.push_back(color2+.30);
    color.push_back(color3+.30);

    vertices.push_back(length);
    vertices.push_back(height);
    vertices.push_back(width);
    color.push_back(color1+.30);
    color.push_back(color2+.30);
    color.push_back(color3+.30);

    vertices.push_back(length);
    vertices.push_back(-height);
    vertices.push_back(width);
    color.push_back(color1+.30);
    color.push_back(color2+.30);
    color.push_back(color3+.30);

    //Top Indexes
    indexes.push_back(0);
    indexes.push_back(1);
    indexes.push_back(2);
    indexes.push_back(3);
    indexes.push_back(0);
    indexes.push_back(1);

    //Bottom Indexes
    indexes.push_back(4);
    indexes.push_back(5);
    indexes.push_back(6);
    indexes.push_back(7);
    indexes.push_back(4);
    indexes.push_back(5);

    //Right Face
    indexes.push_back(8);
    indexes.push_back(9);
    indexes.push_back(10);
    indexes.push_back(11);
    indexes.push_back(8);
    indexes.push_back(9);

    //Left Face
    indexes.push_back(12);
    indexes.push_back(13);
    indexes.push_back(14);
    indexes.push_back(15);
    indexes.push_back(12);
    indexes.push_back(13);

    //Back Face
    indexes.push_back(16);
    indexes.push_back(17);
    indexes.push_back(18);
    indexes.push_back(19);
    indexes.push_back(16);
    indexes.push_back(17);

    //Front Face
    indexes.push_back(20);
    indexes.push_back(21);
    indexes.push_back(22);
    indexes.push_back(23);
    indexes.push_back(20);
    indexes.push_back(21);

    glBindBuffer (GL_ARRAY_BUFFER, v_buf);
    glBufferData (GL_ARRAY_BUFFER, vertices.size() * sizeof(float),
            vertices.data(), GL_STATIC_DRAW);
    glBindBuffer (GL_ARRAY_BUFFER, 0);

    glBindBuffer (GL_ARRAY_BUFFER, c_buf);
    glBufferData (GL_ARRAY_BUFFER,
            color.size() * sizeof(GLfloat), color.data(), GL_STATIC_DRAW);
    glBindBuffer (GL_ARRAY_BUFFER, 0);

    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, i_buf);
    glBufferData (GL_ELEMENT_ARRAY_BUFFER, indexes.size() * sizeof(GLushort),
            indexes.data(), GL_STATIC_DRAW);
    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
}

void Window_Glass::render() const{
    glPushAttrib(GL_ENABLE_BIT);
    glBindBuffer(GL_ARRAY_BUFFER, v_buf);
    glVertexPointer(3, GL_FLOAT, 0, 0);
    glBindBuffer(GL_ARRAY_BUFFER, c_buf);
    glColorPointer(3, GL_FLOAT, 0, 0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, i_buf);

    glDrawElements (GL_QUAD_STRIP, indexes.size(), GL_UNSIGNED_SHORT, 0);

    glBindBuffer (GL_ARRAY_BUFFER, 0);
    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
    glPopAttrib();
}