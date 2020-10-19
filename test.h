#ifndef __TEST_H__
#include <QWidget>
#include <QPushButton>
#include <QPaintEvent>

class QMyWidget:public QWidget{
Q_OBJECT
public:
    explicit QMyWidget(QWidget * parent = 0);
    ~QMyWidget();
    void paintEvent(QPaintEvent *);
private slots:
    void onBtnClicked();
private:
    QPushButton * btn;
};



#endif
