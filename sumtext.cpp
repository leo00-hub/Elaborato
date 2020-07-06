#include "sumtext.h"
#include <iostream>

void SumText::updateSum(){
    float sum = 0;
    for(auto it : subjects)
        sum += it->getValue();
    QString s = QString::number(sum);
    setPlainText(s);
}
void SumText::addText(Text* t){
    subjects.push_back(t);
    updateSum();
}
