#ifndef SUMTEXT_H
#define SUMTEXT_H
#include "mainwindow.h"
#include <QTextEdit>
#include "text.h"
class SumText : public QTextEdit
{
    Q_OBJECT
public:
    SumText(QWidget* Q) : QTextEdit(Q){
        setReadOnly(true);
    }
public slots:
    void updateSum();
    void addText(Text* t);
private:
    std::list<Text*> subjects;
};

#endif // SUMTEXT_H
