#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QPixmap>
#include <QPainter>
#include <QSplashScreen>
#include <unistd.h>
#include "test.h"

QMyWidget::QMyWidget(QWidget * parent):QWidget(parent){
    btn = new QPushButton("btn_test");
    connect(btn,SIGNAL(clicked(bool)),this,SLOT(onBtnClicked()));
    btn->setParent(this);
    btn->show();
}

QMyWidget::~QMyWidget(){

}

void QMyWidget::onBtnClicked(){
    qDebug("btn clicked");
    QMessageBox::information(NULL,"msg box","btn clicked");
    /* QPixmap pixmap("./lena512.png"); */
    /* this->setPixmap(pixmap); */

}

void QMyWidget::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    pix.load("./lena512.png");
    painter.drawPixmap(0,0,512,512,pix);
}

int main(int argc , char * argv[]){
    QApplication app(argc,argv);
    QMyWidget mw;
    mw.setWindowTitle("helloworld");
    mw.resize(512,512);

    // QSplashScreen;
    QSplashScreen * splash  = new QSplashScreen;
    splash->setPixmap(QPixmap("./lena512.png"));
    splash->show();
    sleep(5);
    mw.show();
    splash->finish(&mw);
    delete splash;
    return app.exec();
}
