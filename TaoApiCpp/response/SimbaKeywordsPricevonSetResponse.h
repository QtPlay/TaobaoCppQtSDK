#ifndef SIMBAKEYWORDSPRICEVONSETRESPONSE_H
#define SIMBAKEYWORDSPRICEVONSETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Keyword.h>


/**
 * @brief TOP RESPONSE API: 设置一批关键词的出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsPricevonSetResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordsPricevonSetResponse() { }

  QList<Keyword> getKeywords() const;
  void setKeywords (QList<Keyword> keywords);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 成功设置关键词价格的关键词列表
 **/
  QList<Keyword> keywords;

};

#endif
