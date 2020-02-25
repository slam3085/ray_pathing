#pragma once
#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "hittable.h"
#include "ray.h"


struct HittableList : public Hittable
{
    Hittable** list;
    int size;
    __device__ virtual bool hit(Ray* ray, float t_min, float t_max, HitRecord* rec) const;
};