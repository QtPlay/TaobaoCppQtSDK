#ifndef SIMBAKEYWORDSBYADGROUPIDGETRESPONSE_H
#define SIMBAKEYWORDSBYADGROUPIDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Keyword.h>


/**
 * @brief TOP RESPONSE API: 取得一个推广组的所有关键词
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsbyadgroupidGetResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordsbyadgroupidGetResponse() { }

  QList<Keyword> getKeywords() const;
  void setKeywords (QList<Keyword> keywords);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 取得的关键词列表
 **/
  QList<Keyword> keywords;

};

#endif
