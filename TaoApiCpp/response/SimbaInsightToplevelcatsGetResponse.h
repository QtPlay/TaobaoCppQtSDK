#ifndef SIMBAINSIGHTTOPLEVELCATSGETRESPONSE_H
#define SIMBAINSIGHTTOPLEVELCATSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/INCategoryTop.h>


/**
 * @brief TOP RESPONSE API: 获取一级类目
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightToplevelcatsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaInsightToplevelcatsGetResponse() { }

  QList<INCategoryTop> getInCategoryTops() const;
  void setInCategoryTops (QList<INCategoryTop> inCategoryTops);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 得到一级类目
 **/
  QList<INCategoryTop> inCategoryTops;

};

#endif
