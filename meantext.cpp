#include "meantext.h"
void MeanText::updateMean(){
    float mean = 0;
    int n = 0;
    for(auto it : subjects){
        if(!(it->toPlainText() == "")){
            mean+= it->getValue();
            n++;
        }
    }
    mean = mean/n;
    QString s = QString::number(mean);
    if(s == "nan")
        s = "0";
    setPlainText(s);
}
void MeanText::addText(Text* t){
    subjects.push_back(t);
    updateMean();
}
