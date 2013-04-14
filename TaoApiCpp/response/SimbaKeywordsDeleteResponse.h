#ifndef SIMBAKEYWORDSDELETERESPONSE_H
#define SIMBAKEYWORDSDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Keyword.h>


/**
 * @brief TOP RESPONSE API: 删除一批关键词
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsDeleteResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordsDeleteResponse() { }

  QList<Keyword> getKeywords() const;
  void setKeywords (QList<Keyword> keywords);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 成功删除的关键词列表
 **/
  QList<Keyword> keywords;

};

#endif
