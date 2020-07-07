#include "mintext.h"

void MinText::addText(Text* t){
    subjects.push_back(t);
    updateMin();
}

void MinText::updateMin(){
    float min;
    auto it = subjects.begin();
    while(it!= subjects.end() && (*it)->toPlainText() == "")
        it++;
    if(it != subjects.end()){
        min = (*it)->getValue();
        for(auto it : subjects){
                if(it->toPlainText() != "" && it->getValue() < min)
                     min = it->getValue();
        }
    }
    else
        min = 0;
    QString s = QString::number(min);
    setPlainText(s);
}
