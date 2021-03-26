#include "triangle.h"
#include <QRandomGenerator>

ExampleTriangleGeometry::ExampleTriangleGeometry()
{
    updateData();
}


void ExampleTriangleGeometry::updateData()
{
    clear();

    int stride = 6 * sizeof(float);

    QByteArray vertexData(12 * stride, Qt::Initialization::Uninitialized);
    float *p = reinterpret_cast<float *>(vertexData.data());

    // a tet : 1st face
    *p++ = 0.0f; *p++ = 0.0f; *p++ = 0.0f;
    *p++ = 0.0f; *p++ = 0.0f; *p++ = 1.0f;
    *p++ = 1.0f; *p++ = 0.0f; *p++ = 0.0f;
    *p++ = 0.0f; *p++ = 0.0f; *p++ = 1.0f;
    *p++ = 0.5f; *p++ = 0.5f; *p++ = 0.0f;
    *p++ = 0.0f; *p++ = 0.0f; *p++ = 1.0f;

    // 2nd face
    *p++ = 1.0f; *p++ = 0.0f; *p++ = 0.0f;
    *p++ = 1.0f; *p++ = 0.0f; *p++ = -1.0f;
    *p++ = 0.5f; *p++ = 0.0f; *p++ = -0.5f;
    *p++ = 1.0f; *p++ = 0.0f; *p++ = -1.0f;
    *p++ = 0.5f; *p++ = 0.5f; *p++ = 0.0f;
    *p++ = 1.0f; *p++ = 0.0f; *p++ = -1.0f;

    //3rd face
    *p++ = 0.0f; *p++ = 0.0f; *p++ = 0.0f;
    *p++ = -1.0f; *p++ = 0.0f; *p++ = -1.0f;
    *p++ = 0.5f; *p++ = 0.5f; *p++ = 0.0f;
    *p++ = -1.0f; *p++ = 0.0f; *p++ = -1.0f;
    *p++ = 0.5f; *p++ = 0.0f; *p++ = -0.5f;
    *p++ = -1.0f; *p++ = 0.0f; *p++ = -1.0f;

    //4th face
    *p++ = 0.0f; *p++ = 0.0f; *p++ = 0.0f;
    *p++ = 0.0f; *p++ = -1.0f; *p++ = 0.0f;
    *p++ = 0.5f; *p++ = 0.0f; *p++ = -0.5f;
    *p++ = 0.0f; *p++ = -1.0f; *p++ = 0.0f;
    *p++ = 1.0f; *p++ = 0.0f; *p++ = 0.0f;
    *p++ = 0.0f; *p++ = -1.0f; *p++ = 0.0f;



    setVertexData(vertexData);
    setStride(stride);

    setPrimitiveType(QQuick3DGeometry::PrimitiveType::Triangles);

    addAttribute(QQuick3DGeometry::Attribute::PositionSemantic,
                 0,
                 QQuick3DGeometry::Attribute::F32Type);

    addAttribute(QQuick3DGeometry::Attribute::NormalSemantic,
                 3 * sizeof(float),
                 QQuick3DGeometry::Attribute::F32Type);
}
