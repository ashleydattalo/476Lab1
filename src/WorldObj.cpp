#include "WorldObj.h"
#include "Shape.h"

//Constructor 
WorldObj::WorldObj(glm::vec3 pos, glm::vec3 dir, glm::vec3 vel, 
      float bound_radius, std::string shape_file, string resource)
{ 
   position = pos;
   direction = dir;
   velocity = vel;
   bound_sphere_radius = bound_radius;

   shape = make_shared<Shape>();
   shape->loadMesh(resource + shape_file); // TODO(leia): replace with RESOURCE_DIR when global World class created
   shape->resize();
   shape->init();
}

//Destructor
WorldObj::~WorldObj()
{
}
/*
WordObj::draw(const shared_ptr<Program> prog) const
{
   shape.draw(prog);
}

*/
