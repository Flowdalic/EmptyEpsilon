#ifndef MESH_H
#define MESH_H

#include "nonCopyable.h"
#include "stringImproved.h"

#include <glm/vec3.hpp>

struct MeshVertex
{
    float position[3];
    float normal[3];
    float uv[2];
};

class Mesh : sp::NonCopyable
{
    std::vector<MeshVertex> vertices;
    uint32_t vbo;
public:
    explicit Mesh(std::vector<MeshVertex>&& vertices);
    ~Mesh();

    void render(int32_t position_attrib, int32_t texcoords_attrib, int32_t normal_attrib);
    glm::vec3 randomPoint();

    static Mesh* getMesh(const string& filename);
};

#endif//MESH_H
