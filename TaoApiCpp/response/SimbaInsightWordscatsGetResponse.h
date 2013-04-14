#ifndef SIMBAINSIGHTWORDSCATSGETRESPONSE_H
#define SIMBAINSIGHTWORDSCATSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/INWordCategory.h>


/**
 * @brief TOP RESPONSE API: 词和类目查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightWordscatsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaInsightWordscatsGetResponse() { }

  QList<INWordCategory> getInWordCategories() const;
  void setInWordCategories (QList<INWordCategory> inWordCategories);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 词和类目基础信息对象列表
 **/
  QList<INWordCategory> inWordCategories;

};

#endif
