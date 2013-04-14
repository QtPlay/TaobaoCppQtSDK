#ifndef SIMBAKEYWORDSVONADDRESPONSE_H
#define SIMBAKEYWORDSVONADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Keyword.h>


/**
 * @brief TOP RESPONSE API: 创建一批关键词
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsvonAddResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordsvonAddResponse() { }

  QList<Keyword> getKeywords() const;
  void setKeywords (QList<Keyword> keywords);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 关键词列表
 **/
  QList<Keyword> keywords;

};

#endif
