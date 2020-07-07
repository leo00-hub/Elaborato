#ifndef MINTEXT_H
#define MINTEXT_H
#include <QTextEdit>
#include "text.h"
class MinText : public QTextEdit
{
    Q_OBJECT
public:
    MinText(QWidget* Q) : QTextEdit(Q){
        setReadOnly(true);
    }
public slots:
    void updateMin();
    void addText(Text* t);
private:
    std::list<Text*> subjects;

};

#endif // MINTEXT_H
