#ifndef SIMBAKEYWORDSBYKEYWORDIDSGETRESPONSE_H
#define SIMBAKEYWORDSBYKEYWORDIDSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Keyword.h>


/**
 * @brief TOP RESPONSE API: 根据一个关键词Id列表取得一组关键词
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsbykeywordidsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordsbykeywordidsGetResponse() { }

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
