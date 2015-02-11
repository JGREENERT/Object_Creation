#include "Screen.h"

Screen::~Screen(){
    glDeleteBuffers(1, &v_buf);
    glDeleteBuffers(1, &i_buf);
    glDeleteBuffers(1, &c_buf);
}

void Screen::build(){
    glGenBuffers (1, &v_buf);
    glGenBuffers (1, &i_buf);
    glGenBuffers (1, &c_buf);
    //top
    vertices.push_back(x);
    vertices.push_back(y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(x);
    vertices.push_back(y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    //bot
    vertices.push_back(x);
    vertices.push_back(-y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(-y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(-y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(x);
    vertices.push_back(-y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    //right
    vertices.push_back(x);
    vertices.push_back(-y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(x);
    vertices.push_back(-y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(x);
    vertices.push_back(y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(x);
    vertices.push_back(y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    //left
    vertices.push_back(-x);
    vertices.push_back(-y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(-y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    //back
    vertices.push_back(x);
    vertices.push_back(y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(x);
    vertices.push_back(-y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(-y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(y);
    vertices.push_back(-z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    //front
    vertices.push_back(x);
    vertices.push_back(y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(x);
    vertices.push_back(-y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(-y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    vertices.push_back(-x);
    vertices.push_back(y);
    vertices.push_back(z);
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);
    
    indexes.push_back(0);
    indexes.push_back(1);
    indexes.push_back(2);
    indexes.push_back(3);
    //Close
    indexes.push_back(0);
    indexes.push_back(1);
    
    indexes.push_back(4);
    indexes.push_back(5);
    indexes.push_back(6);
    indexes.push_back(7);
    //close
    indexes.push_back(4);
    indexes.push_back(5);
    
    indexes.push_back(8);
    indexes.push_back(9);
    indexes.push_back(10);
    indexes.push_back(11);
    //close
    indexes.push_back(8);
    indexes.push_back(9);
    
    indexes.push_back(12);
    indexes.push_back(13);
    indexes.push_back(14);
    indexes.push_back(15);
    //close
    indexes.push_back(12);
    indexes.push_back(13);
    
    indexes.push_back(16);
    indexes.push_back(17);
    indexes.push_back(18);
    indexes.push_back(19);
    //close
    indexes.push_back(16);
    indexes.push_back(17);
    
    indexes.push_back(20);
    indexes.push_back(21);
    indexes.push_back(22);
    indexes.push_back(23);
    //close
    indexes.push_back(20);
    indexes.push_back(21);
    
    indexes.push_back(24);
    indexes.push_back(25);
    indexes.push_back(26);
    indexes.push_back(27);
    //close
    indexes.push_back(24);
    indexes.push_back(25);
    
    /* select the buffer */
    glBindBuffer (GL_ARRAY_BUFFER, v_buf);
    /* allocate in GPU and copy from CPU */
    glBufferData (GL_ARRAY_BUFFER, vertices.size() * sizeof(float),
                  vertices.data(), GL_STATIC_DRAW);
    /* deselect the buffer */
    glBindBuffer (GL_ARRAY_BUFFER, 0);
    
    glBindBuffer (GL_ARRAY_BUFFER, c_buf);
    glBufferData (GL_ARRAY_BUFFER,
                  color.size() * sizeof(GLfloat), color.data(), GL_STATIC_DRAW);
    glBindBuffer (GL_ARRAY_BUFFER, 0);
    
    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, i_buf);
    /* allocate in GPU and copy from CPU */
    glBufferData (GL_ELEMENT_ARRAY_BUFFER, indexes.size() * sizeof(GLushort),
                  indexes.data(), GL_STATIC_DRAW);
    /* deselect the buffer */
    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
}

void Screen::render() const{
    /* select the buffs */
    glPushAttrib(GL_ENABLE_BIT);
    //glDisableClientState(GL_COLOR_ARRAY);
    glBindBuffer (GL_ARRAY_BUFFER, v_buf);
    glVertexPointer(3, GL_FLOAT, 0, 0);
    glBindBuffer(GL_ARRAY_BUFFER, c_buf);
    glColorPointer(3, GL_FLOAT, 0, 0);
    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, i_buf);
    glDrawElements (GL_QUAD_STRIP, 30, GL_UNSIGNED_SHORT, 0);
    
    /* deselect the buffs */
    glBindBuffer (GL_ARRAY_BUFFER, 0);
    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
    glPopAttrib();
}