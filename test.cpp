#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QPixmap>
#include <QPainter>
#include <QSplashScreen>
#include <QtMultimedia>
#include <QtOpenGL>
#include <QSignalMapper>
#include <unistd.h>
#include "test.h"


QMyWidget::QMyWidget(QWidget * parent):QWidget(parent){
    btn = new QPushButton("btn_test");
    connect(btn,SIGNAL(clicked(bool)),this,SLOT(onBtnClicked()));
    btn->setParent(this);
    btn->show();
    QMediaPlayer * mplayer;
    mplayer = new QMediaPlayer();
    mplayer->setMedia(QUrl::fromLocalFile(QDir::currentPath() + "/test.wav"));
    mplayer->setVolume(50);
}

QMyWidget::~QMyWidget(){

}

void QMyWidget::onBtnClicked(){
    qDebug("btn clicked");
    QMessageBox::information(NULL,"msg box","btn clicked");
    /* QPixmap pixmap("./lena512.png"); */
    /* this->setPixmap(pixmap); */
    QMediaPlayer * player = new QMediaPlayer();
    player->setMedia(QUrl::fromLocalFile("./test.wav"));
    player->setVolume(50);
}

void QMyWidget::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    pix.load("./lena512.png");
    painter.drawPixmap(0,0,512,512,pix);
}


TestA::TestA(){

    // 内部使用 每个对象链接自己的信号槽
    // this is QT4 signal-slot whit SIGNAL && SLOT declare
    /* QObject::connect(this,SIGNAL(setValue(int)),this,SLOT(valueChanged(int))); */


    // 使用signalmmapper 无参数信号链接有参数信号传导 然后再实现信号到槽函数
#if 0
    QSignalMapper* signalMapper;
    signalMapper = new QSignalMapper(this);
    for(int i = 0;i< 1;i++){

        /// 这里的this 可以换成其它对象 比如widgets 上的多个button
        connect(this,SIGNAL(setValueNoArgForMap()),signalMapper,SLOT(map()));
        signalMapper->setMapping(this,i);
    }
    connect(signalMapper,SIGNAL(mapped(int)),this,SIGNAL(setValue(int)));
    connect(this,SIGNAL(setValue(int)),this,SLOT(valueChanged(int)));
#endif

}

TestA::~TestA(){

}


void TestA::send_signal(int value){
#if 1
    emit setValue(value);
#else /// signalmap
    emit setValueNoArgForMap();
#endif
}

//注意 信号无需实现

void TestA::valueChanged(int value){
    
    qDebug()<<"value"<<value<<endl;
}


int main(int argc , char * argv[]){
    QApplication app(argc,argv);


    TestA a1,a2;

    a1.send_signal(1);
    // this is QT5 signal-slot with class compiler check
    /* QObject::connect(&a1,&TestA::setValue,&a2,&TestA::valueChanged); */

    /* a1.send_signal(1); */
    /* a1.send_signal(2); */
    /* a1.send_signal(3); */
    
    /* // a2 因为没有connect 所以发射无效 */
    /* a2.send_signal(4); */
    /* a2.send_signal(5); */
    /* a2.send_signal(6); */

    /* QMyWidget mw; */
    /* mw.setWindowTitle("helloworld"); */
    /* mw.resize(512,512); */
    /* QSplashScreen * splash  = new QSplashScreen; */
    /* splash->setPixmap(QPixmap("./lena512.png")); */
    /* splash->show(); */
    /* sleep(1); */
    /* mw.show(); */
    /* splash->finish(&mw); */
    /* delete splash; */
    
    return app.exec();
}
