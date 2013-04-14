#ifndef SIMBAINSIGHTCATSGETRESPONSE_H
#define SIMBAINSIGHTCATSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/INCategoryTop.h>


/**
 * @brief TOP RESPONSE API: 获取类目信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaInsightCatsGetResponse() { }

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
