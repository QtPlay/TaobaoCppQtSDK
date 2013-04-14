#ifndef SIMBAINSIGHTWORDSBASEGETRESPONSE_H
#define SIMBAINSIGHTWORDSBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/INWordBase.h>


/**
 * @brief TOP RESPONSE API: 词基础数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightWordsbaseGetResponse : public TaoResponse
{
public:
 virtual ~SimbaInsightWordsbaseGetResponse() { }

  QList<INWordBase> getInWordBases() const;
  void setInWordBases (QList<INWordBase> inWordBases);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 词基础数据对象列表
 **/
  QList<INWordBase> inWordBases;

};

#endif
