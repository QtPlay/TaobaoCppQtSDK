#ifndef SIMBAINSIGHTCATSTOPWORDGETRESPONSE_H
#define SIMBAINSIGHTCATSTOPWORDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 类目TOP词查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatstopwordGetResponse : public TaoResponse
{
public:
 virtual ~SimbaInsightCatstopwordGetResponse() { }

  QList<QString> getTopWords() const;
  void setTopWords (QList<QString> topWords);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 类目TOP词查询
 **/
  QList<QString> topWords;

};

#endif
