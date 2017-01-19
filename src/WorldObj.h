#ifndef _WORLD_OBJ_H_
#define _WORLD_OBJ_H_

#include "glm/glm.hpp"
#include "Shape.h"

using namespace std;

class WorldObj
{
public: 
   WorldObj(glm::vec3 pos, glm::vec3 dir, glm::vec3 vel, float bound_radius, 
      string shape_file, string resource); //Constructor
   ~WorldObj();      //Destructor
   //void draw(const std::shared_ptr<Program> prog) const;

private:
   glm::vec3 position;
   glm::vec3 direction;
   glm::vec3 velocity;
   float bound_sphere_radius;
   shared_ptr<Shape> shape;
};

#endif

/* Things that already exist in shape: 
 *  - loadMesh 
 *  - init 
 *  - draw 
 *  - ComputeTex() 
 *  - resize 
 * 
 * Things that still need to be stored: 
 *  - position vector
 *  - Direction vector 
 *  - velocity
 *  - bounding box 
 * 
 * Functions needed: 
 *  - Constructor
 *  - Destructor 
 *  - Step/Update 
 *  - draw 
 */      