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

/* singal-slot test */
class TestA:public QObject{
Q_OBJECT
public:
    TestA();
    ~TestA();

private:
    int mValue;

public:
    void send_signal(int value);
public Q_SLOTS:
    void  valueChanged(int newValue);

Q_SIGNALS:
    void setValue(int value);

};



#endif
