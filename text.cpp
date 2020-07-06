#include "text.h"
#include <iostream>
float Text::getValue()const{
   QString s = toPlainText();
   float n = s.toFloat();
   return n;

}
void Text::valueChanged(){
    if(!isSubscribed){
        isSubscribed = true;
        emit subscribe(this);
     }
    else{
        emit notifySumText();
        emit notifyMeanText();
        emit notifyMaxText();
    }

}
