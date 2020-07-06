#include "maxtext.h"

void MaxText::updateMax(){
    float max;
    auto it = subjects.begin();
    while(it!= subjects.end() && (*it)->toPlainText() == "")
        it++;
    if(it != subjects.end()){
        max = (*it)->getValue();
        for(auto it : subjects){
                if(it->toPlainText() != "" && it->getValue() > max)
                     max = it->getValue();
        }
    }
    else
        max = 0;
    QString s = QString::number(max);
    setPlainText(s);
}

void MaxText::addText(Text* t){
    subjects.push_back(t);
    updateMax();
}
