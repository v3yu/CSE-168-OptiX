#pragma once

#include <optixu/optixu_math_namespace.h>
#include <optixu/optixu_matrix_namespace.h>

#include "Geometries.h"
#include "Light.h"

struct Scene
{
    // Info about the output image
    std::string outputFilename;
    unsigned int width, height;

    std::string integratorName;

    std::vector<optix::float3> vertices;

    std::vector<Triangle> triangles;
    std::vector<Sphere> spheres;

    std::vector<DirectionalLight> dlights;
    std::vector<PointLight> plights;

    optix::float3 eye, center, up;
    float fovY;

    Scene()
    {
        outputFilename = "raytrace.png";
        integratorName = "raytracer";
        eye = optix::make_float3(0.0f, 0.0f, 0.0f);
        center = optix::make_float3(0.0f, 0.0f, -1.0f);
        up = optix::make_float3(0.0f, 1.0f, 0.0f);
        fovY = 45.0f;
    }
};