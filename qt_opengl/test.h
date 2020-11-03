#ifndef __TEST_H__
#define __TEST_H__

#include <QOpenGLWidget>
#include <QOpenGLExtraFunctions>
#include <QOpenGLFunctions_3_0>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>

class CoreFunctionWidget : public QOpenGLWidget
                           , protected /*QOpenGLExtraFunctions*/QOpenGLFunctions_3_0
{
    Q_OBJECT
public:
    explicit CoreFunctionWidget(QWidget *parent = nullptr);
    ~CoreFunctionWidget();

protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();

private:
    QOpenGLShaderProgram shaderProgram;
};


#endif
