#ifndef __DOUBLEDATA_H__
#define __DOUBLEDATA_H__
#inclide "BaseData.h"
class DoubleData : public BaseData {
private:
int d_data;
public:
DoubleData(double data = 0);
 ~DoubleData();
 void print();
};
#endif
