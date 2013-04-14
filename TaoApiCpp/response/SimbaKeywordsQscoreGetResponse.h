#ifndef SIMBAKEYWORDSQSCOREGETRESPONSE_H
#define SIMBAKEYWORDSQSCOREGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/KeywordQscore.h>


/**
 * @brief TOP RESPONSE API: 取得一个推广组的所有关键词的质量得分列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsQscoreGetResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordsQscoreGetResponse() { }

  QList<KeywordQscore> getKeywordQscoreList() const;
  void setKeywordQscoreList (QList<KeywordQscore> keywordQscoreList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 取得的关键词质量得分列表
 **/
  QList<KeywordQscore> keywordQscoreList;

};

#endif
