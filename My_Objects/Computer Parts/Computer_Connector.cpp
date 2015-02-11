#include <lcms.h>
#include "Computer_Connector.h"

Computer_Connector::~Computer_Connector() {
    glDeleteBuffers(1, &v_buf);
    glDeleteBuffers(1, &i_buf);
    glDeleteBuffers(1, &c_buf);
}

void Computer_Connector::build() {
    glGenBuffers (1, &v_buf);
    glGenBuffers (1, &i_buf);
    glGenBuffers (1, &c_buf);

    float delta = 2 * M_PI / N_POINTS;

    /* points in top ring */
    float angle = 0.0f;
    for (int k = 0; k  < N_POINTS; k++)
    {
        float x = TOP_RAD * cos(angle);
        float y = TOP_RAD * sin(angle);
        vertices.push_back (x);
        vertices.push_back (y);
        vertices.push_back (CONE_HEIGHT);

        color.push_back(color1);
        color.push_back(color2);
        color.push_back(color3);
        angle += delta;

    }

    /* vertices at the bottom ring */
    for (int k = 0; k  < N_POINTS; k++)
    {
        float x = BOT_RAD * cos(angle);
        float y = BOT_RAD * sin(angle);
        vertices.push_back (x);
        vertices.push_back (y);
        vertices.push_back (-CONE_HEIGHT);
        color.push_back(color1);
        color.push_back(color2);
        color.push_back(color3);
        angle += delta;
    }

    /* push the TOP CENTER point */
    vertices.push_back (0);  /* x */
    vertices.push_back (0); /* y */
    vertices.push_back (CONE_HEIGHT); /* z */
    color.push_back(color1);
    color.push_back(color2);
    color.push_back(color3);


    /* fill in the vertices */

    for (int k = 0; k < N_POINTS; k++)
    {
        index.push_back (k);
        index.push_back (k + N_POINTS);
    }
    /* close the quad_strip_index for wall */
    index.push_back (0);
    index.push_back (N_POINTS);

    /* first index of the tri-fan */
    index.push_back (N_POINTS * 2);
    /* index of rest of the tri-fan */
    for (int k = 0; k < N_POINTS; k++)
        index.push_back (k);
    /* close the last arc of the tri-fan */
    index.push_back (0);


    glBindBuffer (GL_ARRAY_BUFFER, v_buf);
    glBufferData (GL_ARRAY_BUFFER, vertices.size() * sizeof(float),
            vertices.data(), GL_STATIC_DRAW);
    glBindBuffer (GL_ARRAY_BUFFER, 0);

    glBindBuffer (GL_ARRAY_BUFFER, c_buf);
    glBufferData (GL_ARRAY_BUFFER,
            color.size() * sizeof(GLfloat), color.data(), GL_STATIC_DRAW);
    glBindBuffer (GL_ARRAY_BUFFER, 0);

    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, i_buf);
    glBufferData (GL_ELEMENT_ARRAY_BUFFER, index.size() * sizeof(GLushort),
            index.data(), GL_STATIC_DRAW);
    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
}

void Computer_Connector::render() const {
    /* select the buffs */
    glPushAttrib(GL_ENABLE_BIT);
  //  glDisableClientState(GL_COLOR_ARRAY);
    glBindBuffer (GL_ARRAY_BUFFER, v_buf);
    glVertexPointer(3, GL_FLOAT, 0, 0);
    glBindBuffer(GL_ARRAY_BUFFER, c_buf);
    glColorPointer(3, GL_FLOAT, 0, 0);
    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, i_buf);

    int N = 2*N_POINTS + 2;
    
    glDrawElements (GL_QUAD_STRIP, 2*N_POINTS + 2, GL_UNSIGNED_SHORT, 0);
    glDrawElements (GL_TRIANGLE_FAN, N_POINTS + 2, GL_UNSIGNED_SHORT,
            (void *) (sizeof(GLushort) * N));

    /* deselect the buffs */
    glBindBuffer (GL_ARRAY_BUFFER, 0);
    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, 0);
    glPopAttrib();
}