// Qt5 includes
#include <QGuiApplication>
#include <QMessageLogger>

// Custom made includes
#include <NBody.hpp>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    // Qt5 constructs
    QSurfaceFormat my_surfaceformat;
    
    // Setup desired format
    my_surfaceformat.setRenderableType(QSurfaceFormat::RenderableType::OpenGL);
    my_surfaceformat.setProfile(QSurfaceFormat::OpenGLContextProfile::CoreProfile);
    my_surfaceformat.setSwapBehavior(QSurfaceFormat::SwapBehavior::DoubleBuffer);
    my_surfaceformat.setMajorVersion(3);
    my_surfaceformat.setMinorVersion(3);
    my_surfaceformat.setRedBufferSize(8);
    my_surfaceformat.setGreenBufferSize(8);
    my_surfaceformat.setBlueBufferSize(8);
    my_surfaceformat.setAlphaBufferSize(8);
    my_surfaceformat.setDepthBufferSize(24);
    my_surfaceformat.setStencilBufferSize(8);
    my_surfaceformat.setStereo(false);

    QGripper my_gripper;
    my_gripper.setDeviceType(CL_DEVICE_TYPE_GPU);
    my_gripper.setFormat(my_surfaceformat);
    my_gripper.setVisibility(QWindow::Maximized);
    //my_gripper.setMaxFPS(10);
    //my_gripper.setMaxIPS(10);
    my_gripper.setAnimating(true);

    return app.exec();
}