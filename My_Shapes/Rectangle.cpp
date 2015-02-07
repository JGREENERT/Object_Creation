#include "Rectangle.h"

Rectangle::~Rectangle(){
    glDeleteBuffers(1, &v_buf);
    glDeleteBuffers(1, &i_buf);
}

void Rectangle::build(){

}

void Rectangle::render() const{

}