#ifndef SIMBAINSIGHTCATSRELATEDWORDGETRESPONSE_H
#define SIMBAINSIGHTCATSRELATEDWORDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 类目相关词查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatsrelatedwordGetResponse : public TaoResponse
{
public:
 virtual ~SimbaInsightCatsrelatedwordGetResponse() { }

  QList<QString> getRelatedWords() const;
  void setRelatedWords (QList<QString> relatedWords);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 类目相关词对象列表
 **/
  QList<QString> relatedWords;

};

#endif
