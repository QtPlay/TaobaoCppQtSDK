#ifndef SIMBAINSIGHTCATSBASEGETRESPONSE_H
#define SIMBAINSIGHTCATSBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/INCategoryBase.h>


/**
 * @brief TOP RESPONSE API: 类目基础数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatsbaseGetResponse : public TaoResponse
{
public:
 virtual ~SimbaInsightCatsbaseGetResponse() { }

  QList<INCategoryBase> getInCategoryBases() const;
  void setInCategoryBases (QList<INCategoryBase> inCategoryBases);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 类目基础数据列表
 **/
  QList<INCategoryBase> inCategoryBases;

};

#endif
