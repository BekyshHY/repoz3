#ifndef __IntDATA_H__
#define __IntDATA_H__
#inclide "BaseData.h"
class IntData : public BaseData {
private:
int m_data;
public:
IntData(int data = 0);
 ~IntData();
 void print();
};
#endif
