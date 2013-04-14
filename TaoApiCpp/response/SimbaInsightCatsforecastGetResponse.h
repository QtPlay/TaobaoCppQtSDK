#ifndef SIMBAINSIGHTCATSFORECASTGETRESPONSE_H
#define SIMBAINSIGHTCATSFORECASTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/INCategoryTop.h>


/**
 * @brief TOP RESPONSE API: 类目属性预测
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatsforecastGetResponse : public TaoResponse
{
public:
 virtual ~SimbaInsightCatsforecastGetResponse() { }

  QList<INCategoryTop> getInCategoryTops() const;
  void setInCategoryTops (QList<INCategoryTop> inCategoryTops);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 类目对象列表
 **/
  QList<INCategoryTop> inCategoryTops;

};

#endif
