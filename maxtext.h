#ifndef MAXTEXT_H
#define MAXTEXT_H
#include <QTextEdit>
#include "text.h"
class MaxText : public QTextEdit
{
    Q_OBJECT
public:
    MaxText(QWidget* Q) : QTextEdit(Q){
        setReadOnly(true);
    }
public slots:
    void updateMax();
    void addText(Text* t);
private:
    std::list<Text*> subjects;
};

#endif // MAXTEXT_H
