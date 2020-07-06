#ifndef MEANTEXT_H
#define MEANTEXT_H
#include "text.h"
#include <QTextEdit>
class MeanText : public QTextEdit
{
    Q_OBJECT
public:
    MeanText(QWidget* Q): QTextEdit(Q){
        setReadOnly(true);
    }
public slots:
    void updateMean();
    void addText(Text* t);
private:
    std::list<Text*> subjects;
};

#endif // MEANTEXT_H
