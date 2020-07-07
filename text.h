#ifndef TEXT_H
#define TEXT_H
#include "mainwindow.h"
#include <QTextEdit>
class Text : public QTextEdit
{
    Q_OBJECT
public:
    Text(QWidget* Q): QTextEdit(Q){}
    float getValue() const;
public slots:
    void valueChanged();
private:
    bool isSubscribed = false;
signals:
    void subscribe(Text* t);
    void notifySumText();
    void notifyMeanText();
    void notifyMaxText();
    void notifyMinText();
};

#endif // TEXT_H
